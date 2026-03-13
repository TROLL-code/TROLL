#include "troll.hpp"
#include "constants.hpp"
#include "lookUpTables_cache.hpp"
#include "context.hpp"
#include "params/param_registry.hpp"

// File-scope globals — declared extern in troll.hpp, defined here once.
Context ctx;
vector<Species> S;
vector<Tree> T;
int mpi_rank = 0;
int mpi_size = 0;
int easympi_rank = 0;

// Output file streams
fstream output_info;
fstream output_basic[4];
fstream output_extended[9];
fstream output_visual[2];
fstream output_pointcloud;
#ifdef MIP_Lichstein
fstream output_MIP_eco;
fstream output_MIP_ind;
#endif
#ifdef Output_ABC
fstream output_abc[11];
#endif
#ifdef WATER
fstream output[40];
#endif
#ifdef TRACK_INDIVIDUALS
fstream output_track[3];
#endif

// Species constructor and Species::Init() → moved to src/species.cpp

// ###########################################
// ###########################################
// ###########     MAIN PROGRAM    ###########
// ###########################################
// ###########################################

int main(int argc, char *argv[])
{

    //!*********************
    //!** Initializations **
    //!*********************
#ifdef MPI // Lookup processor number / total number of processors
    MPI_Init(&argc, &argv);
    MPI_Comm_rank(MPI_COMM_WORLD, &p_rank);
    MPI_Comm_size(MPI_COMM_WORLD, &size);
#else
    mpi_rank = 0;
    mpi_size = 1;
#endif
    easympi_rank = 0;

    for (int argn = 1; argn < argc; argn++)
    { // Arguments of the input and output files
        if (*argv[argn] == '-')
        {
            switch (*(argv[argn] + 1))
            {
            case 'i':
                ctx.buffers.bufi = argv[argn] + 2;
                break;
            case 'd': // new v.3.0; initialisation of daytime variation in a separate file ('d' for daytime variation)
                ctx.buffers.bufi_daytimevar = argv[argn] + 2;
                break;
            case 'm': // new v.2.4; initialisation of climate parameters from separate file ('m' for meterology)
                ctx.buffers.bufi_climate = argv[argn] + 2;
                break;
            case 'p': // new v.3.0; initialisation of soil parameters from separate file ('p' for pedology)
                ctx.buffers.bufi_soil = argv[argn] + 2;
                break;
            case 's': // new v.3.0; initialisation of species parameters from separate file
                ctx.buffers.bufi_species = argv[argn] + 2;
                break;
            case 'o':
                ctx.buffers.buf = argv[argn] + 2;
                break;
            case 'f': // new v.2.3: initialisation from field, 'f' for "forest", "field data"
                ctx.buffers.bufi_data = argv[argn] + 2;
                ctx.opt._FromInventory = 1; // new v.3.1: automatic recognition of whether data sheet is provided or not
                break;
            case 'w': // new v.2.3: initialisation from field, 'f' for "forest", "field data"
                ctx.buffers.bufi_dataSWC = argv[argn] + 2;
                break;
            case 'l':
                ctx.buffers.bufi_pointcloud = argv[argn] + 2; // new v.3.1.6: output of simulated point clouds for TROLL-created stands
                ctx.opt._OUTPUT_pointcloud = 1;
                break;
            case 'n':
                easympi_rank = atoi(argv[argn] + 2); // new v.2.2
            }
        }
    }

    // input files
    sprintf(ctx.fileio.inputfile, "%s", ctx.buffers.bufi);
    sprintf(ctx.fileio.inputfile_daytimevar, "%s", ctx.buffers.bufi_daytimevar);
    sprintf(ctx.fileio.inputfile_climate, "%s", ctx.buffers.bufi_climate);
    sprintf(ctx.fileio.inputfile_soil, "%s", ctx.buffers.bufi_soil);
    sprintf(ctx.fileio.inputfile_species, "%s", ctx.buffers.bufi_species);

    if (ctx.opt._OUTPUT_pointcloud)
    {
        sprintf(ctx.fileio.inputfile_pointcloud, "%s", ctx.buffers.bufi_pointcloud); // v.3.1.6
    }

    if (ctx.opt._FromInventory)
    {
        sprintf(ctx.fileio.inputfile_inventory, "%s", ctx.buffers.bufi_data);
#ifdef WATER
        sprintf(ctx.fileio.inputfile_SWC, "%s", ctx.buffers.bufi_dataSWC);
#endif
    }
    // Registers parameters (used by AssignParamFromRegistry, the AssignValueGlobal replacement)
    // see src/params/param_registry.hpp and src/params/param_registry.cpp
    RegisterParameters(ctx);
    // v.3.1: removed par output, because no single parameter sheet provided anymore (in future all separate parameter sheets could be provided as outputs as well
    ReadInputGeneral(ctx); // v.3.1 has to be done before initialisation of random number generators (ctx.opt._NONRANDOM)

    // Stuff for constant number generator
    const gsl_rng_type *Trandgsl;
    gsl_rng_env_setup();
    Trandgsl = gsl_rng_default;
    ctx.rng.gslrand = gsl_rng_alloc(Trandgsl);

    cout << "Easy MPI rank: " << easympi_rank << endl;

    unsigned long int t = (unsigned long int)time(NULL);
    unsigned long int seed = 3 * t + 2 * (easympi_rank + 1) + 1;

    if (ctx.opt._NONRANDOM == 1)
        seed = 1;

    gsl_rng_set(ctx.rng.gslrand, seed);

    cout << "On proc #" << easympi_rank << " seed: " << seed << endl;
    sprintf(ctx.fileio.outputinfo, "%s_%i_info.txt", ctx.buffers.buf, easympi_rank);
    output_info.open(ctx.fileio.outputinfo, ios::out);
    if (!output_info)
        cerr << "ERROR with info file" << endl;

    Initialise(ctx); // Read global parameters

    InitialiseOutputStreams(); // Initialise Output streams, taken outside of Initialise() function in v.3.1 to mirror AllocMem()
    AllocMem(ctx);             // Memory allocation

#ifdef Output_ABC
    InitialiseABC();
#endif

    if (ctx.opt._OUTPUT_pointcloud)
    {
        ReadInputPointcloud(); // parameters for point cloud generation, v.3.1.6
    }

    if (ctx.opt._FromInventory)
    {
        ReadInputInventory(); // Initial configuration of the forest, read from data
    }

    cout << "klight is: " << ctx.params.klight << endl;
    cout << "CO2 concentration is: " << ctx.params.Cair << endl;
    cout << "Number of species: " << ctx.grid.nbspp << endl
         << endl;
#ifdef WATER
    cout << "Atmospheric pressure is: " << ctx.params.PRESS << endl;
#endif

    if (ctx.opt._GPPcrown == 1)
        cout << "Activated Module: FastGPP" << endl;
    if (ctx.opt._BASICTREEFALL == 1)
        cout << "Activated Module: BASICTREEFALL" << endl;
    if (ctx.opt._NDD == 1)
        cout << "Activated Module: NDD" << endl;
    if (ctx.opt._SEEDTRADEOFF == 1)
        cout << "Activated Module: SEEDTRADEOFF" << endl;
    if (ctx.opt._FromInventory == 1)
        cout << "Activated Module: FromInventory" << endl;
    if (ctx.opt._OUTPUT_extended == 1)
        cout << "Activated Module: OUTPUT_extended" << endl;
    if (ctx.opt._OUTPUT_inventory == 1)
        cout << "Activated Module: OUTPUT_inventory" << endl;
    if (ctx.opt._OUTPUT_extended == 1 && ctx.crown.extent_visual > 0)
        cout << "Activated visualization output." << endl;
    if (ctx.opt._OUTPUT_pointcloud == 1)
        cout << "Activated Module: Point cloud output (simplified ALS simulation)" << endl; // v.3.1.6

    //!*********************
    //!** Evolution loop  **
    //!*********************

    cout << "Simulation starts with " << ctx.diag.nblivetrees << " trees." << endl;

    //** Information in file info **
    //******************************
    if (!mpi_rank)
    {
        output_info << "\nTROLL simulator\n\n";
        output_info << "\n   2D discrete network: horizontal step = " << ctx.grid.LH
                    << " m, one tree per " << ctx.grid.LH * ctx.grid.LH << " m^2 \n\n";
        output_info << "\n   Tree : (t_dbh,t_height,t_CR,t_CD) \n\n";
        output_info << "\n            + one species label \n\n";
        output_info << " Number of sites      : " << ctx.grid.rows << "x" << ctx.grid.cols << "\n";
        output_info << " Number of iterations : " << ctx.time.nbiter << "\n";
        output_info << " Duration of timestep : " << ctx.time.timestep << " years\n";
        output_info << " Number of Species    : " << ctx.grid.nbspp << "\n\n";
        output_info.flush();
    }

    // initial pattern, should be empty, unless an inventory has been provided
    if (ctx.opt._OUTPUT_extended & !ctx.opt._OUTPUT_inventory)
        OutputSnapshot(output_basic[1], 1, 0.01); // Initial Pattern, for trees > 0.01m DBH
    else if (ctx.opt._OUTPUT_inventory)
        OutputSnapshot(output_basic[1], 1, 0.001);
    else
        OutputSnapshot(output_basic[1], 1, 0.1); // Initial Pattern, for trees > 0.1m DBH

    double start_time, stop_time, duration = 0.0; // for simulation duration
    stop_time = clock();
    for (ctx.time.iter = 0; ctx.time.iter < ctx.time.nbiter; ctx.time.iter++)
    {
        start_time = stop_time;

        Evolution(ctx);
        stop_time = clock();
        duration += fmaxf(stop_time - start_time, 0.0);

        if (ctx.opt._OUTPUT_extended == 1 && ctx.crown.extent_visual > 0)
        {
            int timeofyear = GetTimeofyear();
            if (timeofyear == 0)
                OutputVisual();
        }

        /*if(ctx.opt._OUTPUT_pointcloud > 0 && ctx.time.iter == ctx.pc.iter_pointcloud_generation){
            ExportPointcloud(ctx.pc.mean_beam_pc, ctx.pc.sd_beam_pc, ctx.pc.klaser_pc, ctx.pc.transmittance_laser, output_pointcloud); // v.3.1.6
        }*/

#ifdef Output_ABC
        int timespan_abc = 10 * ctx.time.iterperyear; // every 10 years, modified in v.3.0
        int last_abc = ((ctx.time.nbiter + 5) / timespan_abc);
        last_abc *= timespan_abc;
        last_abc += -5;
        if ((ctx.time.iter + 5) % timespan_abc == 0 || ctx.time.iter == last_abc - 43)
        {
            // simulated lidar, based on data from Nouragues ALS, assuming NIR laser
            float transmittance_nir = 0.4; // transmittance of leaves in near infrared, used to calculate chances of laser hit
            float mean_beam = 12.0;        // avg number of beams that reach top of canopy
            float sd_beam = 5.0;           // standard deviation of those

            UpdateTransmittanceCHM_ABC(mean_beam, sd_beam, ctx.params.klight, transmittance_nir);
            OutputABC();
            UpdateDBHtrackingABC();
        }
#endif
    }

    cout << "Simulation ends with " << ctx.diag.nblivetrees << " trees." << endl;

    // final pattern
    if (ctx.opt._OUTPUT_extended & !ctx.opt._OUTPUT_inventory)
    {
        OutputSnapshot(output_basic[2], 1, 0.01); // Final Pattern, for trees > 0.01m DBH
    }
    else if (ctx.opt._OUTPUT_inventory)
    {
        OutputSnapshot(output_basic[2], 1, 0.001);
    }
    else
    {
        OutputSnapshot(output_basic[2], 1, 0.1); // Final Pattern, for trees > 0.1m DBH
    }
    if (ctx.opt._OUTPUT_extended)
    {
        OutputLAI(output_extended[7]);
        OutputCHM(output_extended[8]);
    }
    if (ctx.opt._OUTPUT_inventory)
    {
        for (int d = 0; d < ctx.grid.nbdcells; d = d + 1)
        {
            output_basic[3] << d;
            for (int l = 0; l < ctx.soil.nblayers_soil; l = l + 1)
            {
                output_basic[3] << "\t" << ctx.soil.SWC3D[l][d];
            }
            output_basic[3] << endl;
        }
    }

    //***********************
    //** End of simulation **
    //***********************
    float durf = duration / double(CLOCKS_PER_SEC); // output of the effective CPU time
#ifdef MPI
    MPI_Reduce(&durf, &durf, 1, MPI_FLOAT, MPI_SUM, 0, MPI_COMM_WORLD);
#endif
    if (!mpi_rank)
    {
        cout << "\n";
#ifdef MPI
        output_info << "Number of processors : " << mpi_size << "\n";
#endif
        output_info << "Average computation time : " << durf / float(mpi_size) << " seconds.\n";
        output_info << "End of simulation.\n";
        output_info.flush();
        cout << "\nNumber of processors : " << mpi_size << "\n";
        cout << "Average computation time : " << durf / float(mpi_size) << " seconds.\n";
        cout << "End of simulation.\n";
    }

    CloseOutputs(); // new in v.3.1: Close and clear outputs, maybe not necessary as main function terminates shortly after, but maybe it ensures a cleaner communication with file system/within Rcpp
    FreeMem();      // Free dynamic memory  //! added in oct2013
#ifdef easyMPI
    MPI::Finalize();
#endif
    exit(0);
}

// ##########################################
// ###########################################
// ######  Initialisation routines    ########
// ###########################################
// ###########################################



//! Global function: initialise intraspecific variables
//! Global function: initialise output streams
void InitialiseOutputStreams()
{
    char nnn[200];
    if (!mpi_rank)
    {
        sprintf(nnn, "%s_%i_sumstats.txt", ctx.buffers.buf, easympi_rank);
        output_basic[0].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_initial_pattern.txt", ctx.buffers.buf, easympi_rank); // previously "state" output, but not used anymore, overwritten for initial pattern
        output_basic[1].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_final_pattern.txt", ctx.buffers.buf, easympi_rank);
        output_basic[2].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_final_SWC3D.txt", ctx.buffers.buf, easympi_rank);
        output_basic[3].open(nnn, ios::out);

        // write headers for files
        output_basic[0] << "iter\tsum1\tsum10\tsum30\tba\tba10\tagb\tgpp\tnpp\trday\trnight\trstem\tlitterfall" << endl;
        // headers for initial and final patterns are written automatically

        sprintf(nnn, "%s_%i_sumstats_species.txt", ctx.buffers.buf, easympi_rank);
        output_extended[0].open(nnn, ios::out);
        output_extended[0] << "iter\tspecies\tsum1\tsum10\tsum30\tba\tba10\tagb\tgpp\tnpp\trday\trnight\trstem\tlitterfall" << endl;

#ifdef MIP_Lichstein
        sprintf(nnn, "%s_%i_MIP_eco.txt", ctx.buffers.buf, easympi_rank);
        output_MIP_eco.open(nnn, ios::out);
        sprintf(nnn, "%s_%i_MIP_ind.txt", ctx.buffers.buf, easympi_rank);
        output_MIP_ind.open(nnn, ios::out);

        output_MIP_eco << "YEAR\tMONTH\tDAY\tGPP\tNPP\tET\tLAI\tLFLIT\tSW1\tSW2\tSW3\tSW4" << endl;
        output_MIP_ind << "YEAR\tSP\tID\tNLIVE\tNDEAD\tDBH\tHT\tTB\tAGB\tWD\tSLA\tNMASS\tPMASS\tDBHMAX\tTLP\tLA" << endl;
#endif

        if (ctx.opt._OUTPUT_extended)
        {
            sprintf(nnn, "%s_%i_sumstats_species.txt", ctx.buffers.buf, easympi_rank);
            output_extended[0].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_ppfd0.txt", ctx.buffers.buf, easympi_rank);
            output_extended[1].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_death.txt", ctx.buffers.buf, easympi_rank);
            output_extended[2].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_death_snapshots.txt", ctx.buffers.buf, easympi_rank);
            output_extended[3].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_deathrate.txt", ctx.buffers.buf, easympi_rank);
            output_extended[4].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_sdd.txt", ctx.buffers.buf, easympi_rank);
            output_extended[5].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_vertd.txt", ctx.buffers.buf, easympi_rank);
            output_extended[6].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_LAI.txt", ctx.buffers.buf, easympi_rank);
            output_extended[7].open(nnn, ios::out);
            sprintf(nnn, "%s_%i_CHM.txt", ctx.buffers.buf, easympi_rank);
            output_extended[8].open(nnn, ios::out);

            // write headers
            output_extended[0] << "iter\tspecies\tsum1\tsum10\tsum30\tba\tba10\tagb\tgpp\tnpp\trday\trnight\trstem\tlitterfall" << endl;
            output_extended[1] << "iter\tvariable\tvalue\tresidual" << endl;
            if (ctx.opt._BASICTREEFALL)
                output_extended[2] << "iter\tnbdead_n1\tnbdead_n10\tnbTreefall1\tnbTreefall10" << endl;
            else
                output_extended[2] << "iter\tnbdead_n1\tnbdead_n10" << endl;
            output_extended[3] << "iter\tspecies\tage\tdbh\theight" << endl;
            output_extended[4] << "iter\twsg\tdbh\tbasal\tdr" << endl;
            output_extended[5] << "iter\td\tfreq" << endl;
            output_extended[6] << "iter\th\tfreq" << endl;

            if (ctx.crown.extent_visual > 0)
            {
                sprintf(nnn, "%s_%i_visual_field.txt", ctx.buffers.buf, easympi_rank);
                output_visual[0].open(nnn, ios::out);
#ifdef CHM_SPIKEFREE
                output_visual[0] << "iter" << "\t" << "row" << "\t" << "col" << "\t" << "height" << "\t" << "height_spikefree" << "\t" << "LAI" << endl; // header
#else
                output_visual[0] << "iter" << "\t" << "row" << "\t" << "col" << "\t" << "height" << "\t" << "LAI" << endl; // header
#endif

                sprintf(nnn, "%s_%i_visual_slice.txt", ctx.buffers.buf, easympi_rank);
                output_visual[1].open(nnn, ios::out);
                output_visual[1] << "iter" << "\t" << "row" << "\t" << "col" << "\t" << "height" << "\t" << "sp_lab" << "\t" << "ratio_height_Ct" << "\t" << "ratio_NPP_GPP" << endl; // header
            }
        }

        // v.3.1.6 output for point cloud
        if (ctx.opt._OUTPUT_pointcloud)
        {
            sprintf(nnn, "%s_%i.las", ctx.buffers.buf, easympi_rank);
            output_pointcloud.open(nnn, ios::out | ios::binary);
            output_pointcloud.imbue(locale::classic()); // justification here: https://stackoverflow.com/questions/14750496/sending-integer-to-fstream-as-little-endian; locale regulates how streams print and read values (i.e. commas vs. points for decimals, etc.); setting it to classic to ensure portability, but not entirely sure how important this is in practice for binary files
        }

#ifdef Output_ABC
        sprintf(nnn, "%s_%i_abc_traitconservation.txt", ctx.buffers.buf, easympi_rank);
        output_abc[0].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_ground.txt", ctx.buffers.buf, easympi_rank);
        output_abc[1].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_chm.txt", ctx.buffers.buf, easympi_rank);
        output_abc[2].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_chmALS.txt", ctx.buffers.buf, easympi_rank);
        output_abc[3].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_transmittance.txt", ctx.buffers.buf, easympi_rank);
        output_abc[4].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_transmittanceALS.txt", ctx.buffers.buf, easympi_rank);
        output_abc[5].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_species.txt", ctx.buffers.buf, easympi_rank);
        output_abc[6].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_species10.txt", ctx.buffers.buf, easympi_rank);
        output_abc[7].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_traits.txt", ctx.buffers.buf, easympi_rank);
        output_abc[8].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_traits10.txt", ctx.buffers.buf, easympi_rank);
        output_abc[9].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_abc_biomass.txt", ctx.buffers.buf, easympi_rank);
        output_abc[10].open(nnn, ios::out);
#endif

#ifdef WATER
        // sprintf(nnn,"%s_%i_water_balance.txt",ctx.buffers.buf, easympi_rank);
        // output_water[0].open(nnn, ios::out);

        sprintf(nnn, "%s_%i_water_balance.txt", ctx.buffers.buf, easympi_rank);
        output[11].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_site1.txt", ctx.buffers.buf, easympi_rank);
        output[12].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_site2.txt", ctx.buffers.buf, easympi_rank);
        output[13].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_site3.txt", ctx.buffers.buf, easympi_rank);
        output[14].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_site4.txt", ctx.buffers.buf, easympi_rank);
        output[15].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_site5.txt", ctx.buffers.buf, easympi_rank);
        output[16].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_site6.txt", ctx.buffers.buf, easympi_rank);
        output[17].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_state_begin.txt", ctx.buffers.buf, easympi_rank);
        output[28].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_state_mid.txt", ctx.buffers.buf, easympi_rank);
        output[29].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_state_end.txt", ctx.buffers.buf, easympi_rank);
        output[30].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_SWC_begin.txt", ctx.buffers.buf, easympi_rank);
        output[1].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_SWC_mid.txt", ctx.buffers.buf, easympi_rank);
        output[2].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_SWC_end.txt", ctx.buffers.buf, easympi_rank);
        output[3].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_SWP_begin.txt", ctx.buffers.buf, easympi_rank);
        output[4].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_SWP_mid.txt", ctx.buffers.buf, easympi_rank);
        output[5].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_SWP_end.txt", ctx.buffers.buf, easympi_rank);
        output[6].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_litterfall.txt", ctx.buffers.buf, easympi_rank);
        output[7].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_waterfluxes_begin.txt", ctx.buffers.buf, easympi_rank);
        output[18].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_waterfluxes_mid.txt", ctx.buffers.buf, easympi_rank);
        output[19].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_waterfluxes_end.txt", ctx.buffers.buf, easympi_rank);
        output[20].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_LAIdynamics.txt", ctx.buffers.buf, easympi_rank);
        output[21].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_LAIyoung.txt", ctx.buffers.buf, easympi_rank);
        output[22].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_LAImature.txt", ctx.buffers.buf, easympi_rank);
        output[23].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_LAIold.txt", ctx.buffers.buf, easympi_rank);
        output[24].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_phi_root.txt", ctx.buffers.buf, easympi_rank);
        output[31].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_LAIprofile.txt", ctx.buffers.buf, easympi_rank);
        output[32].open(nnn, ios::out);
        sprintf(nnn, "%s_%i_soilproperties.txt", ctx.buffers.buf, easympi_rank);
        output[33].open(nnn, ios::out);

        // write headers
        output[21] << "iter\tLAI" << endl;
        output[22] << "iter";
        output[23] << "iter";
        output[24] << "iter";
        for (int l = 0; l < ctx.grid.HEIGHT + 1; l++)
        {
            output[22] << "\t" << "h_" << l;
            output[23] << "\t" << "h_" << l;
            output[24] << "\t" << "h_" << l;
        }
        output[22] << endl;
        output[23] << endl;
        output[24] << endl;
        output[31] << "iter\tabundance_weighted_phi_root\tabundance_weighted_phi_root_n10\tagb_weighted_phi_root" << endl;
        output[32] << "iter\theight\tLAI" << endl;
        output[1] << "layer";
        output[2] << "layer";
        output[3] << "layer";
        output[4] << "layer";
        output[5] << "layer";
        output[6] << "layer";
        output[18] << "variable";
        output[19] << "variable";
        output[20] << "variable";
        for (int d = 0; d < ctx.grid.nbdcells; d++)
        {
            output[1] << "\t" << "dcell_" << d;
            output[2] << "\t" << "dcell_" << d;
            output[3] << "\t" << "dcell_" << d;
            output[4] << "\t" << "dcell_" << d;
            output[5] << "\t" << "dcell_" << d;
            output[6] << "\t" << "dcell_" << d;
            output[18] << "\t" << "dcell_" << d;
            output[19] << "\t" << "dcell_" << d;
            output[20] << "\t" << "dcell_" << d;
        }
        output[1] << endl;
        output[2] << endl;
        output[3] << endl;
        output[4] << endl;
        output[5] << endl;
        output[6] << endl;
        output[18] << endl;
        output[19] << endl;
        output[20] << endl;
        output[11] << "iter\tprecipitation\tinterception\tthroughfall\trunoff\tleak\tevaporation";
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
            output[11] << "\t" << "transpitation_" << l;
        output[11] << "\t" << "transpiration1016";
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
            output[11] << "\t" << "SWC_" << l;
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
            output[11] << "\t" << "SWP_" << l;
        output[11] << endl;
        string sites_headers = "iter\tsite\tsp_lab\theight\tdbh\tlitter\tage\tLA\tyougLA\tmatureLA\toldLA\tCR\tCD\tGPP\tNPP\tRstem\tRnight\tLAI3D_canopy\tLAI3D_base_crown\troot_depth\tphi_root\tWSFs\tWSFns\ttranspiration\tLAImax\tLAmax";
        output[12] << sites_headers;
        output[13] << sites_headers;
        output[14] << sites_headers;
        output[15] << sites_headers;
        output[16] << sites_headers;
        output[17] << sites_headers;
        output[28] << sites_headers;
        output[29] << sites_headers;
        output[30] << sites_headers;
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            output[12] << "\t" << "root_biomass_" << l;
            output[13] << "\t" << "root_biomass_" << l;
            output[14] << "\t" << "root_biomass_" << l;
            output[15] << "\t" << "root_biomass_" << l;
            output[16] << "\t" << "root_biomass_" << l;
            output[17] << "\t" << "root_biomass_" << l;
            output[28] << "\t" << "root_biomass_" << l;
            output[29] << "\t" << "root_biomass_" << l;
            output[30] << "\t" << "root_biomass_" << l;
        }
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            output[12] << "\t" << "soil_layer_weight_" << l;
            output[13] << "\t" << "soil_layer_weight_" << l;
            output[14] << "\t" << "soil_layer_weight_" << l;
            output[15] << "\t" << "soil_layer_weight_" << l;
            output[16] << "\t" << "soil_layer_weight_" << l;
            output[17] << "\t" << "soil_layer_weight_" << l;
            output[28] << "\t" << "soil_layer_weight_" << l;
            output[29] << "\t" << "soil_layer_weight_" << l;
            output[30] << "\t" << "soil_layer_weight_" << l;
        }
        output[12] << endl;
        output[13] << endl;
        output[14] << endl;
        output[15] << endl;
        output[16] << endl;
        output[17] << endl;
        output[28] << endl;
        output[29] << endl;
        output[30] << endl;

#endif

#ifdef WATER

        if (ctx.opt._WATER_RETENTION_CURVE == 1)
        {
            output[33] << "layer" << "\t" << "depth" << "\t" << "sat" << "\t" << "max" << "\t" << "fc" << "\t" << "res" << "\t" << "min" << "\t" << "Ksat" << "\t" << "a_vgm" << "\t" << "m_vgm" << endl;
            for (int l = 0; l < ctx.soil.nblayers_soil; l++)
            {
                output[33] << l << "\t" << ctx.soil.layer_depth[l] << "\t" << ctx.soil.Sat_SWC[l] << "\t" << ctx.soil.Max_SWC[l] << "\t" << ctx.soil.FC_SWC[l] << "\t" << ctx.soil.Res_SWC[l] << "\t" << ctx.soil.Min_SWC[l] << "\t" << ctx.soil.Ksat[l] << "\t" << ctx.soil.a_vgm[l] << "\t" << ctx.soil.m_vgm[l] << endl;
            }
        }
        else if (ctx.opt._WATER_RETENTION_CURVE == 0)
        {

            output[33] << "layer" << "\t" << "depth" << "\t" << "sat" << "\t" << "max" << "\t" << "fc" << "\t" << "res" << "\t" << "min" << "\t" << "Ksat" << "\t" << "phi_e" << "\t" << "b" << endl;
            for (int l = 0; l < ctx.soil.nblayers_soil; l++)
            {
                output[33] << l << "\t" << ctx.soil.layer_depth[l] << "\t" << ctx.soil.Sat_SWC[l] << "\t" << ctx.soil.Max_SWC[l] << "\t" << ctx.soil.FC_SWC[l] << "\t" << ctx.soil.Res_SWC[l] << "\t" << ctx.soil.Min_SWC[l] << "\t" << ctx.soil.Ksat[l] << "\t" << ctx.soil.phi_e[l] << "\t" << ctx.soil.b[l] << endl;
            }
        }

#endif

#ifdef TRACK_INDIVIDUALS
        if (ctx.opt._OUTPUT_extended)
        {
            // these are the "cases" of trees that are followed
            sprintf(nnn, "%s_%i_trees_fortracking.txt", ctx.buffers.buf, easympi_rank);
            output_track[0].open(nnn, ios::out);
            output_track[0] << "site" << "\t" << "timeofyear_born" << "\t" << "col" << "\t" << "row" << "\t" << "species" << "\t" << "dbh" << "\t" << "cr" << "\t" << "height" << "\t" << "agb" << "\t" << "multiplier_cr" << "\t" << "multiplier_height" << "\t" << "wsg" << "\t" << "Nmass" << "\t" << "Pmass" << "\t" << "LMA" << "\t" << "deviation_wsg" << "\t" << "multiplier_Nmass" << "\t" << "multiplier_Pmass" << "\t" << "multiplier_lma" << "\t" << "Vcmax" << "\t" << "Jmax" << "\t" << "Rdark" << "\t" << "LAImax" << "\t" << "leaflifespan" << endl;

            // these are the "activities" that are recorded for each tree
            sprintf(nnn, "%s_%i_trees_tracked.txt", ctx.buffers.buf, easympi_rank);
            output_track[1].open(nnn, ios::out);

            output_track[1] << "site" << "\t" << "timeofyear_born" << "\t" << "Iter" << "\t" << "age" << "\t" << "seeds" << "\t" << "seedstotal" << "\t" << "carbstarv" << "\t" << "carbstarvtotal" << "\t" << "dbh" << "\t" << "dbhgrowth" << "\t" << "height" << "\t" << "heightgrowth" << "\t" << "cr" << "\t" << "crgrowth" << "\t" << "agb" << "\t" << "agbgrowth" << "\t" << "GPP" << "\t" << "GPPsq" << "\t" << "NPP" << "\t" << "NPPsq" << "\t" << "Rday" << "\t" << "Rnight" << "\t" << "Rstem" << "\t" << "LAIabove_avg" << "\t" << "LAIabove_effavg" << "\t" << "carbstore_avg" << endl;

            // this is to get information on the dead trees > 10cm
            sprintf(nnn, "%s_%i_trees_aftertracking.txt", ctx.buffers.buf, easympi_rank);
            output_track[2].open(nnn, ios::out);

            output_track[2] << "site" << "\t" << "timeofyear_born" << "\t" << "Iter" << "\t" << "age" << "\t" << "seedstotal" << "\t" << "carbstarvtotal" << "\t" << "dbh" << "\t" << "height" << "\t" << "cr" << "\t" << "agb" << "\t" << "GPP" << "\t" << "NPP" << "\t" << "LAIabove_avg" << "\t" << "LAIabove_effavg" << "\t" << "GPPsquared" << "\t" << "NPPsquared" << "\t" << "LAIabovesquared_avg" << "\t" << "LAIabovesquared_effavg" << endl;
        }
#endif
    }
}

// ######################################
//  Global function: initialisation with bare ground conditions
// ######################################
void Initialise(Context &ctx)
{
    //** Initialization of the simulation parameters **
    //*************************************************

    ctx.time.iter = -1; // changed in v.3.0.1, previously undefined; new function GetTimeofyear accepts also negative iterations

    ctx.diag.nblivetrees = 0;

    ReadInputSpecies();
#ifdef FULL_CLIMATE
    ReadInputClimate();
    ReadInputDailyvar();
#else
    ReadInputDailyvar();
    ReadInputClimate();
#endif

#ifdef WATER
    ReadInputSoil();
#endif

    //** Initialization of trees **
    //*****************************
    T.reserve(ctx.grid.sites);
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        Tree T_site;
        T.push_back(T_site);
#ifdef WATER
        // FF: not sure this check is necessary anymore (it's a check for memory allocation problems, I presume?), but I kept it just in case
        if (&T_site.t_soil_layer_weight[0] == &T_site.t_root_biomass[4])
        {
            cout << "Warning mem_alloc root biomass and soil ctx.diag.layer weight at site " << site << ": " << endl;
            cout << "t_soil_layer_weight adresses: " << &T_site.t_soil_layer_weight[0] << "\t" << &T_site.t_soil_layer_weight[1] << "\t" << &T_site.t_soil_layer_weight[2] << "\t" << &T_site.t_soil_layer_weight[3] << "\t" << &T_site.t_soil_layer_weight[4] << endl;
            cout << "t_root biomass adresses: " << &T_site.t_root_biomass[0] << "\t" << &T_site.t_root_biomass[1] << "\t" << &T_site.t_root_biomass[2] << "\t" << &T_site.t_root_biomass[3] << "\t" << &T_site.t_root_biomass[4] << endl;
        }
#endif
    }
    InitialiseIntraspecific();
#ifdef CACHE_LUT
    if (!LoadLookUpTablesFromCache())
    {
        std::cout << "LUT cache missing → computing LUTs..." << std::endl;
        InitialiseLookUpTables();
        SaveLookUpTablesToCache();
    }
    else
    {
        std::cout << "Loaded LUTs from cache." << std::endl;
    }
#else  // CACHE_LUT
    InitialiseLookUpTables();
#endif // CACHE_LUT
}

#ifdef Output_ABC
// ######################################
//  Global ABC function: initialise ABC conditions
// ######################################
//! - determine area to be taken into consideration for ABC and margin not to be taken into consideration (artefacts along border)
void InitialiseABC()
{
    margin = 0;
    row_start = margin;
    col_start = margin;
    row_end = ctx.grid.rows - margin;
    col_end = ctx.grid.cols - margin;
    sites_abc = (row_end - row_start) * (col_end - col_start);
    isites_abc = 1.0 / float(sites_abc);
    cout << "row start: " << row_start << " | row end: " << row_end << " | sites_abc: " << sites_abc << endl;
    // counter for recursive function (gap patches)
    nbvisited = 0;
    // distributions for simulated and empirical CHM
    // precomputed, not directly deduced from empirical fields, as a separate algorithm is used (from LAStools)
    if (NULL == (chm_field_previous = new int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (chm_field_current = new int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (chm_field_previous_ALS = new int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (chm_field_current_ALS = new int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (chm_field_changes = new int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (chm_field_changes_ALS = new int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    for (int s = 0; s < ctx.grid.sites; s++)
    {
        chm_field_previous[s] = 0;
        chm_field_current[s] = 0;
        chm_field_previous_ALS[s] = 0;
        chm_field_current_ALS[s] = 0;
        chm_field_changes[s] = 0;
        chm_field_changes_ALS[s] = 0;
    }
    // field for simulated transmittance
    if (NULL == (transmittance_simulatedALS = new float *[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (transmittance_direct = new float *[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (transmittance_simulatedALS_sampling = new int *[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n";
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
    {
        if (NULL == (transmittance_simulatedALS[h] = new float[ctx.grid.sites]))
            cerr << "!!! Mem_Alloc\n";
        if (NULL == (transmittance_direct[h] = new float[ctx.grid.sites]))
            cerr << "!!! Mem_Alloc\n";
        if (NULL == (transmittance_simulatedALS_sampling[h] = new int[ctx.grid.sites]))
            cerr << "!!! Mem_Alloc\n";
    }
    // set it to default 1 (full visibility)
    for (int row = 0; row < ctx.grid.rows; row++)
    {
        for (int col = 0; col < ctx.grid.cols; col++)
        {
            for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            {
                transmittance_simulatedALS[h][col + row * ctx.grid.cols] = 1.0;
                transmittance_direct[h][col + row * ctx.grid.cols] = 1.0;
                transmittance_simulatedALS_sampling[h][col + row * ctx.grid.cols] = 0;
            }
        }
    }
    // initialise output streams
    OutputABCWriteHeaders(output[11], output[12], output[13], output[14], output[15], output[16], output[17], output[18], output[19], output[23], output[24], output[25], output[26], output[27]);
}
#endif

// ######################################
//  Global function: point cloud generation
// ######################################
//  added v.3.1.6

void ReadInputPointcloud()
{
    cout << endl
         << "Reading in file: " << ctx.fileio.inputfile_pointcloud << endl;

    fstream InPointcloud(ctx.fileio.inputfile_pointcloud, ios::in);

    if (InPointcloud)
    {
        string parameter_names[5] = {"ctx.pc.mean_beam_pc", "ctx.pc.sd_beam_pc", "ctx.pc.klaser_pc", "ctx.pc.transmittance_laser", "ctx.pc.iter_pointcloud_generation"};
        int nb_parameters = 5;
        vector<string> parameter_values(nb_parameters, "");

        cout << endl
             << "Reading in file: " << ctx.fileio.inputfile << endl;
        InPointcloud.getline(ctx.fileio.buffer, 256, '\n');
        string parameter_name, parameter_value;

        while (InPointcloud >> parameter_name >> parameter_value)
        {
            InPointcloud.getline(ctx.fileio.buffer, 256, '\n');
            for (int i = 0; i < nb_parameters; i++)
            {
                if (parameter_name == parameter_names[i])
                    parameter_values[i] = parameter_value;
            }
        }
        // now we assign values
        for (int i = 0; i < nb_parameters; i++)
        {
            AssignValuePointcloud(parameter_names[i], parameter_values[i]);
        }
    }
}

// ######################################
//  Global function: initialisation from inventories
// ######################################

// completely rewritten in v.3.1
void ReadInputInventory()
{

    cout << endl
         << "Reading in file: " << ctx.fileio.inputfile_inventory << endl;

    fstream InInventory(ctx.fileio.inputfile_inventory, ios::in);

    if (InInventory)
    {
        // possible parameters to initialise
        //        vector<string> parameter_names{"col","row","s_name","CrownDisplacement","Pmass","Nmass","LMA","wsg","Rdark","Vcmax","Jmax","leaflifespan","lambda_young","lambda_mature","lambda_old","dbhmature","dbhmax","hmax","ah","Ct","LAImax","fraction_filled","mult_height","mult_CR","mult_CD","mult_P","mult_N","mult_LMA","mult_dbhmax","dev_wsg","age","dbh","sapwood_area","height","CD","CR","GPP","NPP","Rday","Rnight","Rstem","LAmax","LA","youngLA","matureLA","oldLA","LAI","litter","carbon_storage","carbon_biometry","multiplier_seed","hurt","NPPneg"};
        //        int nb_parameters = int(parameter_names.size()); // only works from C++11 onwards

#ifdef WATER
        string parameter_names_hardcoded[67] = {"col", "row", "s_name", "CrownDisplacement",
                                                "Pmass", "Nmass", "LMA", "leafarea", "tlp", "wsg",
                                                "Rdark", "Vcmax", "Jmax", "leaflifespan",
                                                "lambda_young", "lambda_mature", "lambda_old",
                                                "dbhmature", "dbhmax", "hmax", "ah", "Ct",
                                                "LAImax", "fraction_filled",
                                                "mult_height", "mult_CR", "mult_CD", "mult_P", "mult_N", "mult_LMA",
                                                "mult_dbhmax", "mult_leafarea", "mult_tlp",
                                                "dev_wsg", "age", "dbh", "sapwood_area", "height", "CD", "CR",
                                                "GPP", "NPP", "Rday", "Rnight", "Rstem",
                                                "LAmax", "LA", "youngLA", "matureLA", "oldLA", "LAI", "litter",
                                                "carbon_storage", "carbon_biometry", "multiplier_seed", "hurt", "NPPneg",
                                                "root_depth", "phi_root", "WSF", "WSF_A", "transpiration", "g1_0", "g1",
                                                "Ndays_dry", "Ndays_wet", "pheno_factor"};

        int nb_parameters = 67;

#else

        string parameter_names_hardcoded[53] = {"col", "row", "s_name", "CrownDisplacement", "Pmass", "Nmass", "LMA", "wsg", "Rdark", "Vcmax", "Jmax", "leaflifespan", "lambda_young", "lambda_mature", "lambda_old", "dbhmature", "dbhmax", "hmax", "ah", "Ct", "LAImax", "fraction_filled", "mult_height", "mult_CR", "mult_CD", "mult_P", "mult_N", "mult_LMA", "mult_dbhmax", "dev_wsg", "age", "dbh", "sapwood_area", "height", "CD", "CR", "GPP", "NPP", "Rday", "Rnight", "Rstem", "LAmax", "LA", "youngLA", "matureLA", "oldLA", "LAI", "litter", "carbon_storage", "carbon_biometry", "multiplier_seed", "hurt", "NPPneg"};

        int nb_parameters = 53;

#endif

        // conversion to vector for future use (e.g. water module needs flexible number of input layers)
        vector<string> parameter_names(parameter_names_hardcoded, parameter_names_hardcoded + nb_parameters);

#ifdef WATER

        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            char par_name[30];
            sprintf(par_name, "root_biomass%d", l);
            parameter_names.push_back(par_name);
        }
        nb_parameters += ctx.soil.nblayers_soil;
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            char par_name[30];
            sprintf(par_name, "soil_layer_weight%d", l);
            parameter_names.push_back(par_name);
        }
        nb_parameters += ctx.soil.nblayers_soil;

#endif

        // define position of col and row in string vector
        int pcol = 0, prow = 0;
        while (pcol < nb_parameters && parameter_names[pcol] != "col")
            pcol++;
        while (prow < nb_parameters && parameter_names[prow] != "row")
            prow++;

        // first get parameter names
        string line;
        getline(InInventory, line);
        istringstream firstlinestream(line);

        string parameter_name;
        vector<int> parameter_index;
        int nb_parameters_fromfile = 0;

        int flag_col = 1, flag_row = 1, flag_dbh = 1, flag_species = 1;
        while (firstlinestream >> parameter_name)
        {
            int index = -1;
            for (int i = 0; i < nb_parameters; i++)
            {
                if (parameter_name == parameter_names[i])
                {
                    index = i;
                    nb_parameters_fromfile++;
                }
            }
            if (index == -1)
            {
                cout << "Ignoring unknown parameter: " << parameter_name << ". Parameters must be one of:";
                for (int i = 0; i < nb_parameters; i++)
                {
                    cout << "\t" << parameter_names[i];
                }
                cout << endl;
            }
            parameter_index.push_back(index);

            if (parameter_name == "col")
                flag_col = 0;
            if (parameter_name == "row")
                flag_row = 0;
            if (parameter_name == "dbh")
                flag_dbh = 0;
            if (parameter_name == "s_name")
                flag_species = 0;
        }

        // Warnings
        if (flag_dbh == 1)
        {
            cout << "WARNING! No diameter column provided, no initialization from file will be carried out." << endl;
        }
        else
        {
            if ((flag_col == 1) | (flag_row == 1))
                cout << "WARNING! At least one coordinate column (col/row) is missing, random coordinates chosen" << endl;
            if (flag_species == 1)
                cout << "WARNING! No species column provided, random species chosen" << endl;

            int nb_parameterlines = 0;
            int nb_individuals = 0;
            int nb_random = 0;
            int nb_moved = 0;
            int nb_speciesrandom = 0;

            // define a radius to look for alternative tree positions in case site is already initialized
            int radius_max = 5;
            int area_max = int(radius_max * radius_max * PI);

            // define an array of randomly permuted ctx.grid.sites so that random number generator does not have to be called too often
            vector<int> sites_shuffled;
            sites_shuffled.reserve(ctx.grid.sites);
            for (int s = 0; s < ctx.grid.sites; s++)
            {
                sites_shuffled.push_back(s);
            }

            shuffle(sites_shuffled.begin(), sites_shuffled.end(), default_random_engine());

            int sites_shuffled_index = 0;

            // we go through all lines in the input file */
            while (getline(InInventory, line))
            {
                istringstream linestream(line);

                // first we initialise the potential parameter arrays with empty parameter values
                vector<string> parameter_values(nb_parameters, "");

                // we update the values from the file
                int s = 0;
                string parameter_value;
                while (linestream >> parameter_value)
                {
                    int index = parameter_index[s];
                    if (index >= 0)
                    {
                        parameter_values[index] = parameter_value;
                    }
                    s++;
                }

                // additional checks on location of tree
                int col = -1, row = -1;
                bool quiet = 1;
                if (flag_col == 0 && flag_row == 0)
                {
                    SetParameter(parameter_names[pcol], parameter_values[pcol], col, 0, ctx.grid.cols - 1, -1, quiet);
                    SetParameter(parameter_names[prow], parameter_values[prow], row, 0, ctx.grid.rows - 1, -1, quiet);
                }

                if (col >= 0 && row >= 0)
                {
                    int site = col + row * ctx.grid.cols;
                    int i = 0;
                    while (T[site].t_age != 0.0 && i < area_max)
                    {
                        i++;
                        int site_relative = ctx.lookup.LookUp_Crown_site[i];
                        int row_new = row + site_relative / 51 - 25;
                        int col_new = col + site_relative % 51 - 25;
                        if (row_new >= 0 && row_new < ctx.grid.rows && col_new >= 0 && col_new < ctx.grid.cols)
                        {
                            site = col_new + row_new * ctx.grid.cols;
                        }
                    }

                    if (T[site].t_age == 0.0)
                    {
                        int success = T[site].BirthFromInventory(site, parameter_names, parameter_values, nb_speciesrandom);
                        if (success == 1)
                        {
                            nb_individuals++;
                            if (i > 0)
                                nb_moved++;
                        }
                    }
                }
                else
                {
                    // find a random free site
                    while (sites_shuffled_index < ctx.grid.sites && T[sites_shuffled[sites_shuffled_index]].t_age != 0.0)
                        sites_shuffled_index++;

                    if (sites_shuffled_index < ctx.grid.sites)
                    {
                        // as long as the search has stopped and the index has not run outside the range, the tree can be initialized
                        int site = sites_shuffled[sites_shuffled_index];
                        int success = T[site].BirthFromInventory(site, parameter_names, parameter_values, nb_speciesrandom);
                        if (success == 1)
                        {
                            nb_individuals++;
                            nb_random++;
                        }
                    }
                }

                nb_parameterlines++;
            }

            if (nb_parameterlines > 0)
            {
                cout << "Successfully initialised " << nb_individuals << " out of " << nb_parameterlines << " trees from file." << endl;
                cout << "Coordinates: " << nb_moved << " trees were moved due to overlapping coordinates, and " << nb_random << " were placed randomly on the grid as coordinates were incomplete or could not be read in." << endl;
                cout << "Species: " << nb_speciesrandom << " trees were assigned a random species." << endl;
                if (sites_shuffled_index == ctx.grid.sites)
                    cout << "WARNING: shuffle index: " << sites_shuffled_index << " is equal site number. This means that random placement of trees has stopped early as the algorithm has run out of grid cells to place trees. This may indicate that there were more trees than grid cells." << endl;
            }
            else
            {
                cout << "WARNING! Inventory file was empty. No trees were initialised." << endl;
            }
        }
    }
    else
    {
        cout << "ERROR with the inventory file" << endl;
    }

    InInventory.close();

    cout << endl
         << "Reading in file: " << ctx.fileio.inputfile_SWC << endl;

    fstream InSWC(ctx.fileio.inputfile_SWC, ios::in);

    if (InSWC)
    {

        string line;
        int l = 0;
        int dcell = 0;
        while (getline(InSWC, line))
        {
            istringstream linestream(line);
            linestream >> dcell;
            float SWC_value;
            while (linestream >> SWC_value)
            {
                ctx.soil.SWC3D[l][dcell] = SWC_value;
                l++;
            }
            if (l != ctx.soil.nblayers_soil)
                cout << "Error in SWC input file (number of layers for dcell " << dcell << endl;
            l = 0;
            dcell++;
        }

        if (dcell != ctx.grid.nbdcells)
            cout << "Error in SWC input file (number of dcells) " << endl;
    }
    else
    {
        cout << "ERROR with the input SWC file" << endl;
    }

    InSWC.close();

    // compute ctx.soil.soil_phi3D for RecruitTree function
    for (int d = 0; d < ctx.grid.nbdcells; d++)
    {
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            float theta_w = (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) / (ctx.soil.Max_SWC[l] - ctx.soil.Min_SWC[l]);
            if (ctx.opt._WATER_RETENTION_CURVE == 1)
            {
                if (theta_w == 0)
                {
                    theta_w = 0.001; // SS addition for limit value
                    cout << "Warning theta_w = 0 " << endl;
                }
                ctx.soil.soil_phi3D[l][d] = ctx.soil.a_vgm[l] * pow((pow(theta_w, -ctx.soil.b_vgm[l]) - 1), ctx.soil.c_vgm[l]); // this is the van Genuchten-Mualem model (as in Table 1 in Marthews et al. 2014)
                float inter = 1 - pow((1 - pow(theta_w, ctx.soil.b_vgm[l])), ctx.soil.m_vgm[l]);
                ctx.soil.Ks[l][d] = ctx.soil.Ksat[l] * pow(theta_w, 0.5) * inter * inter;                           // this is the van Genuchten-Mualem model (as in Table 1 in Marthews et al. 2014)
                if (isnan(ctx.soil.soil_phi3D[l][d]) || isnan(ctx.soil.Ks[l][d]) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) < 0) //|| ctx.soil.KsPhi[l][d]==0.0 || ctx.soil.Ks[l][d]==0.0 || ctx.soil.soil_phi3D[l][d]==0.0)
                    cout << "In bucket model, ctx.diag.layer " << l << " dcell " << d << " theta_w=" << theta_w << " ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l]=" << (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) << " ctx.soil.soil_phi3D[l][d]=" << ctx.soil.soil_phi3D[l][d] << " ctx.soil.Ksat=" << ctx.soil.Ksat[l] << " ctx.soil.Ks[l][d]=" << ctx.soil.Ks[l][d] << endl;
            }
            else if (ctx.opt._WATER_RETENTION_CURVE == 0)
            {
                ctx.soil.soil_phi3D[l][d] = ctx.soil.phi_e[l] * pow(theta_w, -ctx.soil.b[l]);                                                      // this is the soil water characteristic of Brooks & Corey-Mualem (as in Table 1 in Marthews et al. 2014)
                ctx.soil.Ks[l][d] = ctx.soil.Ksat[l] * pow(theta_w, 2.5 + 2 * ctx.soil.b[l]);                                                      // this is the hydraulic conductivity curve of Brooks & Corey-Mualem (as in Table 1 in Marthews et al. 2014)
                ctx.soil.KsPhi[l][d] = ctx.soil.Ksat[l] * ctx.soil.phi_e[l] * pow(theta_w, 2.5 + ctx.soil.b[l]);                                            // ctx.soil.Ks times ctx.soil.soil_phi3D, computed directly as the exact power of ctx.params.theta.
                if (isnan(ctx.soil.soil_phi3D[l][d]) || isnan(ctx.soil.Ks[l][d]) || isnan(ctx.soil.KsPhi[l][d]) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) < 0) //|| ctx.soil.KsPhi[l][d]==0.0 || ctx.soil.Ks[l][d]==0.0 || ctx.soil.soil_phi3D[l][d]==0.0)
                    cout << "In bucket model, ctx.diag.layer " << l << " dcell " << d << " theta_w=" << theta_w << " ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l]=" << (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) << " ctx.soil.soil_phi3D[l][d]=" << ctx.soil.soil_phi3D[l][d] << " ctx.soil.Ksat=" << ctx.soil.Ksat[l] << " ctx.soil.phi_e=" << ctx.soil.phi_e[l] << " ctx.soil.b[l]=" << ctx.soil.b[l] << " ctx.soil.KsPhi[l][d]=" << ctx.soil.KsPhi[l][d] << " ctx.soil.Ks[l][d]=" << ctx.soil.Ks[l][d] << endl;
            }
        }
    }

    // compute LAID for RecruitTree function
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        for (int sbsite = 0; sbsite < ctx.grid.sites + 2 * ctx.grid.SBORD; sbsite++)
            ctx.field.LAI3D[h][sbsite] = 0.0;
    for (int site = 0; site < ctx.grid.sites; site++)
        T[site].CalcLAI(); // Each tree contribues to ctx.field.LAI3D
    for (int h = ctx.grid.HEIGHT; h > 0; h--)
    { // LAI is computed by summing LAI from the canopy top to the ground
        for (int site = 0; site < ctx.grid.sites; site++)
        {
            int sbsite = site + ctx.grid.SBORD;
            ctx.field.LAI3D[h - 1][sbsite] += ctx.field.LAI3D[h][sbsite];
        }
    }

    // added in v.3.1 to reduce transient behavior of forest on reinitialization when leaf parameters and tree dimensions are not known, but not used yet: does not massively improve the initial configuration of trees, as the main problem is in overlapping crowns and not how they allocate their leaf area; could be solved by a preceding Canopy Constructor reshuffle (Fischer et al. 2020, RSE), or by
    //*#################################################################*/
    //*### Update Leaf Area for more realistic initial configuration ###*/
    //*#################################################################*/
    // To do so, we order by height first and then allocate leaf area from top to bottom
    //     vector<float> heights_trees;
    //     vector<int> sites_trees;
    //
    //     heights_trees.reserve(ctx.grid.sites);
    //     sites_trees.reserve(ctx.grid.sites);
    //
    //     for(int site = 0; site < ctx.grid.sites; site++){
    //        // Only consider non-initialized trees (i.e. t_LA < 0.0)
    //        if(T[site].t_age > 0.0 & T[site].t_LA < 0.0){
    //            float height = T[site].t_height;
    //            heights_trees.push_back(height);
    //            sites_trees.push_back(site);
    //
    //            int index_tree_current = int(sites_trees.size()) - 1;
    //
    //            while(index_tree_current > 0 && height > heights_trees[index_tree_current - 1]){
    //                heights_trees[index_tree_current] = heights_trees[index_tree_current - 1];
    //                sites_trees[index_tree_current] = sites_trees[index_tree_current - 1];
    //
    //                heights_trees[index_tree_current - 1] = height;
    //                sites_trees[index_tree_current - 1] = site;
    //                index_tree_current--;
    //            }
    //        }
    //     }
    //
    //     // clear voxel field
    //     for(int h=0;h<(ctx.grid.HEIGHT+1);h++)
    //         for(int sbsite=0;sbsite<ctx.grid.sites+2*ctx.grid.SBORD;sbsite++)
    //             ctx.field.LAI3D[h][sbsite] = 0.0;
    //
    //     // allocate and compute leaf area
    //     for(int index_site = 0; index_site < sites_trees.size(); index_site++){
    //        int site = sites_trees[index_site];
    //        //cout << site << " Site of tree: " << T[site].t_site << " Height: " << T[site].t_height << " Height from index: " << heights_trees[index_site] << endl;
    //        T[site].CalcLAinitial();
    //     }
}

// ######################################
//  Global function: Field dynamic memory allocation
// ######################################
void AllocMem(Context &ctx)
{
    // this needs better commenting and probably a rethink (mainly has to do with MPI)
    float d = 0.0; // maximum diameter possible
    for (int spp = 1; spp <= ctx.grid.nbspp; spp++)
    {
        d = fmaxf(d, S[spp].s_dbhmax * 1.5);
    }
    float r = 25.0; // simply set to maximum crown radius possible in simulations

    ctx.grid.RMAX = int(r + ctx.params.p_nonvert * ctx.grid.NH * ctx.grid.LV * ctx.grid.HEIGHT);
    //  ctx.grid.RMAX = int(r);
    ctx.grid.SBORD = ctx.grid.cols * ctx.grid.RMAX;
    ctx.grid.dbhmaxincm = int(100. * d);
    cout << "ctx.grid.SBORD: " << ctx.grid.SBORD << endl;
    if (!mpi_rank)
    {
        // cout << "ctx.grid.HEIGHT : " << ctx.grid.HEIGHT << " ctx.grid.RMAX : " << ctx.grid.RMAX << " DBH : " << DBH <<"\n"; cout.flush();
        if (ctx.grid.RMAX > ctx.grid.rows)
        {
            // Consistency tests
            cerr << "Error : ctx.grid.RMAX > ctx.grid.rows \n";
            exit(-1);
        }
        if (ctx.grid.HEIGHT > ctx.grid.rows)
        {
            cerr << "Error : ctx.grid.HEIGHT > ctx.grid.rows \n";
            exit(-1);
        }
    }

    //** Initialization of dynamic Fields **
    //**************************************
    if (NULL == (ctx.diag.nbdbh = new int[ctx.grid.dbhmaxincm]))
        cerr << "!!! Mem_Alloc\n"; // Field for DBH histogram
    if (NULL == (ctx.diag.layer = new float[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n"; // Field for variables averaged by vertical ctx.diag.layer
#ifdef Output_ABC
    if (NULL == (abundances_species = new int[ctx.grid.nbspp + 1]))
        cerr << "!!! Mem_Alloc\n"; // vector to save species abundances every recorded ctx.time.timestep
    if (NULL == (abundances_species10 = new int[ctx.grid.nbspp + 1]))
        cerr << "!!! Mem_Alloc\n"; // vector to save species abundances every recorded ctx.time.timestep (dbh > 10cm)
    if (NULL == (biomass_species = new float[ctx.grid.nbspp + 1]))
        cerr << "!!! Mem_Alloc\n"; // vector to save species abundances every recorded ctx.time.timestep (dbh > 10cm)

    if (NULL == (traits_species = new float *[ctx.grid.nbspp + 1]))
        cerr << "!!! Mem_Alloc\n"; // vector to save species traits every recorded ctx.time.timestep

    for (int spp = 0; spp < (ctx.grid.nbspp + 1); spp++)
        if (NULL == (traits_species[spp] = new float[10]))
            cerr << "!!! Mem_Alloc\n";
    if (NULL == (traits_species10 = new float *[ctx.grid.nbspp + 1]))
        cerr << "!!! Mem_Alloc\n"; // vector to save species traits every recorded ctx.time.timestep  (dbh > 10cm)
    for (int spp = 0; spp < (ctx.grid.nbspp + 1); spp++)
        if (NULL == (traits_species10[spp] = new float[10]))
            cerr << "!!! Mem_Alloc\n";
#endif
    if (NULL == (ctx.species.SPECIES_GERM = new int[ctx.grid.nbspp + 1]))
        cerr << "!!! Mem_Alloc\n"; // Field for democratic seed germination
    if (NULL == (ctx.species.SPECIES_SEEDS = new int *[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";                              // Field of seeds
    for (int site = 0; site < ctx.grid.sites; site++)                    // For each processor, we define a stripe above (labelled 0) and a stripe below (1). Each stripe is ctx.grid.SBORD in width.
        if (NULL == (ctx.species.SPECIES_SEEDS[site] = new int[ctx.grid.nbspp + 1])) // ALL the ctx.grid.sites need to be updated.
            cerr << "!!! Mem_Alloc\n";
    for (int site = 0; site < ctx.grid.sites; site++)
        for (int spp = 0; spp <= ctx.grid.nbspp; spp++)
            ctx.species.SPECIES_SEEDS[site][spp] = 0;
    if (NULL == (ctx.species.p_seed = new double[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.species.n_seed = new unsigned int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";

    double prob_seed = 1.0 / double(ctx.grid.sites);
    for (int i = 0; i < ctx.grid.sites; i++)
        ctx.species.p_seed[i] = prob_seed;
    for (int i = 0; i < ctx.grid.sites; i++)
        ctx.species.n_seed[i] = 0;

    if (NULL == (ctx.species.p_species = new double[ctx.grid.nbspp]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.species.n_species = new unsigned int[ctx.grid.nbspp]))
        cerr << "!!! Mem_Alloc\n";

    for (int spp = 1; spp <= ctx.grid.nbspp; spp++)
    {
        double prob_species = double(S[spp].s_nbext);
        // cout << "prob_species: " << prob_species << endl;
        ctx.species.p_species[spp - 1] = prob_species;
    }

    for (int i = 0; i < ctx.grid.nbspp; i++)
        ctx.species.n_species[i] = 0;

    if (ctx.opt._SEEDTRADEOFF)
        if (NULL == (ctx.species.PROB_S = new float[ctx.grid.nbspp + 1]))
            cerr << "!!! Mem_Alloc\n";
    if (ctx.opt._NDD)
        if (NULL == (ctx.species.PROB_S = new float[ctx.grid.nbspp + 1]))
            cerr << "!!! Mem_Alloc\n";
    //  if (NULL==(persist=new long int[ctx.time.nbiter])) cerr<<"!!! Mem_Alloc\n";                  // Field for persistence
    //  if (NULL==(distr=new int[ctx.grid.cols])) cerr<<"!!! Mem_Alloc\n";

    if (NULL == (ctx.field.LAI3D = new float *[ctx.grid.HEIGHT + 1]))             // Field 3D
        cerr << "!!! Mem_Alloc\n";                             // Trees at the border of the simulated forest need to know the canopy occupancy by trees in the neighboring processor.
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)                     // For each processor, we define a stripe above (labelled 0) and a stripe below (1). Each stripe is ctx.grid.SBORD in width.
        if (NULL == (ctx.field.LAI3D[h] = new float[ctx.grid.sites + 2 * ctx.grid.SBORD])) // ALL the ctx.grid.sites need to be updated.
            cerr << "!!! Mem_Alloc\n";
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        for (int site = 0; site < ctx.grid.sites + 2 * ctx.grid.SBORD; site++)
            ctx.field.LAI3D[h][site] = 0.0;
    if (NULL == (ctx.field.Thurt[0] = new unsigned short[3 * ctx.grid.sites])) // Field for treefall impacts
        cerr << "!!! Mem_Alloc\n";
    for (int i = 1; i < 3; i++)
        if (NULL == (ctx.field.Thurt[i] = new unsigned short[ctx.grid.sites]))
            cerr << "!!! Mem_Alloc\n";

#ifdef WATER
    if (NULL == (ctx.soil.SWC3D = new float *[ctx.soil.nblayers_soil]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.soil_phi3D = new float *[ctx.soil.nblayers_soil]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Ks = new float *[ctx.soil.nblayers_soil]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.KsPhi = new float *[ctx.soil.nblayers_soil]))
        cerr << "!!! Mem_Alloc\n";
    // if (NULL==(KsPhi2=new float*[ctx.soil.nblayers_soil])) cerr<<"!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Transpiration = new float *[ctx.soil.nblayers_soil]))
        cerr << "!!! Mem_Alloc\n";
    for (int l = 0; l < ctx.soil.nblayers_soil; l++)
    {
        if (NULL == (ctx.soil.SWC3D[l] = new float[ctx.grid.nbdcells]))
            cerr << "!!! Mem_Alloc\n";
        if (NULL == (ctx.soil.soil_phi3D[l] = new float[ctx.grid.nbdcells]))
            cerr << "!!! Mem_Alloc\n";
        if (NULL == (ctx.soil.Ks[l] = new float[ctx.grid.nbdcells]))
            cerr << "!!! Mem_Alloc\n";
        if (NULL == (ctx.soil.KsPhi[l] = new float[ctx.grid.nbdcells]))
            cerr << "!!! Mem_Alloc\n";
        // if (NULL==(KsPhi2[l]=new float[ctx.grid.nbdcells])) cerr<<"!!! Mem_Alloc\n";
        if (NULL == (ctx.soil.Transpiration[l] = new float[ctx.grid.nbdcells]))
            cerr << "!!! Mem_Alloc\n";
        for (int dcell = 0; dcell < ctx.grid.nbdcells; dcell++)
        {
            // ctx.soil.SWC3D[l][dcell]=ctx.soil.Max_SWC[l];
            ctx.soil.SWC3D[l][dcell] = ctx.soil.FC_SWC[l];
            ctx.soil.soil_phi3D[l][dcell] = 0.0;
            ctx.soil.Ks[l][dcell] = 0.0;
            ctx.soil.KsPhi[l][dcell] = 0.0;
            // KsPhi2[l][dcell]=0.0;
            ctx.soil.Transpiration[l][dcell] = 0.0;
            if (ctx.soil.SWC3D[l][dcell] <= 0.0)
            {
                cout << ctx.soil.SWC3D[l][dcell] << "\t" << ctx.soil.Max_SWC[l] << "\n";
            }
        }
    }
    if (NULL == (ctx.soil.LAI_DCELL = new float *[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n";
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
    {
        if (NULL == (ctx.soil.LAI_DCELL[h] = new float[ctx.grid.nbdcells]))
            cerr << "!!! Mem_Alloc\n";
    }
    if (NULL == (ctx.soil.LAI_young = new float[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.LAI_mature = new float[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.LAI_old = new float[ctx.grid.HEIGHT + 1]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Canopy_height_DCELL = new float[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.TopWindSpeed_DCELL = new float[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.HSum_DCELL = new int[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Interception = new float[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Throughfall = new float[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Runoff = new float[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Leakage = new float[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    if (NULL == (ctx.soil.Evaporation = new float[ctx.grid.nbdcells]))
        cerr << "!!! Mem_Alloc\n";
    for (int dcell = 0; dcell < ctx.grid.nbdcells; dcell++)
    {
        for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            ctx.soil.LAI_DCELL[h][dcell] = 0.0;
        ctx.soil.Canopy_height_DCELL[dcell] = 0.0;
        ctx.soil.HSum_DCELL[dcell] = 0;
        ctx.soil.TopWindSpeed_DCELL[dcell] = 0.0;
        ctx.soil.Interception[dcell] = 0.0;
        ctx.soil.Throughfall[dcell] = 0.0;
        ctx.soil.Runoff[dcell] = 0.0;
        ctx.soil.Leakage[dcell] = 0.0;
        ctx.soil.Evaporation[dcell] = 0.0;
    }
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
    {
        ctx.soil.LAI_young[h] = 0.0;
        ctx.soil.LAI_mature[h] = 0.0;
        ctx.soil.LAI_old[h] = 0.0;
    }

    if (NULL == (ctx.grid.site_DCELL = new int[ctx.grid.sites]))
        cerr << "!!! Mem_Alloc\n";
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        int x = site % ctx.grid.cols;
        int y = site / ctx.grid.cols;
        int dcol = x / ctx.grid.length_dcell;
        int drow = y / ctx.grid.length_dcell;
        ctx.grid.site_DCELL[site] = dcol + ctx.grid.linear_nb_dcells * drow;
    }
#endif

#ifdef MPI // Fields for MPI operations
    for (i = 0; i < 2; i++)
    {                                                             //  Two fields: one for the CL north (0) one for the CL south (1)
        if (NULL == (LAIc[i] = new unsigned short *[ctx.grid.HEIGHT + 1])) // These fields contain the light info in the neighboring procs (2*ctx.grid.SBORD in width, not ctx.grid.SBORD !). They are used to update local fields
            cerr << "!!! Mem_Alloc\n";
        for (h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            if (NULL == (LAIc[i][h] = new unsigned short[2 * ctx.grid.SBORD]))
                cerr << "!!! Mem_Alloc\n";
    }
#endif
}

// ######################################
//  Global function: Evolution at each ctx.time.timestep
// ######################################
void Evolution(Context &ctx)
{
#ifdef CHECK_CARBON
    if (ctx.time.iter == 0)
    {
        carbon_assimilated_total = 0.0;
        carbon_net_total = 0.0;
    }
#endif

#ifdef WATER
    ctx.soil.transpiration_1016 = 0.0;
#endif

    UpdateField(); // Update light fields and seed banks
    ctx.diag.nbtrees_n10 = ctx.diag.nbtrees_n30 = ctx.diag.nbdead_n1 = ctx.diag.nbdead_n10 = ctx.diag.nbdead_n30 = 0;
    ctx.diag.nbtrees_carbstarv_n1 = ctx.diag.nbtrees_carbstarv_n10 = ctx.diag.nbtrees_carbstarv_n30 = 0;

#ifdef Output_ABC
    nbdead_n10_abc = 0;
#endif
    if (ctx.opt._BASICTREEFALL)
    {
        // secondary treefalls are triggered first, since they have been caused in the previous iteration
        TriggerTreefallSecondary(); // Compute and distribute Treefall events, caused by treefalls in the previous iteration
        TriggerTreefall();          // Compute and distribute Treefall events, caused by wind drag
    }

    for (int site = 0; site < ctx.grid.sites; site++)
    {
        //**** Tree evolution: Growth or death ****
        T[site].Update();
    }

    for (int d = 0; d < ctx.grid.nbdcells; d++)
    {
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            ctx.soil.Transpiration[l][d] = 0.0;
        }
    }
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        T[site].Water_uptake();
    }

    // Update trees
    Average(); //! Compute averages for outputs
    if (ctx.opt._OUTPUT_extended)
        OutputField(); //! Output the statistics
}

// #################################
//  Global function: Compute field Seed
// #################################
void UpdateSeeds()
{
    // With MPI option: Pass seeds across processors => two more fields to be communicated between n.n. (nearest neighbor) processors. NB: dispersal distance is bounded by the value of 'ctx.grid.rows'. At least 99 % of the seeds should be dispersed within the stripe or on the n.n. stripe. Hence ctx.grid.rows > 4.7*max(dist_moy_dissemination),for an exponential dispersal kernel.
    // dispersal only once a year
    if (ctx.time.iter % ctx.time.iterperyear == 0)
    {
        // acceleration, using the multinomial distribution
        int ha = ctx.grid.sites / 10000;
        gsl_ran_multinomial(ctx.rng.gslrand, ctx.grid.sites, ctx.params.Cseedrain * ha, ctx.species.p_seed, ctx.species.n_seed);
        cout << ctx.grid.sites << " Seedrain: " << ctx.params.Cseedrain * ha << endl;
        int seedsadded = 0;
        for (int s = 0; s < ctx.grid.sites; s++)
        {
            // if(T[s].t_age == 0){
            int nbseeds = ctx.species.n_seed[s];
            // cout << "Site: " << s << " nbseeds: " << nbseeds << " ctx.grid.nbspp: " << ctx.grid.nbspp << endl;
            gsl_ran_multinomial(ctx.rng.gslrand, ctx.grid.nbspp, nbseeds, ctx.species.p_species, ctx.species.n_species);
            for (int spp = 1; spp <= ctx.grid.nbspp; spp++)
            {
                int nbseeds_species = ctx.species.n_species[spp - 1];
                // cout << "Site: " << s << " Species: " << spp << " nbseeds: " << nbseeds_species << endl;
                if (nbseeds_species > 0)
                {
                    ctx.species.SPECIES_SEEDS[s][spp] = 1;
                    seedsadded++;
                }
                else
                    ctx.species.SPECIES_SEEDS[s][spp] = 0;
            }
            //}
        }

        // now disperse seeds from the trees on site
        // dispersion comes after seedrain calculation, because seedrain automatically removes seeds from places where there was no incoming seed
        int trees_mature = 0;
        for (int site = 0; site < ctx.grid.sites; site++)
        { // disperse seeds produced by mature trees
            if (T[site].t_age)
            {
                if (T[site].t_dbh >= T[site].t_dbhmature)
                    trees_mature++;
                T[site].DisperseSeed();
            }
        }

        int nbspecies_affected = 0;
        int seedsadded_effective = 0;
        for (int spp = 1; spp <= ctx.grid.nbspp; spp++)
        {
            int seedsadded_species = 0;
            for (int s = 0; s < ctx.grid.sites; s++)
            {
                seedsadded_species += ctx.species.SPECIES_SEEDS[s][spp];
            }
            if (seedsadded_species > 0)
                nbspecies_affected++;
            seedsadded_effective += seedsadded_species;
        }
        cout << "Trees_mature: " << trees_mature << " Nbseedsadded: " << seedsadded << " effective: " << seedsadded_effective << " nbspeciesaffected: " << nbspecies_affected << endl;
    }
}

// #################################
//  Global function: Update all fields
// #################################
//! - This is an important function for TROLL -- Includes many of the operations
//! - set the iteration environment -- nb: the current structure of code suppose that environment is periodic (a period = a year), if one wants to input a variable climate, with interannual variation and climate change along the simulation, a full climatic input needs to be input (ie number of columns=ctx.time.iter and not ctx.time.iterperyear) and change ctx.time.iterperyear by ctx.time.nbiter here.
void UpdateField()
{

#ifdef FULL_CLIMATE

    ctx.climate.tnight = ctx.climate.NightTemperature[ctx.time.iter % ctx.time.nbdays];
    ctx.climate.precip = ctx.climate.Rainfall[ctx.time.iter % ctx.time.nbdays];
    ctx.climate.WSDailyMean = ctx.climate.DailyMeanWindSpeed[ctx.time.iter % ctx.time.nbdays];
    ctx.climate.WDailyMean = ctx.climate.DailyMeanIrradiance[ctx.time.iter % ctx.time.nbdays] * ctx.params.SWtoPPFD;
    ctx.climate.tDailyMean = ctx.climate.DailyMeanTemperature[ctx.time.iter % ctx.time.nbdays];
    ctx.climate.VPDDailyMean = ctx.climate.DailyMeanVapourPressureDeficit[ctx.time.iter % ctx.time.nbdays];

#else
    ctx.climate.tnight = ctx.climate.NightTemperature[ctx.time.iter % ctx.time.iterperyear];
    ctx.climate.precip = ctx.climate.Rainfall[ctx.time.iter % ctx.time.iterperyear];
    ctx.climate.WSDailyMean = ctx.climate.DailyMeanWindSpeed[ctx.time.iter % ctx.time.iterperyear];
    ctx.climate.WDailyMean = ctx.climate.DailyMeanIrradiance[ctx.time.iter % ctx.time.iterperyear] * ctx.params.SWtoPPFD;
    ctx.climate.tDailyMean = ctx.climate.DailyMeanTemperature[ctx.time.iter % ctx.time.iterperyear];
    ctx.climate.VPDDailyMean = ctx.climate.DailyMeanVapourPressureDeficit[ctx.time.iter % ctx.time.iterperyear];

#endif // FULL_CLIMATE

    UpdateSeeds();

    if (ctx.opt._NDD)
    {
        // Evolution of the field NDDfield

        float normBA = 10000.0 / (0.001 + PI * ctx.crown.Rndd * ctx.crown.Rndd * ctx.crown.BAtot);
        for (int site = 0; site < ctx.grid.sites; site++)
        {

            for (int spp = 1; spp <= ctx.grid.nbspp; spp++)
            {
                // if ((ctx.time.iter == int(ctx.time.nbiter-1))&&(site>80000)&&(site<85000))  { sor[142]<< T[site].t_NDDfield[spp] << "\t" ;}
                T[site].t_NDDfield[spp] = 0;
            }
            // if (ctx.time.iter == int(ctx.time.nbiter-1))  sor[142]<< "\n";

            int row0 = T[site].t_site / ctx.grid.cols;
            int col0 = T[site].t_site % ctx.grid.cols;
            for (int col = max(0, int(col0 - ctx.crown.Rndd)); col <= min(ctx.grid.cols - 1, int(col0 + ctx.crown.Rndd)); col++)
            {
                for (int row = max(0, int(row0 - ctx.crown.Rndd)); row <= min(ctx.grid.rows - 1, int(row0 + ctx.crown.Rndd)); row++)
                { // loop over the neighbourhood
                    int xx = col0 - col;
                    int yy = row0 - row;
                    float d = sqrt(xx * xx + yy * yy);
                    if ((d <= ctx.crown.Rndd) && (d > 0))
                    { // is the voxel within the neighbourhood?
                        int j = ctx.grid.cols * row + col;
                        if (T[j].t_age)
                            T[site].t_NDDfield[T[j].t_sp_lab] += PI * T[j].t_dbh * T[j].t_dbh * 0.25 * normBA;
                    }
                }
            }
        }
    }

    RecruitTree();

    //  Compute Field ctx.field.LAI3D
#ifdef MPI
    // Reinitialize field ctx.field.LAI3D
    for (int i = 0; i < 2; i++)
        for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            for (int site = 0; site < 2 * ctx.grid.SBORD; site++)
                LAIc[i][h][site] = 0;
#endif

    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        for (int sbsite = 0; sbsite < ctx.grid.sites + 2 * ctx.grid.SBORD; sbsite++)
            ctx.field.LAI3D[h][sbsite] = 0.0;
    for (int site = 0; site < ctx.grid.sites; site++)
        T[site].CalcLAI(); // Each tree contribues to ctx.field.LAI3D

    for (int h = ctx.grid.HEIGHT; h > 0; h--)
    { // LAI is computed by summing LAI from the canopy top to the ground
        for (int site = 0; site < ctx.grid.sites; site++)
        {
            int sbsite = site + ctx.grid.SBORD;
            ctx.field.LAI3D[h - 1][sbsite] += ctx.field.LAI3D[h][sbsite];
        }
    }

#ifdef WATER
    for (int d = 0; d < ctx.grid.nbdcells; d++)
    {
        ctx.soil.Runoff[d] = 0.0;
        ctx.soil.Interception[d] = 0.0;
        ctx.soil.Throughfall[d] = 0.0;
        ctx.soil.Evaporation[d] = 0.0;
        ctx.soil.Leakage[d] = 0.0;
        // for (int l=0;l<ctx.soil.nblayers_soil;l++) {
        //     ctx.soil.Transpiration[l][d]=0.0;
        // }
        for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        {
            ctx.soil.LAI_DCELL[h][d] = 0.0;
        }
        ctx.soil.Canopy_height_DCELL[d] = 0.0;
        ctx.soil.HSum_DCELL[d] = 0;
        ctx.soil.TopWindSpeed_DCELL[d] = 0.0;
    }

    // ctx.soil.LAI_DCELL[h][dcell] provide the average LAI at height h in dcell, to estimate water interception and evaporation in each dcell at each ctx.time.timestep, as well as wind speed for a given height (this latter is new and was added simultaneously to BOUNDARY LAYER_ITERATIVE_SCHEME (IM June 2021).
    for (int site = 0; site < ctx.grid.sites; site++)
    {

        for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        {
            ctx.soil.LAI_DCELL[h][ctx.grid.site_DCELL[site]] += ctx.field.LAI3D[h][site + ctx.grid.SBORD];
        }

        float Htop = 0.0;
        int H = ctx.grid.HEIGHT;
        while (Htop == 0.0 && H > 0)
        {
            if (ctx.field.LAI3D[H][site + ctx.grid.SBORD] > 0.0)
            {
                Htop = H;
            }
            H--;
        }

        if (Htop > 0)
        {
            ctx.soil.Canopy_height_DCELL[ctx.grid.site_DCELL[site]] += Htop;
            ctx.soil.HSum_DCELL[ctx.grid.site_DCELL[site]]++;
        }
    }

    for (int d = 0; d < ctx.grid.nbdcells; d++)
    {

        for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            ctx.soil.LAI_DCELL[h][d] *= ctx.grid.i_sites_per_dcell;
        if (ctx.soil.HSum_DCELL[d] > 0)
        {
            ctx.soil.Canopy_height_DCELL[d] *= 1.0 / float(ctx.soil.HSum_DCELL[d]);
        }
        else
        {
            ctx.soil.Canopy_height_DCELL[d] = 0.0;
        }

#ifdef FULL_CLIMATE
        if (ctx.soil.Canopy_height_DCELL[d] <= MeteoStation_Height)
        {
            ctx.soil.TopWindSpeed_DCELL[d] = 1.204 / log(16.67 * ((MeteoStation_Height / ctx.soil.Canopy_height_DCELL[d]) - 0.8)); // WS is the ctx.time.timestep windspeed at a height=MeteoStation_Height, and ctx.soil.TopWindSpeed_DCELL is the wind speed computed at a height=ctx.soil.Canopy_height_DCELL[d], according to the model of Monteith & Unsworth 2008 (see Rau et al's TROLL manuscript), with d=0.8H and z0=0.06H; 16.67~1/0.06, 1.204=log(0.2/0.06).
        }
        else
            ctx.soil.TopWindSpeed_DCELL[d] = exp(alphaInoue * (1 - MeteoStation_Height / ctx.soil.Canopy_height_DCELL[d]));
        if (ctx.soil.Canopy_height_DCELL[d] == 0)
        {
            cout << "in UpdateField: d=" << d << "; Canopyheight_DCELL[d]=" << ctx.soil.Canopy_height_DCELL[d] << "; ctx.soil.HSum_DCELL[d]=" << ctx.soil.HSum_DCELL[d] << "; ctx.soil.TopWindSpeed_DCELL[d]=" << ctx.soil.TopWindSpeed_DCELL[d] << endl;
        }
#else
        if (ctx.soil.Canopy_height_DCELL[d] <= MeteoStation_Height)
        {
            ctx.soil.TopWindSpeed_DCELL[d] = ctx.climate.WSDailyMean * 1.204 / log(16.67 * ((MeteoStation_Height / ctx.soil.Canopy_height_DCELL[d]) - 0.8)); // WS is the ctx.time.timestep windspeed at a height=MeteoStation_Height, and ctx.soil.TopWindSpeed_DCELL is the wind speed computed at a height=ctx.soil.Canopy_height_DCELL[d], according to the model of Monteith & Unsworth 2008 (see Rau et al's TROLL manuscript), with d=0.8H and z0=0.06H; 16.67~1/0.06, 1.204=log(0.2/0.06).
        }
        else
            ctx.soil.TopWindSpeed_DCELL[d] = ctx.climate.WSDailyMean * exp(alphaInoue * (1 - MeteoStation_Height / ctx.soil.Canopy_height_DCELL[d]));
#endif

        // cout << "iter=" << ctx.time.iter << " ctx.climate.WSDailyMean=" << ctx.climate.WSDailyMean << " d=" << d <<  " canopy_height_DCELL[d]=" << ctx.soil.Canopy_height_DCELL[d] << " ctx.soil.HSum_DCELL[d]=" << ctx.soil.HSum_DCELL[d] <<" ctx.soil.TopWindSpeed_DCELL[d]=" << ctx.soil.TopWindSpeed_DCELL[d];
        // if (d==225) cout << " d=" << d <<  " canopy_height_DCELL[d]=" << ctx.soil.Canopy_height_DCELL[d] ;
        // cout << endl;
    }
#endif

#ifdef MPI
    // Communicate border of field
    // MPI_ShareField(ctx.field.LAI3D,LAIc,2*ctx.grid.SBORD);
    This MPI command no longer exists in openMPI
            Action 20 /
        01 / 2016 TODO : FIX THIS MPI_ShareField(ctx.field.LAI3D, LAIc, 2 * ctx.grid.SBORD);
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
    {
        //! Add border effects in local fields
        if (mpi_rank)
            for (site = 0; site < 2 * ctx.grid.SBORD; site++)
                ctx.field.LAI3D[h][site] += LAIc[0][h][site];
        if (mpi_rank < mpi_size - 1)
            for (int site = 0; site < 2 * ctx.grid.SBORD; site++)
                ctx.field.LAI3D[h][site + ctx.grid.sites] += LAIc[1][h][site];
    }
#endif

#ifdef WATER
    //**  Evolution of belowground hydraulic fields: Soil bucket model

    // for(int site=0;site<ctx.grid.sites;site++) T[site].Water_uptake(); // Update of ctx.soil.Transpiration: tree water uptake, each tree will deplete soil water content through its transpiration. Now made ate the end of the evolution loop so that the outputs for water uptake match the others (otherwise lag of one ctx.time.timestep)

    for (int d = 0; d < ctx.grid.nbdcells; d++)
    {
        //****   BUCKET MODEL in each dcell   ****
        // the unit used for water volume throughout the bucket model is m3.
        // NOTE: under the assumption of a flat terrain and no lateral fluxes, as it is assumed here for a first implementation, the order with which dcells are visited during the loop does not matter. With topography, we will need to visit the soil voxels (ie. dcells*ctx.diag.layer) from highest to lowest elevation so that run-off from highest voxels contribute to the water flux entering the lowest ones.
        //  to be investigated: does the order in which transpiration and evaporation are retrieved from the soil affect the overall outcome? which one should be retrieved first?

        // Water uptake through tree transpiration
        float w_uptake = 0.0;
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            w_uptake = fminf(ctx.soil.Transpiration[l][d], (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]));
            if (ctx.soil.Transpiration[l][d] < 0.0 || isnan(ctx.soil.Transpiration[l][d]) || isnan(w_uptake) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) < 0)
            {
                cout << "l=" << l << " d= " << d << " transpiration=" << ctx.soil.Transpiration[l][d] << " and ctx.soil.SWC3D[l][d]=" << ctx.soil.SWC3D[l][d] << " and ctx.soil.Min_SWC[l]=" << ctx.soil.Min_SWC[l] << " and ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l]=" << ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l] << endl;
            }
            ctx.soil.SWC3D[l][d] -= w_uptake;
            ctx.soil.SWC3D[l][d] = fmaxf(ctx.soil.SWC3D[l][d], ctx.soil.Min_SWC[l]);
            if (ctx.soil.Transpiration[l][d] < 0.0 || isnan(ctx.soil.Transpiration[l][d]) || isnan(w_uptake) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) < 0)
            {
                cout << "After w_uptake, l=" << l << " d= " << d << " transpiration=" << ctx.soil.Transpiration[l][d] << " and ctx.soil.SWC3D[l][d]=" << ctx.soil.SWC3D[l][d] << " and ctx.soil.Min_SWC[l]=" << ctx.soil.Min_SWC[l] << " and ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l]=" << ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l] << endl;
            }
        }

        // ctx.soil.Evaporation from soil

        // if this should be negligible in dense forest understory, it should have a more important effect in open areas, especially through species filtering at germination stage, at the beginning of a succession or in gaps in drier conditions; see Marthews et al. 2008 Ecological Modelling
        // However it is sometimes neglected and not represented in models, eg. Laio et al. 2001, Guterriez et al. 2014, Fischer et al. 2014.
        // note that, in this version, evaporation only depletes the most superficial soil ctx.diag.layer. This could be changed, especially if the superficial soil ctx.diag.layer is particularly thin and the energy reaching the soil high.

        // here, we use a phenomenological approach, following Granier et al. 1999 Ecological Modelling and Wagner et al. 2011 AFM, which assumed that evaporation is proportional to the energy reaching the soil.[this is an approximation as as the soil gets drier, more energy would be needed to remove the same amount of water from the soil as water molecules should be more tighly bound to soil particules and cavitation also occur in the soil...] ==> see if a model under which evaporation also depends on the soil water potential would not be better -- I guess so.
        // parameter values are not so clear, so TO BE CHECKED.
        // float e_factor=ctx.params.PPFDtoSW * 3600*0.000001*ctx.time.nbhours_covered* 0.1 * ctx.grid.sites_per_dcell*ctx.grid.LH*ctx.grid.LH*0.001; // to be moved outside of the loop to avoid repeating calculation.
        // float e_Granier = e_factor* ctx.climate.WDailyMean * exp(-ctx.params.klight*ctx.soil.LAI_DCELL[0][d]);
        // 3600*0.000001*ctx.time.nbhours_covered to convert Wmax in micromol of PAR /s /m2 into  Joule, and 10^-6 to MJoule as in Wagner et al. 2011 (however the value provided by Wagner et al. 2011 seems really weird -too high-, and the values we obtained here are in agreement with the ones reported in Marthews et al. 2014.
        // the value 0.1 is drawn from Wagner et al. 2011, but not really explained... to be checked!
        // ctx.grid.sites_per_dcell*ctx.grid.LH*ctx.grid.LH*0.001 is to convert the amount of water in mm, ie. in 10-3 m3/m2, to the amount of water evaporated for the focal dcell in m3

        // in this newer version, we used the framework provided by Sellers et al. 1992, which is better mechanistically grounded: depends on the soil ctx.diag.layer resistance, which varies with its water potential, and the aerodynamic resistance in series and the differences of vapour pressure between the top soil ctx.diag.layer and air just above
        float absorb_prev = ctx.soil.LAI_DCELL[1][d];
        float absorb_current = ctx.field.LAI3D[0][d];
        float absorb_delta = absorb_current - absorb_prev;
        if (absorb_delta < 0.0)
            absorb_delta = 0.0; //! eliminate rounding errors
        int intabsorb = CalcIntabsorb(absorb_prev, absorb_delta);
        float VPDground = ctx.climate.VPDDailyMean * ctx.lookup.LookUp_VPD[intabsorb] * 1000; // in Pa
        float Tsoil = ctx.climate.tDailyMean - ctx.lookup.LookUp_T[intabsorb];
        float esat_ground = 611.21 * exp((18.678 - (Tsoil / 234.5)) * (Tsoil / (257.14 + Tsoil))); // Buck equation; in Pa (see Jones p. 348)
        float esoil = esat_ground * exp(2.17 * ctx.soil.soil_phi3D[0][d] / (Tsoil - ABSZERO));              // esoil variation with the top soil ctx.diag.layer water potential, following Duursma & Medlyn 2012 equ. 17, Cochard et al. 2021 equ. 36., see equ. 5.14 in Jones (p. 102), in Pa
        float eair = esat_ground - VPDground;                                                      // in Pa
        // float r_soil = exp(8.206 - 4.255*ctx.soil.SWC3D[0][d]/ctx.soil.Max_SWC[0]) ; // soil surface resistance in s ctx.params.m-1, following Sellers et al. 1992 equ. 19, see also equ 12 in Merlin et al. 2016 (also used in CLM, Oleson et al. 2007).
        float r_soil = exp(8.206 - 4.255 * ctx.soil.SWC3D[0][d] / ctx.soil.FC_SWC[0]); // soil surface resistance in s ctx.params.m-1, following Sellers et al. 1992 equ. 19, see also equ 12 in Merlin et al. 2016 (also used in CLM, Oleson et al. 2007).
#ifdef FULL_CLIMATE
        float r_aero = 43.17347 * exp(alphaInoue * (1 - 1 / ctx.soil.Canopy_height_DCELL[d])) / (ctx.climate.WSDailyMean * ctx.soil.TopWindSpeed_DCELL[d]); // aerodynamic resistance to hear transfer (boundary ctx.diag.layer just above the soil surface), in s ctx.params.m-1 (see equ. 7 and 14 in Duursma & Medlyn 2012; and equ. B10 in Merlin et al. 2016). 43.17347= log(1/0.001)/(0.40*0.40), where 1= the reference height where the wind speed is measured, in ctx.params.m, 0.001=the momentum soil roughness in ctx.params.m (set to 0.001 following Yang et al. 2008 and Stefan et al 2015 in Merlin et al. 2016 equ B10), and 0.40=the von Karman constant.
#else
        float r_aero = 43.17347 * exp(alphaInoue * (1 - 1 / ctx.soil.Canopy_height_DCELL[d])) / ctx.soil.TopWindSpeed_DCELL[d]; // aerodynamic resistance to hear transfer (boundary ctx.diag.layer just above the soil surface), in s ctx.params.m-1 (see equ. 7 and 14 in Duursma & Medlyn 2012; and equ. B10 in Merlin et al. 2016). 43.17347= log(1/0.001)/(0.40*0.40), where 1= the reference height where the wind speed is measured, in ctx.params.m, 0.001=the momentum soil roughness in ctx.params.m (set to 0.001 following Yang et al. 2008 and Stefan et al 2015 in Merlin et al. 2016 equ B10), and 0.40=the von Karman constant.
#endif
        float Rtot = r_soil + r_aero;                                                                                 // in s ctx.params.m-1
        float e = ctx.time.nbhours_covered * ctx.grid.sites_per_dcell * ctx.grid.LH * ctx.grid.LH * 0.0078 * (esoil - eair) / ((Tsoil - ABSZERO) * Rtot); // 0.0078 = 0.001*3600*18e-3/8.31 with 18e-3 = the molar mass of water vapor in kg/mol and 8.31 the ideal gas constant in J/mol/K; 0.001*3600*ctx.time.nbhours_covered*ctx.grid.sites_per_dcell*ctx.grid.LH*ctx.grid.LH is used to convert evaporation in kg ctx.params.m-2 s-1 to m3 per day per dcell.

        // if (ctx.soil.soil_phi3D[0][d] < -1) {
        //  cout << "r_soil=" << r_soil << " r_soil_sellers=" << r_soil_sellers <<" r_aero=" <<r_aero << " VPDground=" << VPDground << " esat_ground=" << esat_ground << " esoil=" << esoil << " eair=" << eair << " ctx.soil.soil_phi3D[0][d]=" << ctx.soil.soil_phi3D[0][d] << " Tsoil=" << Tsoil << " ctx.soil.TopWindSpeed_DCELL[d]=" << ctx.soil.TopWindSpeed_DCELL[d] << " Wind ground level=" << exp(-alphaInoue*(1-1/ctx.soil.Canopy_height_DCELL[d]))*ctx.soil.TopWindSpeed_DCELL[d] << " evaporation S92=" << e  << " evaporation S92_sellers=" << e_sellers << " e_granier=" << e_Granier << " ctx.soil.SWC3D[0][d]-ctx.soil.Min_SWC[0]=" << ctx.soil.SWC3D[0][d]-ctx.soil.Min_SWC[0] << endl;
        //  }

        ctx.soil.Evaporation[d] = fmaxf(0.0, fminf(e, (ctx.soil.SWC3D[0][d] - ctx.soil.Min_SWC[0]))); // the amount of water evaporated from the soil cannot result in a water content below the residual water content. A model depending on soil matric potential would not need this.
        if (ctx.soil.Evaporation[d] < 0 || isnan(ctx.soil.Evaporation[d]) || (ctx.soil.SWC3D[0][d] - ctx.soil.Min_SWC[0]) < 0)
        {
            cout << "evaporation=" << ctx.soil.Evaporation[d] << " and e=" << e << " and ctx.soil.SWC3D[0][d]=" << ctx.soil.SWC3D[0][d] << " and ctx.soil.Min_SWC[0]=" << ctx.soil.Min_SWC[0] << "and ctx.soil.SWC3D[0][d]-ctx.soil.Min_SWC[0]=" << ctx.soil.SWC3D[0][d] - ctx.soil.Min_SWC[0] << "; raero=" << r_aero << "; ctx.soil.Canopy_height_DCELL[d]=" << ctx.soil.Canopy_height_DCELL[d] << "; ctx.soil.TopWindSpeed_DCELL[d]=" << ctx.soil.TopWindSpeed_DCELL[d] << endl;
        }

        ctx.soil.SWC3D[0][d] -= ctx.soil.Evaporation[d];

        // Refilling by rainfall

        ctx.soil.Interception[d] = fminf(ctx.climate.precip, 0.2 * ctx.soil.LAI_DCELL[0][d]); // This is the amount of rainfall - in mm, as rainfall -, intercepted by vegetation cover, following the approach used in Liang et al. 1994 Journal of Geophysical Reserach, and also used by Laio et al. 2001 Advances in Water Resources and Fischer et al. 2014 Environmental Modelling & Software (FORMIX3, Madagascar). More complex approach can be used however - see eg. Gutierrez et al. 2014 Plos One (FORMIND, Chili), or Wagner et al. 2011 AFM (Paracou)
        ctx.soil.Throughfall[d] = ctx.climate.precip - ctx.soil.Interception[d];
        ctx.soil.Throughfall[d] *= ctx.grid.sites_per_dcell * ctx.grid.LH * ctx.grid.LH * 0.001; // to convert in absolute amount of water entering the soil voxel in m3

        if (isnan(ctx.soil.Throughfall[d]) || (ctx.soil.Throughfall[d]) < 0)
        {
            cout << "Incorrect throughfall" << endl;
            cout << ctx.climate.precip << "\t" << ctx.soil.Interception[d] << "\t" << ctx.soil.LAI_DCELL[0][d] << endl;
        }

        float in = ctx.soil.Throughfall[d];

        /*if(ctx.soil.SWC3D[0][d]<ctx.soil.Max_SWC[0]) {
            int l=0;
            while((l<ctx.soil.nblayers_soil) && (in>0.0)) {
                if(in>(ctx.soil.Max_SWC[l]-ctx.soil.SWC3D[l][d])) {
                    in-=(ctx.soil.Max_SWC[l]-ctx.soil.SWC3D[l][d]);
                    ctx.soil.SWC3D[l][d]=ctx.soil.Max_SWC[l];
                    if(isnan(ctx.soil.SWC3D[l][d]) || (ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l])<=0) {
                        cout << "incorrect ctx.soil.SWC3D, Min/ctx.soil.Max_SWC" << endl;
                        cout <<ctx.soil.Max_SWC[l] << endl;
                    }
                }
                else{
                    ctx.soil.SWC3D[l][d]+=in;
                    if (isnan(ctx.soil.SWC3D[l][d]) || (ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l])<0) {
                        cout << "incorrect ctx.soil.SWC3D, Min/ctx.soil.Max_SWC" << endl;
                        cout << ctx.soil.Throughfall[d] << "\t" <<in <<"\t" <<  ctx.climate.precip << "\t" << ctx.soil.Interception[d] << "\t" << ctx.soil.LAI_DCELL[0][d] << endl;
                    }
                    in=0.0;
                }
                l++;
            }
        }*/
        if (ctx.soil.SWC3D[0][d] < ctx.soil.Max_SWC[0])
        {
            int l = 0;
            while ((l < ctx.soil.nblayers_soil) && (in > 0.0))
            {
                if (in > (ctx.soil.FC_SWC[l] - ctx.soil.SWC3D[l][d]))
                {
                    in -= (ctx.soil.FC_SWC[l] - ctx.soil.SWC3D[l][d]);
                    ctx.soil.SWC3D[l][d] = ctx.soil.FC_SWC[l];
                    if (isnan(ctx.soil.SWC3D[l][d]) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) <= 0)
                    {
                        cout << "incorrect ctx.soil.SWC3D, Min/ctx.soil.Max_SWC" << endl;
                        cout << ctx.soil.Max_SWC[l] << endl;
                    }
                }
                else
                {
                    ctx.soil.SWC3D[l][d] += in;
                    if (isnan(ctx.soil.SWC3D[l][d]) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) < 0)
                    {
                        cout << "incorrect ctx.soil.SWC3D, Min/ctx.soil.Max_SWC" << endl;
                        cout << ctx.soil.Throughfall[d] << "\t" << in << "\t" << ctx.climate.precip << "\t" << ctx.soil.Interception[d] << "\t" << ctx.soil.LAI_DCELL[0][d] << endl;
                    }
                    in = 0.0;
                }
                l++;
            }
        }
        else
        { // if the top soil ctx.diag.layer is already saturated (eg. inundated forest), throughfall -> runoff
            ctx.soil.Runoff[d] = ctx.soil.Throughfall[d];
        }
        // ctx.soil.Leakage
        ctx.soil.Leakage[d] = in;
    }
    // END of the BUCKET MODEL.

    // Update of soil water potential field
    for (int d = 0; d < ctx.grid.nbdcells; d++)
    {
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            // ctx.soil.soil_phi3D[l][d]=ctx.soil.phi_e[l]*pow((ctx.soil.SWC3D[l][d]/ctx.soil.Max_SWC[l]), -ctx.soil.b[l]);

            float theta_w = (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) / (ctx.soil.Max_SWC[l] - ctx.soil.Min_SWC[l]);

            if (ctx.opt._WATER_RETENTION_CURVE == 1)
            {
                if (theta_w == 0)
                {
                    theta_w = 0.001; // SS addition for limit value
                    cout << "Warning theta_w = 0 " << endl;
                }
                ctx.soil.soil_phi3D[l][d] = ctx.soil.a_vgm[l] * pow((pow(theta_w, -ctx.soil.b_vgm[l]) - 1), ctx.soil.c_vgm[l]); // this is the van Genuchten-Mualem model (as in Table 1 in Marthews et al. 2014)
                float inter = 1 - pow((1 - pow(theta_w, ctx.soil.b_vgm[l])), ctx.soil.m_vgm[l]);
                ctx.soil.Ks[l][d] = ctx.soil.Ksat[l] * pow(theta_w, 0.5) * inter * inter; // this is the van Genuchten-Mualem model (as in Table 1 in Marthews et al. 2014)

                if (isnan(ctx.soil.soil_phi3D[l][d]) || isnan(ctx.soil.Ks[l][d]) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) < 0) //|| ctx.soil.KsPhi[l][d]==0.0 || ctx.soil.Ks[l][d]==0.0 || ctx.soil.soil_phi3D[l][d]==0.0)
                    cout << "In bucket model, ctx.diag.layer " << l << " dcell " << d << " theta_w=" << theta_w << " ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l]=" << (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) << " ctx.soil.soil_phi3D[l][d]=" << ctx.soil.soil_phi3D[l][d] << " ctx.soil.Ksat=" << ctx.soil.Ksat[l] << " ctx.soil.Ks[l][d]=" << ctx.soil.Ks[l][d] << endl;
            }
            else if (ctx.opt._WATER_RETENTION_CURVE == 0)
            {
                ctx.soil.soil_phi3D[l][d] = ctx.soil.phi_e[l] * pow(theta_w, -ctx.soil.b[l]);           // this is the soil water characteristic of Brooks & Corey-Mualem (as in Table 1 in Marthews et al. 2014)
                ctx.soil.Ks[l][d] = ctx.soil.Ksat[l] * pow(theta_w, 2.5 + 2 * ctx.soil.b[l]);           // this is the hydraulic conductivity curve of Brooks & Corey-Mualem (as in Table 1 in Marthews et al. 2014)
                ctx.soil.KsPhi[l][d] = ctx.soil.Ksat[l] * ctx.soil.phi_e[l] * pow(theta_w, 2.5 + ctx.soil.b[l]); // ctx.soil.Ks times ctx.soil.soil_phi3D, computed directly as the exact power of ctx.params.theta.

                if (isnan(ctx.soil.soil_phi3D[l][d]) || isnan(ctx.soil.Ks[l][d]) || isnan(ctx.soil.KsPhi[l][d]) || (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) < 0) //|| ctx.soil.KsPhi[l][d]==0.0 || ctx.soil.Ks[l][d]==0.0 || ctx.soil.soil_phi3D[l][d]==0.0)
                    cout << "In bucket model, ctx.diag.layer " << l << " dcell " << d << " theta_w=" << theta_w << " ctx.soil.SWC3D[l][d]-ctx.soil.Min_SWC[l]=" << (ctx.soil.SWC3D[l][d] - ctx.soil.Min_SWC[l]) << " ctx.soil.soil_phi3D[l][d]=" << ctx.soil.soil_phi3D[l][d] << " ctx.soil.Ksat=" << ctx.soil.Ksat[l] << " ctx.soil.phi_e=" << ctx.soil.phi_e[l] << " ctx.soil.b[l]=" << ctx.soil.b[l] << " ctx.soil.KsPhi[l][d]=" << ctx.soil.KsPhi[l][d] << " ctx.soil.Ks[l][d]=" << ctx.soil.Ks[l][d] << endl;
                // KsPhi2[l][d]=ctx.soil.Ksat[l]*ctx.soil.phi_e[l]*pow(theta_w, 2.5);
                //  we may want to shift to the van Genuchten-Mualem expressions of ctx.soil.soil_phi3D and ctx.soil.Ks, as the van genuchten-Mualem model is currently defacto the more standard soil hydraulic model (see ref in Table 1 in Marthews et al. 2014). To do so, see if we have data of soil pH, cation exchange capacity, organic carbon content, to explicitly compute the parameters with Hodnett & Tomasella 2002 (as recommended by Marthews et al. 2014 -- Table 2; or instead directly use the parameter provided by the map in Marthews et al. 2014.
            }
        }
    }
#endif
}

// #############################
//  Global function: update ctx.species.SPECIES_SEEDS field
// #############################
void FillSeed(int col, int row, int spp)
{
    if ((col >= 0) && (col < ctx.grid.cols))
    {
        if ((row >= 0) && (row < ctx.grid.rows))
        {
            int site = col + ctx.grid.cols * row;
            // if(T[site].t_age == 0){
            if (ctx.opt._SEEDTRADEOFF)
                ctx.species.SPECIES_SEEDS[site][spp]++; // ifdef SEEDTRADEOFF, ctx.species.SPECIES_SEEDS[site][spp] is the number of seeds of this species at that site
            else
                ctx.species.SPECIES_SEEDS[site][spp] = 1; // If s_Seed[site] = 0, site is not occupied, if s_Seed[site] > 1, s_Seed[site] is the presence of a seed
            // cout << "site: " << site << " spp: " << spp << " Seed added!!! " << endl;
            // }
        }
    }
}

// #############################
//  Global function: tree germination module
// #############################
void RecruitTree()
{
    for (int site = 0; site < ctx.grid.sites; site++)
    { //**** Local germination ****
        if (T[site].t_age == 0)
        {
            int spp_withseeds = 0;
            for (int spp = 1; spp <= ctx.grid.nbspp; spp++)
            { // lists all the species with a seed present at given site...
                if (ctx.species.SPECIES_SEEDS[site][spp] > 0)
                {
                    // write species that are present to an extra array
                    ctx.species.SPECIES_GERM[spp_withseeds] = spp;
                    spp_withseeds++;
                }
            }
            if (spp_withseeds > 0)
            { // ... and then randomly select one of these species

                // new in v.2.4.1: for consistency use genrand2() instead of rand(), since v.2.5: use gsl RNG
                int spp_index = int(gsl_rng_uniform_int(ctx.rng.gslrand, spp_withseeds));
                int spp = ctx.species.SPECIES_GERM[spp_index];
                // otherwise all species with seeds present are equiprobable

#ifdef LCP_alternative

#ifdef WATER
                if (ctx.soil.soil_phi3D[0][ctx.grid.site_DCELL[site]] > 0.5 * S[spp].s_tlp)
                {
                    T[site].Birth(spp, site); // in this version, the light environment is checked within Birth() function
                }

#else
                T[site].Birth(spp, site); // in this version, the light environment is checked within Birth() function

#endif

#else // LCP_alternative

                float flux = ctx.climate.WDailyMean * exp(-fmaxf(ctx.field.LAI3D[0][site + ctx.grid.SBORD], 0.0) * ctx.params.kpar);
#ifdef WATER
                if (flux > (S[spp].s_LCP) && ctx.soil.soil_phi3D[0][ctx.grid.site_DCELL[site]] > 0.5 * S[spp].s_tlp)
                {
                    T[site].Birth(spp, site);
                    ctx.species.SPECIES_SEEDS[site][spp] = 0; // newIM nov2021, to adjust to the yearly update of Species_seeds
                }
                // in addition to a condition of light availability- hence light demanding species may not be able to grow in deep sahde conditions in understorey -, a condition on water availability is added - hence drought-intolerant species may not be recruited in water-stressd conditions
#else
                // If enough light, germination, initialization of NPP (LCP is the species light compensation point
                // here, light is the sole environmental resources tested as a limiting factor for germination, but we should think about adding nutrients (N,P) and water conditions...
                if (flux > (S[spp].s_LCP))
                {
                    T[site].Birth(spp, site);
                    ctx.species.SPECIES_SEEDS[site][spp] = 0; // newIM nov2021, to adjust to the yearly update of Species_seeds
                }
#endif // WATER
#endif // LCP_alternative
            }
        }
    }
}

// #############################
//  Global function: Treefall gap formation
// #############################
//! change in v.2.4: resetting ctx.field.Thurt[0] field is done in TriggerSecondaryTreefall() at the beginning of each iteration. Further changes: rewriting of Tree::FallTree() which is now Tree::Treefall(angle). t_hurt can now persist longer, so new treefall events are added to older damages (that, in turn are decaying)
void TriggerTreefall()
{
    for (int site = 0; site < ctx.grid.sites; site++)
        if (T[site].t_age)
        {
            // treefall is triggered given a certain flexural force
            // ctx.opt._BASICTREEFALL: just dependent on height threshold + random uniform distribution
            float angle = 0.0, c_forceflex = 0.0;
            if (ctx.opt._BASICTREEFALL)
            {
                c_forceflex = (1 - (1 - gsl_rng_uniform(ctx.rng.gslrand)) / (12 * ctx.time.timestep)) * T[site].t_height; // probability of treefall per month = 1-t_Ct/t_height , compare to genrand2(), if ctx.time.timestep=1/12: genrand2() < 1 - t_Ct/t_height, or: genrand2() > t_Ct/t_height
                angle = float(twoPi * gsl_rng_uniform(ctx.rng.gslrand));                                         // random angle
            }
            // above a given stress threshold the tree falls
            if (c_forceflex > T[site].t_Ct)
            {
                T[site].Treefall(angle);
            }
        }
#ifdef MPI
    // Treefall field passed to the n.n. procs
    MPI_ShareTreefall(ctx.field.Thurt, ctx.grid.sites);
#endif
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        // Update of Field hurt
        if (T[site].t_age)
        {
            T[site].t_hurt = max(ctx.field.Thurt[0][site + ctx.grid.sites], T[site].t_hurt); // NEW in v.2.4: addition of damages, alternative: max()
#ifdef MPI
            if (mpi_rank)
                T[site].t_hurt = max(T[site].t_hurt, ctx.field.Thurt[1][site]); // ? v.2.4: Update needed, ctx.field.Thurt[1], why max?
            if (mpi_rank < mpi_size - 1)
                T[site].t_hurt = max(T[site].t_hurt, ctx.field.Thurt[2][site]);
#endif
        }
    }
}

// #############################
//  Global function: Secondary treefall gap formation
// #############################
//! - NEW in v.2.4: TriggerSecondaryTreefall(), called at the beginning of each iteration
//! - translates damages from previous round into tree deaths, partly treefalls, partly removing them only (e.g. splintering)
//! - in the limit of ctx.params.p_tfsecondary = 0.0, this is equivalent to the previous computation
void TriggerTreefallSecondary()
{
    ctx.diag.nbTreefall1 = 0;
    ctx.diag.nbTreefall10 = 0;
    ctx.diag.nbTreefall30 = 0;
#ifdef Output_ABC
    nbTreefall10_abc = 0;
#endif
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        ctx.field.Thurt[0][site] = ctx.field.Thurt[0][site + 2 * ctx.grid.sites] = 0;
        ctx.field.Thurt[0][site + ctx.grid.sites] = 0;
    }
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        if (T[site].t_age)
        {
            float height_threshold = T[site].t_height / T[site].t_mult_height; // since 2.5: a tree's stability is defined by its species' average height, i.e. we divide by the intraspecific height multiplier to account for lower stability in quickly growing trees; otherwise slender, faster growing trees would be treated preferentially and experience less secondary treefall than more heavily built trees
            if (2.0 * T[site].t_hurt * (1 - (1 - gsl_rng_uniform(ctx.rng.gslrand)) / (12 * ctx.time.timestep)) > height_threshold)
            { // check whether tree dies: probability of death per month is 1.0-0.5*t_height/t_hurt, so, when ctx.time.timestep=1/12, ctx.rng.gslrand <= 1.0 - 0.5 * t_height/t_hurt, or ctx.rng.gslrand > 0.5 * t_height/t_hurt; modified in v.2.5: probability of death is 1.0 - 0.5*t_height/(t_mult_height * t_hurt), so the larger the height deviation (more slender), the higher the risk of being thrown by another tree
                if (ctx.params.p_tfsecondary > gsl_rng_uniform(ctx.rng.gslrand))
                {                                                          // check whether tree falls or dies otherwise
                    float angle = float(twoPi * gsl_rng_uniform(ctx.rng.gslrand)); // random angle
                    T[site].Treefall(angle);
                }
                else
                {
                    T[site].Death();
                }
            }
            else
            {
                T[site].t_hurt = short(ctx.params.hurt_decay * float(T[site].t_hurt)); // reduction of t_hurt according to ctx.params.hurt_decay, could be moved to Tree::Growth() function and made dependent on the tree's carbon gain
            }
        }
    }

#ifdef MPI
    //! Treefall field passed to the n.n. procs
    MPI_ShareTreefall(ctx.field.Thurt, ctx.grid.sites);
#endif
}

// Helper function
int GetTimeofyear()
{
    // new function to derive time of year, extended to negative iterations (-1 would be treated as last iteration of previous year)
    int timeofyear;
    if (ctx.time.iter < 0)
        timeofyear = ctx.time.iterperyear - abs(ctx.time.iter) % ctx.time.iterperyear;
    else
        timeofyear = ctx.time.iter % ctx.time.iterperyear;
    return (timeofyear);
};
float CalcHeightBaseline(float &ah, float &hmax, float &dbh)
{
    // height allometry
    float height = hmax * dbh / (dbh + ah);
    return (height);
}

float CalcCRBaseline(float &dbh)
{
    // crown radius allometry
    float CR;
    if (!ctx.opt._CROWN_MM)
    {
        CR = exp(ctx.params.CR_a + ctx.params.CR_b * log(dbh)); // power law, the default
    }
    else
        CR = ctx.params.CR_b * dbh / (dbh + ctx.params.CR_a); // Michaelis Menten type allometry !!!: requires ctx.params.CR_b to be the CR_max parameter and ctx.params.CR_a the initial increase */
    // for reference, two crown allometries that are reasonable in French Guiana
    // t_CR = t_mult_CR * exp(1.9472 + 0.5925*log(t_dbh)); // crown allometry deduced from Piste Saint-Elie */
    // t_CR = t_mult_CR * exp(1.8814 + 0.5869*log(t_dbh)); // this is crown allometry derived from data set compiled by Jucker et al. 2016 (Global Change Biology)
    return (CR);
}

float CalcCDBaseline(float &height)
{
    // crown depth allometry
    // since v.2.5, simplification of the computation of the crown depth, in accordance with the Canopy Constructor algorithm
    float CD = (ctx.params.CD_a + ctx.params.CD_b * height);
    return (CD);
}

//! - upper bound on LAI within one voxel and above voxel (beyond 9.95 and 19.95, none of the environmental variables should change), needed for LookUp tables
int CalcIntabsorb(float absorb_prev, float absorb_delta)
{
    absorb_delta = fminf(absorb_delta, 9.95);
    absorb_prev = fminf(absorb_prev, 19.95);
    int intabsorb = int(absorb_prev * 20.0) + 400 * int(absorb_delta * 20.0);
    return (intabsorb);
}
// Helper function
//! - upper bound on LAI within one voxel and above voxel, needed for LookUp tables, for cases where there won't be any absorption within the voxel (absorb_delta = 0.0)
int CalcIntabsorb(float absorb_prev)
{
    absorb_prev = fminf(absorb_prev, 19.95);
    int intabsorb = int(absorb_prev * 20.0);
    return (intabsorb);
}

// ##############################################
// ######        Output routines         ########
// ##############################################

// ##############################################
//  Global function: calculation of the global averages every ctx.time.timestep
// ##############################################

void Average(void)
{

#ifdef TRACK_INDIVIDUALS
    TrackingData_andOutput();
#endif

#ifdef Output_ABC
    UpdateMovingAveragesABC();
#endif

    int site, spp;
    float sum1 = 0.0, sum10 = 0.0, sum30 = 0.0, ba = 0.0, npp = 0.0, gpp = 0.0, ba10 = 0.0, agb = 0.0, rday = 0.0, rnight = 0.0, rstem = 0.0, litterfall = 0.0;

    float inbcells = 1.0 / float(ctx.grid.sites * mpi_size);
    float inbhectares = inbcells * ctx.grid.NH * ctx.grid.NH * 10000.0;

#ifdef WATER
    ctx.soil.abund_phi_root = 0.0;
    ctx.soil.abund10_phi_root = 0.0;
    ctx.soil.agb_phi_root = 0.0;
#endif

    if (!mpi_rank)
    {
        for (spp = 1; spp <= ctx.grid.nbspp; spp++)
            S[spp].s_sum10 = S[spp].s_sum30 = S[spp].s_ba = S[spp].s_ba10 = S[spp].s_agb = S[spp].s_gpp = S[spp].s_npp = S[spp].s_rday = S[spp].s_rnight = S[spp].s_rstem = S[spp].s_litterfall = 0;

        for (site = 0; site < ctx.grid.sites; site++)
            T[site].Average();

        for (spp = 1; spp <= ctx.grid.nbspp; spp++)
        {
            float s_sum1 = float(S[spp].s_nbind) * inbhectares;
            S[spp].s_sum10 *= inbhectares;
            S[spp].s_sum30 *= inbhectares;
            S[spp].s_ba *= inbhectares;
            S[spp].s_ba10 *= inbhectares;
            S[spp].s_agb *= inbhectares;
            S[spp].s_gpp *= inbhectares;
            S[spp].s_npp *= inbhectares;
            S[spp].s_rday *= inbhectares;
            S[spp].s_rnight *= inbhectares;
            S[spp].s_rstem *= inbhectares;
            S[spp].s_litterfall *= inbhectares;

            sum1 += float(S[spp].s_nbind) * inbhectares;
            sum10 += S[spp].s_sum10;
            sum30 += S[spp].s_sum30;
            ba += S[spp].s_ba;
            ba10 += S[spp].s_ba10;
            agb += S[spp].s_agb;
            gpp += S[spp].s_gpp;
            npp += S[spp].s_npp;
            rday += S[spp].s_rday;
            rnight += S[spp].s_rnight;
            rstem += S[spp].s_rstem;
            litterfall += S[spp].s_litterfall;

            // if(ctx.opt._OUTPUT_extended){
            output_extended[0] << ctx.time.iter << "\t" << S[spp].s_name << "\t" << s_sum1 << "\t" << S[spp].s_sum10 << "\t" << S[spp].s_sum30 << "\t" << S[spp].s_ba << "\t" << S[spp].s_ba10 << "\t" << S[spp].s_agb << "\t" << S[spp].s_gpp << "\t" << S[spp].s_npp << "\t" << S[spp].s_rday << "\t" << S[spp].s_rnight << "\t" << S[spp].s_rstem << "\t" << S[spp].s_litterfall << endl;
            //}
        }

        output_basic[0] << ctx.time.iter << "\t" << sum1 << "\t" << sum10 << "\t" << sum30 << "\t" << ba << "\t" << ba10 << "\t" << agb << "\t" << gpp << "\t" << npp << "\t" << rday << "\t" << rnight << "\t" << rstem << "\t" << litterfall << endl;

#ifdef MIP_Lichstein
        if ((!ctx.opt._FromInventory && ctx.time.iter >= (ctx.time.nbiter - 100 * ctx.time.iterperyear)) || ctx.opt._FromInventory)
        {
            output_MIP_eco << ctx.time.iter << "\t" << ctx.time.iter << "\t" << ctx.time.iter << "\t" << gpp * 100 << "\t" << npp * 100 << "\t";
        }
#endif

        cout.setf(ios::fixed, ios::floatfield);
        cout.precision(2);

#ifdef WATER
        cout << ctx.time.iter << "\tTrees (1/ha): " << sum1 << " | " << sum10 << " | " << sum30 << " *** nbdead (%): " << 100.0 * ctx.diag.nbdead_n1 * inbhectares / sum1 << " | " << 100.0 * ctx.diag.nbdead_n10 * inbhectares / sum10 << " | " << 100.0 * ctx.diag.nbdead_n30 * inbhectares / sum30 << " *** AGB (t/ha): " << round(agb / 1000.0) << " GPP (MgC/ha/yr) " << gpp * ctx.time.iterperyear << " NPP " << npp * ctx.time.iterperyear << " litterfall (Mg/ha/yr) " << litterfall * ctx.time.iterperyear << " *** ctx.soil.Transpiration (mm): ";
#else

        cout << ctx.time.iter << "\tTrees (1/ha): " << sum1 << " | " << sum10 << " | " << sum30 << " *** nbdead (%): " << 100.0 * ctx.diag.nbdead_n1 * inbhectares / sum1 << " | " << 100.0 * ctx.diag.nbdead_n10 * inbhectares / sum10 << " | " << 100.0 * ctx.diag.nbdead_n30 * inbhectares / sum30 << " *** AGB (t/ha): " << round(agb / 1000.0) << " GPP (MgC/ha/yr) " << gpp * ctx.time.iterperyear << " NPP " << npp * ctx.time.iterperyear << " litterfall (Mg/ha/yr) " << litterfall * ctx.time.iterperyear << endl;
#endif

        if (ctx.opt._OUTPUT_extended)
        {
            float tototest = 0.0, tototest2 = 0.0, flux;
            for (int site = 0; site < ctx.grid.sites; site++)
            {
                flux = ctx.climate.WDailyMean * exp(-fmaxf(ctx.field.LAI3D[0][site + ctx.grid.SBORD], 0.0) * ctx.params.kpar);
                tototest += flux;
                tototest2 += flux * flux;
            }
            tototest /= float(ctx.grid.sites * ctx.grid.LH * ctx.grid.LH); // Average light flux (PPFD) on the ground
            tototest2 /= float(ctx.grid.sites * ctx.grid.LH * ctx.grid.LH);
            if (ctx.time.iter)
                output_extended[1] << ctx.time.iter << "\tMean PPFDground\t" << tototest << "\t" << sqrt(tototest2 - tototest * tototest) << "\n";

            if (ctx.opt._BASICTREEFALL)
                output_extended[2] << ctx.time.iter << "\t" << ctx.diag.nbdead_n1 * inbhectares << "\t" << ctx.diag.nbdead_n10 * inbhectares << "\t" << ctx.diag.nbTreefall1 * inbhectares << "\t" << ctx.diag.nbTreefall10 * inbhectares << endl;
            else
                output_extended[2] << ctx.time.iter << "\t" << ctx.diag.nbdead_n1 * inbhectares << "\t" << ctx.diag.nbdead_n10 * inbhectares << endl;
        }
    }

    if (ctx.opt._NDD)
        ctx.crown.BAtot = ba;

    for (int site = 0; site < ctx.grid.sites; site++)
    {
        if (T[site].t_age > 0)
        {
            if (T[site].t_NPP <= 0.0)
            {
                ctx.diag.nbtrees_carbstarv_n1++;
                if (T[site].t_dbh >= 0.1)
                    ctx.diag.nbtrees_carbstarv_n10++;
                if (T[site].t_dbh >= 0.3)
                    ctx.diag.nbtrees_carbstarv_n30++;
            }
        }
    }

#ifdef CHECK_CARBON
    float carbon_stored_leaves_previous, carbon_stored_trunk_previous = 0.0, carbon_stored_free_previous = 0.0, carbon_assimilated_total_previous = 0.0, carbon_net_total_previous = 0.0;

    if (ctx.time.iter == 0)
    {
        carbon_stored_leaves_previous = 0.0;
        carbon_stored_trunk_previous = 0.0;
        carbon_stored_free_previous = 0.0;
    }
    else
    {
        carbon_stored_leaves_previous = carbon_stored_leaves;
        carbon_stored_trunk_previous = carbon_stored_trunk;
        carbon_stored_free_previous = carbon_stored_free;
    }
    carbon_stored_leaves = 0.0;
    carbon_stored_trunk = 0.0;
    carbon_stored_free = 0.0;
    for (int s = 0; s < ctx.grid.sites; s++)
    {
        if (T[s].t_age > 0)
        {
            float agb = 1000.0 * T[s].CalcAGB(); // convert to g
            float carbon_trunk = agb * 0.5;
            carbon_stored_trunk += carbon_trunk;

            float carbon_free = T[s].t_carbon_storage;
            carbon_stored_free += carbon_free;

            float carbon_leaves = T[s].t_LA * T[s].t_LMA * 0.5;
            carbon_stored_leaves += carbon_leaves;
        }
    }

    float factor_weight = 0.000001; // factor to convert carbon from g to tons

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(5);

    cout << ctx.time.iter << "\tTrunkC: " << carbon_stored_trunk * factor_weight << " LeavesC: " << carbon_stored_leaves * factor_weight << " FreeC: " << carbon_stored_free * factor_weight << " Total AssimC: " << carbon_assimilated_total * factor_weight << " Total NetC: " << carbon_net_total * factor_weight << endl;
    cout << ctx.time.iter << "\tTrunkC change: " << (carbon_stored_trunk - carbon_stored_trunk_previous) * factor_weight << " LeavesC: " << (carbon_stored_leaves - carbon_stored_leaves_previous) * factor_weight << " FreeC: " << (carbon_stored_free - carbon_stored_free_previous) * factor_weight << endl;

#endif

    cout.setf(ios::fixed, ios::floatfield);
    cout.precision(5);

#ifdef WATER

    float evapo = 0.0, runoff = 0.0, leak = 0.0, interception = 0.0, throughfall = 0.0, lai = 0.0;
    for (int d = 0; d < ctx.grid.nbdcells; d++)
    {
        evapo += ctx.soil.Evaporation[d];         // in m3
        interception += ctx.soil.Interception[d]; // in mm, as rainfall
        throughfall += ctx.soil.Throughfall[d];   // in m3
        runoff += ctx.soil.Runoff[d];             // in m3
        leak += ctx.soil.Leakage[d];              // in m3
        lai += ctx.soil.LAI_DCELL[0][d];
    }

    float isites = 1.0 / float(ctx.grid.sites * ctx.grid.LH * ctx.grid.LH);
    float icells = 1.0 / float(ctx.grid.nbdcells);
    evapo *= isites;                // in ctx.params.m
    runoff *= isites;               // in ctx.params.m
    leak *= isites;                 // in ctx.params.m
    throughfall *= isites;          // in ctx.params.m
    interception *= isites * 0.001; // in ctx.params.m
    lai *= icells;
    ctx.soil.transpiration_1016 *= isites;

    output[11] << ctx.time.iter << "\t" << ctx.climate.precip << "\t" << interception << "\t" << throughfall << "\t" << runoff << "\t" << leak << "\t" << evapo << "\t";
    output[21] << ctx.time.iter << "\t" << lai << endl;

#ifdef MIP_Lichstein
    float transpitot = 0.0;
#endif

    for (int l = 0; l < ctx.soil.nblayers_soil; l++)
    {
        float transpi = 0.0;
        for (int d = 0; d < ctx.grid.nbdcells; d++)
        {
            transpi += ctx.soil.Transpiration[l][d]; // in m3
        }
        transpi *= isites; // in ctx.params.m
        output[11] << transpi << "\t";
        cout << transpi * 1000 << " | "; // in mm

#ifdef MIP_Lichstein
        transpitot += transpi;
#endif
    }

    output[11] << ctx.soil.transpiration_1016 << "\t";

    cout << ctx.soil.transpiration_1016 * 1000 << " | " << endl;

#ifdef MIP_Lichstein
    if ((!ctx.opt._FromInventory && ctx.time.iter >= (ctx.time.nbiter - 100 * ctx.time.iterperyear)) || ctx.opt._FromInventory)
    {
        output_MIP_eco << (transpitot + evapo) * 1000 << "\t" << lai << "\t" << litterfall * 0.5 * 100 << "\t";
    }

    float SW1 = 0.0, SW2 = 0.0, SW3 = 0.0, SW4 = -9999; // Guyaflux
    // float SW1=0.0, SW2=0.0, SW3=0.0, SW4=0.0; // Tapajos
    float LT1 = 0.0, LT2 = 0.0, LT3 = 0.0, LT4 = 0.0;
#endif

    float layer_depth_previous = 0.0;
    for (int l = 0; l < ctx.soil.nblayers_soil; l++)
    {
        float soilWC = 0.0;
        for (int d = 0; d < ctx.grid.nbdcells; d++)
        {
            soilWC += ctx.soil.SWC3D[l][d]; // in m3
        }
        float layer_depth_current = ctx.soil.layer_depth[l];
        float layer_thickness = layer_depth_current - layer_depth_previous;
        soilWC *= isites / layer_thickness; // in m3/m3
        output[11] << soilWC << "\t";

#ifdef MIP_Lichstein
        if (l == 0 || l == 1)
        { // Guyaflux
            SW1 += soilWC * layer_thickness;
            LT1 += layer_thickness;
        }
        if (l == 2 || l == 3)
        {
            SW2 += soilWC * layer_thickness;
            LT2 += layer_thickness;
        }
        if (l == 4)
        {
            SW3 += soilWC * layer_thickness;
            LT3 += layer_thickness;
        }

        /*if (l==0 || l==1) {             //Tapajos
            SW1+=soilWC*layer_thickness;
            LT1+=layer_thickness;
        }
        if (l==2) {
            SW2+=soilWC*layer_thickness;
            LT2+= layer_thickness;
        }
        if (l==3) {
            SW3+=soilWC*layer_thickness;
            LT3+= layer_thickness;
        }
        if (l==4) {
            SW4+=soilWC*layer_thickness;
            LT4+= layer_thickness;
        }*/
#endif

        layer_depth_previous = layer_depth_current;
    }
    for (int l = 0; l < ctx.soil.nblayers_soil; l++)
    {
        float soilPhi = 0.0;
        for (int d = 0; d < ctx.grid.nbdcells; d++)
        {
            soilPhi += ctx.soil.soil_phi3D[l][d]; // in MPa
        }
        soilPhi *= icells; // in MPa
        output[11] << soilPhi << "\t";
    }

    output[11] << "\n";

#ifdef MIP_Lichstein
    SW1 /= LT1;
    SW2 /= LT2;
    SW3 /= LT3;
    // SW4/=LT4;     //Tapajos

    if ((!ctx.opt._FromInventory && ctx.time.iter >= (ctx.time.nbiter - 100 * ctx.time.iterperyear)) || ctx.opt._FromInventory)
    {
        output_MIP_eco << SW1 << "\t" << SW2 << "\t" << SW3 << "\t" << SW4 << endl;
    }
#endif

    if (ctx.time.iter == (ctx.time.nbiter - 90) || ctx.time.iter == (ctx.time.nbiter - 45) || ctx.time.iter == (ctx.time.nbiter - 1))
    {

        int o_swc, o_swp, o_wfluxes;
        if (ctx.time.iter == (ctx.time.nbiter - 90))
        {
            o_swc = 1;
            o_swp = 4;
            o_wfluxes = 18;
        }
        if (ctx.time.iter == (ctx.time.nbiter - 45))
        {
            o_swc = 2;
            o_swp = 5;
            o_wfluxes = 19;
        }
        if (ctx.time.iter == (ctx.time.nbiter - 1))
        {
            o_swc = 3;
            o_swp = 6;
            o_wfluxes = 20;
        }

        output[o_wfluxes] << "LAI" << "\t";
        for (int d = 0; d < ctx.grid.nbdcells; d++)
        {
            output[o_wfluxes] << ctx.soil.LAI_DCELL[0][d] << "\t";
        }
        output[o_wfluxes] << endl;

        output[o_wfluxes] << "Evaporation" << "\t";
        for (int d = 0; d < ctx.grid.nbdcells; d++)
        {
            output[o_wfluxes] << ctx.soil.Evaporation[d] * ctx.grid.i_sites_per_dcell << "\t"; // in ctx.params.m
        }
        output[o_wfluxes] << endl;

        layer_depth_previous = 0.0;
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            float layer_depth_current = ctx.soil.layer_depth[l];
            float layer_thickness = layer_depth_current - layer_depth_previous;
            float norm = ctx.grid.i_sites_per_dcell / layer_thickness;
            output[o_swc] << l << "\t";
            output[o_swp] << l << "\t";
            output[o_wfluxes] << "Transpiration_" << l << "\t";
            for (int d = 0; d < ctx.grid.nbdcells; d++)
            {
                output[o_swc] << ctx.soil.SWC3D[l][d] * norm << "\t"; // in m3/m3
                output[o_swp] << ctx.soil.soil_phi3D[l][d] << "\t";
                output[o_wfluxes] << ctx.soil.Transpiration[l][d] * ctx.grid.i_sites_per_dcell << "\t";
            }
            layer_depth_previous = layer_depth_current;
            output[o_swc] << endl;
            output[o_swp] << endl;
            output[o_wfluxes] << endl;
        }
    }

    output[22] << ctx.time.iter << "\t";
    output[23] << ctx.time.iter << "\t";
    output[24] << ctx.time.iter << "\t";
    for (int l = 0; l < ctx.grid.HEIGHT + 1; l++)
    {
        ctx.soil.LAI_young[l] *= isites;
        ctx.soil.LAI_mature[l] *= isites;
        ctx.soil.LAI_old[l] *= isites;
        output[22] << ctx.soil.LAI_young[l] << "\t";
        output[23] << ctx.soil.LAI_mature[l] << "\t";
        output[24] << ctx.soil.LAI_old[l] << "\t";
        ctx.soil.LAI_young[l] = 0.0;
        ctx.soil.LAI_mature[l] = 0.0;
        ctx.soil.LAI_old[l] = 0.0;
    }
    output[22] << endl;
    output[23] << endl;
    output[24] << endl;

    ctx.soil.abund_phi_root *= inbhectares / sum1;
    ctx.soil.abund10_phi_root *= inbhectares / sum10;
    ctx.soil.agb_phi_root *= inbhectares / agb;

    output[31] << ctx.time.iter << "\t" << ctx.soil.abund_phi_root << "\t" << ctx.soil.abund10_phi_root << "\t" << ctx.soil.agb_phi_root << endl;

#endif

#ifdef MPI
    // This section corresponds to the parallel version of the reporting of the global diagnostic variables. Since much work has been done on routine Average over the past years, this would need a full rewrite, !!!!Action 20/01/2016: rework the parallel version of function Average!!!!

    //     MPI_Reduce(&(S[spp].s_nbind),&sind,1,
    //     MPI_INT,MPI_SUM,0,MPI_COMM_WORLD);
    //     MPI_Reduce(S[spp].s_output_field,S[spp].s_output_field,5,
    //     MPI_FLOAT,MPI_SUM,0,MPI_COMM_WORLD);
    //     MPI_Reduce(Mortality,Mortality,4,
    //     MPI_FLOAT,MPI_SUM,0,MPI_COMM_WORLD);
    //     MPI_Reduce(&S[spp].s_output_field[6],&S[spp].s_output_field[6],5,
    //     MPI_FLOAT,MPI_MAX,0,MPI_COMM_WORLD);
#endif
    cout.flush();
}

// ##############################################
//  Global function: output of the field variables every ctx.time.timestep
// ##############################################
void OutputField()
{
    int site, h;
    if ((ctx.time.nbout) && ((ctx.time.iter % ctx.time.freqout) == ctx.time.freqout - 1))
    {
        // output fields, ctx.time.nbout times during simulation (every ctx.time.freqout iterations)
        int d;
        for (d = 0; d < ctx.grid.dbhmaxincm; d++)
            ctx.diag.nbdbh[d] = 0;
        for (site = 0; site < ctx.grid.sites; site++)
            T[site].histdbh();

        for (h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        {
            ctx.diag.layer[h] = 0;
            for (site = 0; site < ctx.grid.sites; site++)
                ctx.diag.layer[h] += ctx.field.LAI3D[h][site + ctx.grid.SBORD];
        }

#ifdef MPI
        MPI_Status status;
        MPI_Reduce(ctx.diag.nbdbh, ctx.diag.nbdbh, ctx.grid.dbhmaxincm, MPI_INT, MPI_SUM, 0, MPI_COMM_WORLD);
        MPI_Reduce(ctx.diag.layer, ctx.diag.layer, ctx.grid.HEIGHT, MPI_FLOAT, MPI_SUM, 0, MPI_COMM_WORLD);
#endif
        if (!mpi_rank)
        {
            // output of the dbh histograms (output[31])
            for (d = 1; d < ctx.grid.dbhmaxincm; d++)
                output[31] << d << "\t" << ctx.diag.nbdbh[d] << "\n";
            output[31] << "\n";
            // output of the mean LAI per height class (output[32])
            float norm = 1.0 / float(ctx.grid.sites * ctx.grid.LH * ctx.grid.LH * mpi_size);
            for (h = 0; h < (ctx.grid.HEIGHT + 1); h++)
                output[32] << ctx.time.iter << "\t" << h * ctx.grid.LV << "\t" << ctx.diag.layer[h] * norm << "\n";
            output[32] << "\n";
        }
    }
}

// ##############################################
//  Global function: output snapshots of the scene at one point in time
// ##############################################
//! - This can be used to take snapshots of the forest in more detail and track its development over time.
void OutputSnapshot(fstream &output, bool header, float dbh_limit)
{
    cout << "Writing snapshot of forest to file." << endl;
    if (header == 1)
    {

#ifdef WATER
        output << "iter\tcol\trow\tfrom_Data\tsp_lab\tsite\tCrownDisplacement\tPmass\tNmass\tLMA\tleafarea\ttlp\twsg\tRdark\tVcmax\tJmax\tleaflifespan\tlambda_young\tlambda_mature\tlambda_old\tdbhmature\tdbhmax\thmax\tah\tCt\tLAImax\tfraction_filled\tmult_height\tmult_CR\tmult_CD\tmult_P\tmult_N\tmult_LMA\tmult_dbhmax\tmult_leafarea\tmult_tlp\tdev_wsg\tage\tdbh\tsapwood_area\theight\tCD\tCR\tGPP\tNPP\tRday\tRnight\tRstem\tLAmax\tLA\tyoungLA\tmatureLA\toldLA\tLAI\tlitter\tcarbon_storage\tcarbon_biometry\tmultiplier_seed\thurt\tNPPneg";

        output << "\troot_depth\tphi_root\tWSF\tWSF_A\ttranspiration\tg1_0\tg1";
#ifdef PHENO_DROUGHT
        output << "\tNdays_dry\tNdays_wet\tpheno_factor";
#endif
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            output << "\troot_biomass" << l;
        }
        for (int l = 0; l < ctx.soil.nblayers_soil; l++)
        {
            output << "\tsoil_layer_weight" << l;
        }

#else // WATER
        output << "iter\tcol\trow\tfrom_Data\tsp_lab\tsite\tCrownDisplacement\tPmass\tNmass\tLMA\twsg\tRdark\tVcmax\tJmax\tleaflifespan\tlambda_young\tlambda_mature\tlambda_old\tdbhmature\tdbhmax\thmax\tah\tCt\tLAImax\tfraction_filled\tmult_height\tmult_CR\tmult_CD\tmult_P\tmult_N\tmult_LMA\tmult_dbhmax\tdev_wsg\tage\tdbh\tsapwood_area\theight\tCD\tCR\tGPP\tNPP\tRday\tRnight\tRstem\tLAmax\tLA\tyoungLA\tmatureLA\toldLA\tLAI\tlitter\tcarbon_storage\tcarbon_biometry\tmultiplier_seed\thurt\tNPPneg";

#endif

#ifdef Output_ABC
        output << "\tdbh_previous";
#endif
        output << "\tAGB\ts_name" << endl;
    }

    // reset the canopy to make sure that it is well-constructed
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        for (int sbsite = 0; sbsite < ctx.grid.sites + 2 * ctx.grid.SBORD; sbsite++)
            ctx.field.LAI3D[h][sbsite] = 0.0;

    for (int site = 0; site < ctx.grid.sites; site++)
    { // Each tree contribues to ctx.field.LAI3D
        T[site].CalcLAI();
    }

    for (int h = ctx.grid.HEIGHT; h > 0; h--)
    { // LAI is computed by summing LAI from the canopy top to the ground
        for (int site = 0; site < ctx.grid.sites; site++)
        {
            int sbsite = site + ctx.grid.SBORD;
            ctx.field.LAI3D[h - 1][sbsite] += ctx.field.LAI3D[h][sbsite];
        }
    }

    // output.setf(ios::fixed,ios::floatfield);
    if (ctx.opt._OUTPUT_inventory)
    {
        output.precision(10); // needed for correct restart
    }
    else
    {
        output.precision(5);
    }
    for (int row = 0; row < ctx.grid.rows; row++)
    {
        for (int col = 0; col < ctx.grid.cols; col++)
        {
            int site = col + ctx.grid.cols * row;
            if (T[site].t_age > 0 && T[site].t_dbh >= dbh_limit)
            {
                // recalculate photosynthesis and respiration
                // T[site].CalcRespGPP();
                // T[site].CalcNPP();
                // output all tree variables, this is potentially a very large file
                // we currently do not output the t_NDDfield vector, as it is too large

#ifdef WATER
                output << ctx.time.iter << "\t" << col << "\t" << row << "\t" << T[site].t_from_Data << "\t" << T[site].t_sp_lab << "\t" << site << "\t" << T[site].t_CrownDisplacement << "\t" << T[site].t_Pmass << "\t" << T[site].t_Nmass << "\t" << T[site].t_LMA << "\t" << T[site].t_leafarea << "\t" << T[site].t_tlp << "\t" << T[site].t_wsg << "\t" << T[site].t_Rdark << "\t" << T[site].t_Vcmax << "\t" << T[site].t_Jmax << "\t" << T[site].t_leaflifespan << "\t" << T[site].t_lambda_young << "\t" << T[site].t_lambda_mature << "\t" << T[site].t_lambda_old << "\t" << T[site].t_dbhmature << "\t" << T[site].t_dbhmax << "\t" << T[site].t_hmax << "\t" << T[site].t_ah << "\t" << T[site].t_Ct << "\t" << T[site].t_LAImax << "\t" << T[site].t_fraction_filled << "\t" << T[site].t_mult_height << "\t" << T[site].t_mult_CR << "\t" << T[site].t_mult_CD << "\t" << T[site].t_mult_P << "\t" << T[site].t_mult_N << "\t" << T[site].t_mult_LMA << "\t" << T[site].t_mult_dbhmax << "\t" << T[site].t_mult_leafarea << "\t" << T[site].t_mult_tlp << "\t" << T[site].t_dev_wsg << "\t" << T[site].t_age << "\t" << T[site].t_dbh << "\t" << T[site].t_sapwood_area << "\t" << T[site].t_height << "\t" << T[site].t_CD << "\t" << T[site].t_CR << "\t" << T[site].t_GPP << "\t" << T[site].t_NPP << "\t" << T[site].t_Rday << "\t" << T[site].t_Rnight << "\t" << T[site].t_Rstem << "\t" << T[site].t_LAmax << "\t" << T[site].t_LA << "\t" << T[site].t_youngLA << "\t" << T[site].t_matureLA << "\t" << T[site].t_oldLA << "\t" << T[site].t_LAI << "\t" << T[site].t_litter << "\t" << T[site].t_carbon_storage << "\t" << T[site].t_carbon_biometry << "\t" << T[site].t_multiplier_seed << "\t" << T[site].t_hurt << "\t" << T[site].t_NPPneg;

                output << "\t" << T[site].t_root_depth << "\t" << T[site].t_phi_root << "\t" << T[site].t_WSF << "\t" << T[site].t_WSF_A << "\t" << T[site].t_transpiration << "\t" << T[site].t_g1 << "\t" << T[site].t_g1_0;
#ifdef PHENO_DROUGHT
                output << "\t" << T[site].t_Ndays_dry << "\t" << T[site].t_Ndays_wet << "\t" << T[site].t_pheno_factor;

#endif
                for (int l = 0; l < ctx.soil.nblayers_soil; l++)
                {
                    output << "\t" << T[site].t_root_biomass[l];
                }
                for (int l = 0; l < ctx.soil.nblayers_soil; l++)
                {
                    output << "\t" << T[site].t_soil_layer_weight[l];
                }

#else
                output << ctx.time.iter << "\t" << col << "\t" << row << "\t" << T[site].t_from_Data << "\t" << T[site].t_sp_lab << "\t" << site << "\t" << T[site].t_CrownDisplacement << "\t" << T[site].t_Pmass << "\t" << T[site].t_Nmass << "\t" << T[site].t_LMA << "\t" << T[site].t_wsg << "\t" << T[site].t_Rdark << "\t" << T[site].t_Vcmax << "\t" << T[site].t_Jmax << "\t" << T[site].t_leaflifespan << "\t" << T[site].t_lambda_young << "\t" << T[site].t_lambda_mature << "\t" << T[site].t_lambda_old << "\t" << T[site].t_dbhmature << "\t" << T[site].t_dbhmax << "\t" << T[site].t_hmax << "\t" << T[site].t_ah << "\t" << T[site].t_Ct << "\t" << T[site].t_LAImax << "\t" << T[site].t_fraction_filled << "\t" << T[site].t_mult_height << "\t" << T[site].t_mult_CR << "\t" << T[site].t_mult_CD << "\t" << T[site].t_mult_P << "\t" << T[site].t_mult_N << "\t" << T[site].t_mult_LMA << "\t" << T[site].t_mult_dbhmax << "\t" << T[site].t_dev_wsg << "\t" << T[site].t_age << "\t" << T[site].t_dbh << "\t" << T[site].t_sapwood_area << "\t" << T[site].t_height << "\t" << T[site].t_CD << "\t" << T[site].t_CR << "\t" << T[site].t_GPP << "\t" << T[site].t_NPP << "\t" << T[site].t_Rday << "\t" << T[site].t_Rnight << "\t" << T[site].t_Rstem << "\t" << T[site].t_LAmax << "\t" << T[site].t_LA << "\t" << T[site].t_youngLA << "\t" << T[site].t_matureLA << "\t" << T[site].t_oldLA << "\t" << T[site].t_LAI << "\t" << T[site].t_litter << "\t" << T[site].t_carbon_storage << "\t" << T[site].t_carbon_biometry << "\t" << T[site].t_multiplier_seed << "\t" << T[site].t_hurt << "\t" << T[site].t_NPPneg;
#endif

#ifdef Output_ABC
                output << "\t" << T[site].t_dbh_previous;
#endif

                // we add a few tree-based variables that are derived or environment-related, but not directly kept track of
                float AGB = T[site].CalcAGB();

                output << "\t" << AGB << "\t" << S[T[site].t_sp_lab].s_name << endl;
            }
        }
    }
}

#ifdef CHM_SPIKEFREE
// ##########################
// ## Make a spikefree CHM ##
// ##########################
void MakeCHMspikefree(vector<int> &chm_spikefree)
{
    chm_spikefree.clear();
    chm_spikefree.reserve(ctx.grid.sites);
    for (int s = 0; s < ctx.grid.sites; s++)
        chm_spikefree.push_back(0);

#ifdef Output_ABC // IM2023 added, otherwise row_start, row_end, col_start, col_end are not necessarily decalred, and this blocks code building.

    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            if (T[s].t_age > 0)
            {
#ifdef CROWN_UMBRELLA
                float height = T[s].t_height;
                float CR = T[s].t_CR;
                float CD = T[s].t_CD;
                float fraction_filled_target = 1.0; // to remove spikes, we assume a fully filled crown for all trees
                int shell_fromtop = 0;              // toplayer
                float noinput = 0.0;

                LoopLayerUpdateCrownStatistic_template(r, c, height, CR, CD, fraction_filled_target, shell_fromtop, GetRadiusSlope, noinput, chm_spikefree, KeepFloatAsIs, UpdateCHMvector);
#else
                int crown_top = int(T[s].t_height);
                int crown_intarea = GetCrownIntarea(T[s].t_CR);

                int row_crowncenter = s / ctx.grid.cols;
                int col_crowncenter = s % ctx.grid.cols;

                for (int i = 0; i < crown_intarea; i++)
                {
                    int site_relative = ctx.lookup.LookUp_Crown_site[i];
                    int row = row_crowncenter + site_relative / 51 - 25;
                    int col = col_crowncenter + site_relative % 51 - 25;
                    if (row >= 0 && row < ctx.grid.rows && col >= 0 && col < ctx.grid.cols)
                    {
                        int site = col + row * ctx.grid.cols;
                        if (chm_spikefree[site] < crown_top)
                            chm_spikefree[site] = crown_top;
                    }
                }
#endif
            }
        }
    }

#endif
}
#endif

// ################################
// ### Output for visualization ###
// ################################
void OutputVisual()
{
    // first simple chm output
#ifdef CHM_SPIKEFREE
    vector<int> chm_spikefree;
    MakeCHMspikefree(chm_spikefree);

    for (int col = ctx.crown.mincol_visual; col < ctx.crown.maxcol_visual; col++)
    {
        for (int row = ctx.crown.minrow_visual; row < ctx.crown.maxrow_visual; row++)
        {
            int site = col + row * ctx.grid.cols;
            int height_canopy = 0;
            for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            {
                if (ctx.field.LAI3D[h][site + ctx.grid.SBORD] > 0.0)
                    height_canopy = max(h, height_canopy);
            }
            output_visual[0] << ctx.time.iter << "\t" << row << "\t" << col << "\t" << height_canopy + 1 << "\t" << chm_spikefree[site] << "\t" << ctx.field.LAI3D[0][site + ctx.grid.SBORD] << endl;
        }
    }
#else
    for (int col = ctx.crown.mincol_visual; col < ctx.crown.maxcol_visual; col++)
    {
        for (int row = ctx.crown.minrow_visual; row < ctx.crown.maxrow_visual; row++)
        {
            int site = col + row * ctx.grid.cols;
            int height_canopy = 0;
            for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            {
                if (ctx.field.LAI3D[h][site + ctx.grid.SBORD] > 0.0)
                    height_canopy = max(h, height_canopy);
            }
            output_visual[0] << ctx.time.iter << "\t" << row << "\t" << col << "\t" << height_canopy + 1 << "\t" << ctx.field.LAI3D[0][site + ctx.grid.SBORD] << endl;
        }
    }
#endif

    // now the sliced output
    for (int row = ctx.crown.minrow_visual_slice; row < ctx.crown.maxrow_visual_slice; row++)
    {
        for (int col = 0; col < ctx.grid.cols; col++)
        {
            int s = col + row * ctx.grid.cols;
            if (T[s].t_age > 0)
            {
                int row_slice = row;

                float height = T[s].t_height;
                float CD = T[s].t_CD;
                int crown_top = int(height);
                float CR = T[s].t_CR;
                int crown_base = int(height - CD);

                vector<float> output_statistics;
                output_statistics.reserve(4);
                output_statistics.push_back(T[s].t_sp_lab);

                float ratio_height_Ct;
                if (T[s].t_Ct > 0.0)
                    ratio_height_Ct = T[s].t_height / T[s].t_Ct;
                else
                    ratio_height_Ct = 0.0;
                output_statistics.push_back(ratio_height_Ct);

                float ratio_NPP_GPP;
                if (T[s].t_GPP > 0.0)
                    ratio_NPP_GPP = T[s].t_NPP / T[s].t_GPP;
                else
                    ratio_NPP_GPP = 0.0;
                output_statistics.push_back(ratio_NPP_GPP);

#ifdef CROWN_UMBRELLA
                float fraction_filled_target = 1.0;                  // we assume a fully filled crown for all trees
                int max_shells = min(crown_top - crown_base + 1, 4); // since the new crown shapes

                for (int h = 0; h <= crown_top - max_shells; h++)
                    OutputCrownSliced(h, s, row_slice, output_statistics);

                for (int shell_fromtop = 0; shell_fromtop < max_shells; shell_fromtop++)
                {
                    LoopLayerUpdateCrownStatistic_template(row, col, height, CR, CD, fraction_filled_target, shell_fromtop, GetRadiusSlope, row_slice, output_statistics, KeepIntAsIs, OutputCrownSliced);
                }
#else
                int crown_intarea = GetCrownIntarea(CR);

                for (int h = 0; h <= crown_base; h++)
                    OutputCrownSliced(h, s, row_slice, output_statistics);

                for (int h = crown_base; h <= crown_top; h++)
                {
                    for (int i = 0; i < crown_intarea; i++)
                    {
                        int site_relative = ctx.lookup.LookUp_Crown_site[i];
                        int row_crown = row + site_relative / 51 - 25;
                        int col_crown = col + site_relative % 51 - 25;
                        int site_crown = col_crown + row_crown * ctx.grid.cols;
                        OutputCrownSliced(h, s, row_slice, output_statistics);
                    }
                }
#endif
            }
        }
    }
}

// ##################
// ### Output CHM ###
// ##################
void OutputCHM(fstream &output_CHM)
{
#ifdef CHM_SPIKEFREE
    vector<int> chm_spikefree;
    MakeCHMspikefree(chm_spikefree);

    output_CHM << "site" << "\t" << "row" << "\t" << "col" << "\t" << "height" << "\t" << "height_spikefree" << "\t" << "LAI" << endl;
    for (int s = 0; s < ctx.grid.sites; s++)
    {
        int height_canopy = 0;
        for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        {
            if (ctx.field.LAI3D[h][s + ctx.grid.SBORD] > 0.0)
                height_canopy = max(h, height_canopy);
        }
        output_CHM << s << "\t" << int(s / ctx.grid.cols) << "\t" << int(s % ctx.grid.cols) << "\t" << height_canopy + 1 << "\t" << chm_spikefree[s] << "\t" << ctx.field.LAI3D[0][s + ctx.grid.SBORD] << endl;
    }

#else
    output_CHM << "site" << "\t" << "row" << "\t" << "col" << "\t" << "height" << "\t" << "LAI" << endl;
    for (int s = 0; s < ctx.grid.sites; s++)
    {
        int height_canopy = 0;
        for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            if (ctx.field.LAI3D[h][s + ctx.grid.SBORD] > 0.0)
                height_canopy = max(h, height_canopy);
        output_CHM << s << "\t" << int(s / ctx.grid.cols) << "\t" << int(s % ctx.grid.cols) << "\t" << height_canopy + 1 << "\t" << ctx.field.LAI3D[0][s + ctx.grid.SBORD] << endl;
    }
#endif
}

// ##############################################
//  Global function: writes the whole 3D LAI voxel field to file
// ##############################################
void OutputLAI(fstream &output_transmLAI3D)
{
    output_transmLAI3D << "s\trow\tcol\th\tLAI3D" << endl;
    for (int s = 0; s < ctx.grid.sites; s++)
        for (int h = 0; h < ctx.grid.HEIGHT; h++)
            output_transmLAI3D << s << "\t" << int(s / ctx.grid.cols) << "\t" << int(s % ctx.grid.cols) << "\t" << h << "\t" << ctx.field.LAI3D[h][s + ctx.grid.SBORD] << endl;
}

// ##############################################
//  Global function: transforming TROLL ctx.field.LAI3D field into point cloud and export as .las file
// ##############################################
//! - Basic ALS simulation, same as for calculating the TROLL transmittance field, added in v.3.1.6; !!!: TODO: merge with UpdateTransmittanceCHM_ABC
//! - First draws from a distribution to calculate the sampling density, i.e. the number of beams per voxel column
//! - Then loops over beams per voxel column from top to bottom and calculates the number of hits given the leaf area density (LAD) of the respective voxel
//! - If beams hit ground, all produce guaranteed returns
//! - The parameters used is the k assumed for the laser, which is only based on leaf geometry and should thus be taken equal to ctx.params.klight
//! - The difference to ctx.params.kpar is accounted for by parameterizing a probability of a further return after a hit, i.e. a transmittance of the leaves that are hit that is larger than for visible light and corresponds roughly to empirical fractions of second returns (~0.3-0.4). If taken together, a ctx.params.klight = 0.5 and a transmittance probability after a hit of 0.4 would yield an effective knir = 0.2, which is reasonable for most laser scanners.
//! - This approach makes lots of simplifying assumptions, among which are: no flightline, no angles, no beam diameter/divergence, Lambert-Beer extinction, including assumptions about the conversion between transmittance probability and energy extinction. Importantly, a TROLL forest contains no woody material and does not represent topography at the moment, all of which may influence sampling densities as well.
//! - One further question concerns the probability of obtaining a ground return: there is a long discussion in the literature about backscatter ratios between vegetation and ground. However, this seems to be neither a constant ratio nor seems there to be agreement on how it varies, likely due to dependence on footprint size and composition of reflecting surfaces. Cf., for example, Ni-Meister et al. 2001, IEEE Transactions: they use a ratio of mostly 1.0 (the implicit assumption in this simulation as well), but state that it should vary from site to site. Knapp et al. 2021, Remote Sensing, on the other hand: "The reflectance of the forest ground voxels was down-weighted by dividing by 2.5 in order to account for the lower reflectivity of the ground vs. vegetation." This specifically concerns GEDI waveform simulations, so large-footprint lasers, but the source publication does not seem to give a direct reference for the value. Furthermore, it would imply that the ratio of ground to vegetation reflectance is 0.4 for large-footprint full-waveform lidar, which seems to be in stark contrast to Chen et al. 2014, Remote Sensing of Environment, who looked at footprints of up to 8m and found a constant ratio ground/vegetation of 1.7 (they measured vegetation/ground ratio as ~0.57, so 1.7 = 1.0/0.57). However, their Figure 11 seems to indicate an inverse relationship for small footprints (~0.4m) with a ground to vegetation backscatter ratio of ca. 0.8. In the future, it would be worth running TROLL voxel output through an explicit raytracing simulator, with a much more detailed parameterization of surfaces (e.g. DART or Helios++, https://github.com/3dgeo-heidelberg/helios) and compare our simplified simulations to its outcomes/adjust accordingly.

void GenerateVoxelreturnsALS(vector<int> &beams, vector<float> &beams_returns, float mean_beam, float sd_beam, float klaser, float transmittance_laser)
{

    int beams_expected = int(ctx.grid.sites * mean_beam * 1.01); // reserve a bit more
    int returns_maximum = beams_expected * 5;           // if every laser had 5 returns
    beams.reserve(beams_expected);
    beams_returns.reserve(returns_maximum);

    // loop through the whole array by site first, then by height, then by return number
    for (int r = 0; r < ctx.grid.rows; r++)
    {
        for (int c = 0; c < ctx.grid.cols; c++)
        {
            int site = c + r * ctx.grid.cols;
            int nbbeams = int(mean_beam + gsl_ran_gaussian(ctx.rng.gslrand, sd_beam)); // always rounding up
            nbbeams = max(nbbeams, 1);

            for (int beam = 0; beam < nbbeams; beam++)
            {
                // loop over the field from maximum height to 0 and iteratively update voxels from top to bottom, following the beam. An alternative version, also allowing for ground returns, can be activated to extending the loop to h >= -1. In this case, when a beam is not extinguished before it reaches the ground (h >= 0), then it is counted as a ground return

                beams.push_back(site); // store the location of the current beam

                int beam_continues = 1;
                int beam_return = 0;
                int h = ctx.grid.HEIGHT - 1; // starting point to sample from

                while (h >= -1 && beam_continues && beam_return < 5)
                {
                    // there will only be a return, if the beam still exists

                    if (h >= 0)
                    {
                        // returns due to vegetation
                        float LAI_above = ctx.field.LAI3D[h + 1][site + ctx.grid.SBORD];
                        float LAI_current = ctx.field.LAI3D[h][site + ctx.grid.SBORD];

                        float LAD = LAI_current - LAI_above;

                        float prob_hit;
                        if (LAD > 0.0)
                            prob_hit = 1.0 - exp(-klaser * LAD);
                        else
                            prob_hit = 0.0;

                        int is_hit = gsl_ran_bernoulli(ctx.rng.gslrand, prob_hit);

                        if (is_hit)
                        {
                            beam_continues = gsl_ran_bernoulli(ctx.rng.gslrand, transmittance_laser);
                            beam_return++;
                            float z_hit = float(h) + gsl_rng_uniform(ctx.rng.gslrand);
                            beams_returns.push_back(z_hit);
                        }
                    }
                    else
                    {
                        // ground returns
                        beams_returns.push_back(0.0);
                        beam_return++;
                        beam_continues = 0;
                    }

                    h--;
                }

                beams.push_back(beam_return); // add the return number
            }
        }
    }
}
// !!!: At the moment, we simply assume a little-endian system for output (most personal computers, but not servers)
// BELOW some hints on how we would check for endianness and implement conversion of big to little endian
// the other way round (little to big) would be easy, as this is implemented in c++ via htol function

// check endianness,cf. https://stackoverflow.com/questions/4181951/how-to-check-whether-a-system-is-big-endian-or-little-endian
// int n = 1;
//// little endian if true
// if(*(char *)&n == 1) {...}

// or with <bit> library, cf. https://en.cppreference.com/w/cpp/types/endian, but: C++20
// #include <bit>
// #include <iostream>
//
// int main() {
//
//    if constexpr (std::endian::native == std::endian::big)
//        std::cout << "big-endian\n";
//    else if constexpr (std::endian::native == std::endian::little)
//        std::cout << "little-endian\n";
//    else std::cout << "mixed-endian\n";
//}

// swapping template (then we just need to check the endianness of the system)
// https://mklimenko.github.io/english/2018/08/22/robust-endian-swap/
// template <typename T>
// void SwapEndian(T &val) {
//    union U {
//        T val;
//        std::array<std::uint8_t, sizeof(T)> raw;
//    } src, dst;
//
//    src.val = val;
//    std::reverse_copy(src.raw.begin(), src.raw.end(), dst.raw.begin());
//    val = dst.val;
//}

/* void ExportPointcloudHeader(vector<int> &beams, fstream& output_pointcloud){
    // las files are defined as little endian
    // for the moment, we assume a little endian system and that chars actually have 8 bits (1 byte)
    // all names are just LAS definition names with underscores
    // future versions should upgrade format to 1.4, and include ways to parameterize coordinate reference system, etc.

    char file_signature[5] = "LASF";
    output_pointcloud.write(file_signature, sizeof(file_signature) - 1); // remove terminating NULL in char

    uint16_t file_source_id = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&file_source_id), sizeof(file_source_id));

    uint16_t global_encoding = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&global_encoding), sizeof(global_encoding));

    uint32_t project_id_guid_data_1 = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&project_id_guid_data_1), sizeof(project_id_guid_data_1));

    uint16_t project_id_guid_data_2 = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&project_id_guid_data_2), sizeof(project_id_guid_data_2));

    uint16_t project_id_guid_data_3 = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&project_id_guid_data_3), sizeof(project_id_guid_data_3));

    unsigned char project_id_guid_data_4[9] = "";
    output_pointcloud.write(reinterpret_cast<const char *>(&project_id_guid_data_4), sizeof(project_id_guid_data_4) - 1);

    unsigned char version_major = 1;    // this is slightly weird: why were these not simply defined as uint8_t in LAS specification? Or is "unsigned char" short for uint8_t? Because there is also an ascii char reserved for numbers (e.g. "1" corresponds to char = 49)
    output_pointcloud.write(reinterpret_cast<const char *>(&version_major), sizeof(version_major));

    unsigned char version_minor = 2;    // this is slightly weird: why were these not simply defined as uint8_t in LAS specification? Or is "unsigned char" short for uint8_t? Because there is also an ascii char reserved for numbers (e.g. "1" corresponds to char = 49)
    output_pointcloud.write(reinterpret_cast<const char *>(&version_minor), sizeof(version_minor));

    char system_identifier[33];
    sprintf(system_identifier,"ALS simulator");
    output_pointcloud.write(system_identifier, sizeof(system_identifier) - 1); // remove terminating NULL in char

    char generating_software[33] = "TROLL v.3.1.6+ forest simulator";
    output_pointcloud.write(generating_software, sizeof(generating_software) - 1); // remove terminating NULL in char

    // get current day and year, cf. https://www.tutorialspoint.com/cplusplus/cpp_date_time.htm
    time_t now = time(0);
    tm *ltm = localtime(&now);

    uint16_t file_creation_day_of_year = ltm->tm_yday;
    uint16_t file_creation_year = 1900 + ltm->tm_year;

    output_pointcloud.write(reinterpret_cast<const char *>(&file_creation_day_of_year), sizeof(file_creation_day_of_year));
    output_pointcloud.write(reinterpret_cast<const char *>(&file_creation_year), sizeof(file_creation_year));

    uint16_t header_size = 227;
    output_pointcloud.write(reinterpret_cast<const char *>(&header_size), sizeof(header_size));

    uint32_t offset_to_point_data = 227;
    output_pointcloud.write(reinterpret_cast<const char *>(&offset_to_point_data), sizeof(offset_to_point_data));

    uint32_t number_of_variable_length_records = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&number_of_variable_length_records), sizeof(number_of_variable_length_records));

    unsigned char point_data_format_ID = 0; // no GPS time needed
    output_pointcloud.write(reinterpret_cast<const char *>(&point_data_format_ID), sizeof(point_data_format_ID));

    // each record in format 0 has 20 bytes (12 for coordinates, 2 for intensity, 6 for other information)
    uint16_t point_data_record_length = 20;
    output_pointcloud.write(reinterpret_cast<const char *>(&point_data_record_length), sizeof(point_data_record_length));

    // calculate the number of returns per return number
    int nb_perreturn[5] = {0};
    int nb_beams = int(beams.size()/2);
    int nb_returns = 0;

    for(int beam = 0; beam < nb_beams; beam++){
        int nb_returns_beam = beams[1 + beam * 2];
        for(int rtrn = 0; rtrn < nb_returns_beam; rtrn++){
            nb_perreturn[rtrn]++;
            nb_returns++;
        }
    }

    cout << "Sampled " << nb_beams << " pulses, creating " << nb_returns << " returns." << endl;

    uint32_t number_of_point_records = nb_returns;
    output_pointcloud.write(reinterpret_cast<const char *>(&number_of_point_records), sizeof(number_of_point_records));

    for(int i = 0; i < 5; i++){
        uint32_t number_of_points_by_return = nb_perreturn[i];
        output_pointcloud.write(reinterpret_cast<const char *>(&number_of_points_by_return), sizeof(number_of_points_by_return));
    }

    // there is no fixed-width type for floating-point numbers, so we assume that the 8 byte required by the las specification are fulfilled
    for(int i = 0; i < 3; i++){
        double xyz_scale_factor = 0.01;
        output_pointcloud.write(reinterpret_cast<const char *>(&xyz_scale_factor), 8); // hardcoded 8 bytes
    }

    for(int i = 0; i < 3; i++){
        double xyz_offset = 0.0;
        output_pointcloud.write(reinterpret_cast<const char *>(&xyz_offset), 8); // hardcoded 8 bytes
    }

    double max_x = ctx.grid.cols;
    output_pointcloud.write(reinterpret_cast<const char *>(&max_x), 8); // hardcoded 8 bytes

    double min_x = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&min_x), 8); // hardcoded 8 bytes

    double max_y = ctx.grid.rows;
    output_pointcloud.write(reinterpret_cast<const char *>(&max_y), 8); // hardcoded 8 bytes

    double min_y = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&min_y), 8); // hardcoded 8 bytes

    double max_z = ctx.grid.HEIGHT;
    output_pointcloud.write(reinterpret_cast<const char *>(&max_z), 8); // hardcoded 8 bytes

    double min_z = 0;
    output_pointcloud.write(reinterpret_cast<const char *>(&min_z), 8); // hardcoded 8 bytes
}

 void ExportPointcloud(float mean_beam, float sd_beam, float klaser, float ctx.pc.transmittance_laser, fstream& output_pointcloud){
    cout << "Point cloud generation." << endl;

    vector<int> beams;
    vector<float> beams_returns;

    // three options
    GenerateVoxelreturnsALS(beams, beams_returns, mean_beam, sd_beam, klaser, ctx.pc.transmittance_laser);

    ExportPointcloudHeader(beams, output_pointcloud);

    // now write point cloud records to file
    int nb_beams = int(beams.size()/2);
    int index_return = 0;

    for(int beam = 0; beam < nb_beams; beam++){
        int site_beam = beams[0 + beam * 2];
        int nb_returns_beam = beams[1 + beam * 2];

        int row = site_beam/ctx.grid.cols;
        int col = site_beam%ctx.grid.cols;

        // long format + 0.01 scaling (1cm precision)
        int32_t x_hit = round((float(col) + gsl_rng_uniform(ctx.rng.gslrand)) * 100.0);
        int32_t y_hit = round((float(row) + gsl_rng_uniform(ctx.rng.gslrand)) * 100.0);

        for(int rtrn = 0; rtrn < nb_returns_beam; rtrn++){
            int32_t z_hit = round(beams_returns[index_return] * 100.0);
            index_return++;

            output_pointcloud.write(reinterpret_cast<const char *>(&x_hit), sizeof(x_hit));
            output_pointcloud.write(reinterpret_cast<const char *>(&y_hit), sizeof(y_hit));
            output_pointcloud.write(reinterpret_cast<const char *>(&z_hit), sizeof(z_hit));

            uint16_t intensity = 0;
            output_pointcloud.write(reinterpret_cast<const char *>(&intensity), sizeof(intensity));

            // the LAS-format makes use of sub-byte level information for return number / number of returns / scan direction / edge of flight line
            // all are together in one single byte, stored in, respectively, 3 bits, 3 bits, 1 bit, 1 bit
            // we need to reconstruct this here
            // cf. comment in LAS defintion: "[A note on Bit Fields – The LAS storage format is “Little Endian.” This means that multi-byte data fields are stored in memory from least significant byte at the low address to most significant byte at the high address. Bit fields are always interpreted as bit 0 set to 1 equals 1, bit 1 set to 1 equals 2, bit 2 set to 1 equals 4 and so forth.]"; here bit 0 seems to mean the bit with the exponent 0, NOT the location/position 0 from left to right
            // essentially (tested through trial and error), the system is:
            // bit location 0 (exponent 7, "bit 7") = edge of flight line
            // bit location 1 (exponent 6, "bit 6") = scan direction flag
            // bit location 2-4 (exponents 5-3) = number of returns
            // bit location 5-7 (exponents 2-0) = return number

            // we only have 5 cases for both return number and number of returns (both max 5), which are:
            // 1: 001
            // 2: 010
            // 3: 011
            // 4: 100
            // 5: 101

            vector<int> information_bitlevel;
            information_bitlevel.reserve(8);

            // we need to start with bits 7 and 6
            information_bitlevel.push_back(0);  // edge of flight line (no such thing here)
            information_bitlevel.push_back(0);  // scan direction (unimportant here)

            // the number of returns
            if(nb_returns_beam <= 3){
                information_bitlevel.push_back(0);
                if(nb_returns_beam == 1){
                    information_bitlevel.push_back(0);
                    information_bitlevel.push_back(1);
                } else {
                    information_bitlevel.push_back(1);
                    if(nb_returns_beam == 2){
                        information_bitlevel.push_back(0);
                    } else {
                        information_bitlevel.push_back(1);
                    }
                }
            } else {
                information_bitlevel.push_back(1);
                if(nb_returns_beam == 4){ // i.e. 4th return
                    information_bitlevel.push_back(0);
                    information_bitlevel.push_back(0);
                } else {
                    information_bitlevel.push_back(0);
                    information_bitlevel.push_back(1);
                }
            }

            // and return number
            int rtrn_actual = rtrn + 1;
            if(rtrn_actual <= 3){
                information_bitlevel.push_back(0);
                if(rtrn_actual == 1){
                    information_bitlevel.push_back(0);
                    information_bitlevel.push_back(1);
                } else {
                    information_bitlevel.push_back(1);
                    if(rtrn_actual == 2){
                        information_bitlevel.push_back(0);
                    } else {
                        information_bitlevel.push_back(1);
                    }
                }
            } else {
                information_bitlevel.push_back(1);
                if(rtrn_actual == 4){
                    information_bitlevel.push_back(0);
                    information_bitlevel.push_back(0);
                } else {
                    information_bitlevel.push_back(0);
                    information_bitlevel.push_back(1);
                }
            }

            // now put combined binary information into a single decimal number
            // e.g. first return out of one return total should be: 00 001 001 (which is 9 in decimal notation)
            // e.g. fourth return out of five returns total should be: 00 101 100 (which is 44 in decimal notation)
            int8_t return_info = 0;
            for(int i = 0; i < 8; i++){
                return_info += information_bitlevel[i] * pow(2,7-i);
            }
            output_pointcloud.write(reinterpret_cast<const char *>(&return_info), sizeof(return_info));

            unsigned char classification = 0;
            output_pointcloud.write(reinterpret_cast<const char *>(&classification), sizeof(classification));

            char scan_angle_rank = 0;
            output_pointcloud.write(reinterpret_cast<const char *>(&scan_angle_rank), sizeof(scan_angle_rank));

            unsigned char user_data = 0;
            output_pointcloud.write(reinterpret_cast<const char *>(&user_data), sizeof(user_data));

            uint16_t point_source_id = 1;
            output_pointcloud.write(reinterpret_cast<const char *>(&point_source_id), sizeof(point_source_id));

        }
    }
} */

#ifdef TRACK_INDIVIDUALS
// ##############################################
//  Global function: tree level tracking of key variables
// ##############################################
void TrackingData_andOutput()
{
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        // we start the accounting the year after the trees have been born
        if (T[site].t_age > 0)
        {
            int timeofyear_born = T[site].t_timeofyear_born;

            if (timeofyear_born >= 0)
            {
                // these are the yearly figures, reset to zero every year
                T[site].t_GPP_sumyear += T[site].t_GPP;
                T[site].t_GPPsquared_sumyear += T[site].t_GPP * T[site].t_GPP;
                T[site].t_NPP_sumyear += T[site].t_NPP;
                T[site].t_NPPsquared_sumyear += T[site].t_NPP * T[site].t_NPP;
                T[site].t_Rday_sumyear += T[site].t_Rday;
                T[site].t_Rnight_sumyear += T[site].t_Rnight;
                T[site].t_Rstem_sumyear += T[site].t_Rstem;
                T[site].t_carbon_storage_avgyear += T[site].t_carbon_storage * ctx.time.timestep;
                // these are the whole lifetime cumulated figures, never reset to zero and put out at tree death
                T[site].t_GPPcum += T[site].t_GPP;
                T[site].t_NPPcum += T[site].t_NPP;
                T[site].t_GPPsquared_cum += T[site].t_GPP * T[site].t_GPP;
                T[site].t_NPPsquared_cum += T[site].t_NPP * T[site].t_NPP;

                float agb = 1000.0 * T[site].CalcAGB();

                // write to output every year and then reset to zero
                int timeofyear = GetTimeofyear();
                if (timeofyear == timeofyear_born)
                {
                    // write to output
                    if (T[site].t_dbh >= 0.1)
                    {
                        output_track[1] << T[site].t_site << "\t" << timeofyear_born << "\t" << ctx.time.iter << "\t" << T[site].t_age << "\t" << T[site].t_seedsproduced_sumyear << "\t" << T[site].t_seedsproduced << "\t" << T[site].t_time_carbonstarvation_year << "\t" << T[site].t_time_carbonstarvation << "\t" << T[site].t_dbh << "\t" << T[site].t_dbh - T[site].t_dbh_tracked << "\t" << T[site].t_height << "\t" << T[site].t_height - T[site].t_height_tracked << "\t" << T[site].t_CR << "\t" << T[site].t_CR - T[site].t_CR_tracked << "\t" << agb << "\t" << agb - T[site].t_agb_tracked << "\t" << T[site].t_GPP_sumyear << "\t" << T[site].t_GPPsquared_sumyear << "\t" << T[site].t_NPP_sumyear << "\t" << T[site].t_NPPsquared_sumyear << "\t" << T[site].t_Rday_sumyear << "\t" << T[site].t_Rnight_sumyear << "\t" << T[site].t_Rstem_sumyear << "\t" << T[site].t_LAIabove_effavgyear << "\t" << T[site].t_carbon_storage_avgyear << endl;
                    }
                    // reset
                    T[site].t_time_carbonstarvation_year = 0;
                    T[site].t_seedsproduced_sumyear = 0;
                    T[site].t_GPP_sumyear = 0.0;
                    T[site].t_GPPsquared_sumyear = 0.0;
                    T[site].t_NPP_sumyear = 0.0;
                    T[site].t_NPPsquared_sumyear = 0.0;
                    T[site].t_Rday_sumyear = 0.0;
                    T[site].t_Rnight_sumyear = 0.0;
                    T[site].t_Rstem_sumyear = 0.0;
                    T[site].t_LAIabove_effavgyear = 0.0;
                    T[site].t_carbon_storage_avgyear = 0.0;
                    T[site].t_dbh_tracked = T[site].t_dbh;
                    T[site].t_height_tracked = T[site].t_height;
                    T[site].t_CR_tracked = T[site].t_CR;
                    T[site].t_agb_tracked = agb;
                }
            }
        }
    }
}
#endif

#ifdef Output_ABC
// ##############################################
//  Global ABC function: yearly statistics
// ##############################################
//! - Statistics averaged over one year for ten years and then used for the point estimates in the OutputABC(...) routine
//! - !!!: TODO needs to be checked for different timesteps than 1 month
void UpdateMovingAveragesABC()
{

    int nbtrees_abc = 0;
    float inbhectares_abc = 10000.0 / float(sites_abc);
    float GPP_abc = 0.0, litter_abc = 0.0;

    for (int row = row_start; row < row_end; row++)
    {
        for (int col = col_start; col < col_end; col++)
        {
            int site = col + row * ctx.grid.cols;
            GPP_abc += T[site].t_GPP * 1.0e-6;
            litter_abc += T[site].t_litter * 1.0e-6;
            if (T[site].t_dbh >= 0.1)
                nbtrees_abc++;
        }
    }

    GPP_abc *= inbhectares_abc;
    litter_abc *= inbhectares_abc;

    float mortality_abc;
    float treefall_abc;
    if (nbtrees_abc > 0)
    {
        mortality_abc = float(nbdead_n10_abc) / float(nbtrees_abc);
        treefall_abc = float(nbTreefall10_abc) / float(nbtrees_abc);
    }
    else
    {
        mortality_abc = 0.0;
        treefall_abc = 0.0;
    }
    if (ctx.time.iter < 120)
    {
        GPP_MA[ctx.time.iter] = GPP_abc;
        Litterfall_MA[ctx.time.iter] = litter_abc;
        Mortality_MA[ctx.time.iter] = mortality_abc;
        Treefall_MA[ctx.time.iter] = treefall_abc;
    }
    else
    {
        // move values down
        for (int i = 0; i < 119; i++)
        {
            GPP_MA[i] = GPP_MA[i + 1];
            Litterfall_MA[i] = Litterfall_MA[i + 1];
            Mortality_MA[i] = Mortality_MA[i + 1];
            Treefall_MA[i] = Treefall_MA[i + 1];
        }
        // new value at the top
        GPP_MA[119] = GPP_abc;
        Litterfall_MA[119] = litter_abc;
        Mortality_MA[119] = mortality_abc;
        Treefall_MA[119] = treefall_abc;
    }
}

// ##############################################
//  Global ABC function: update DBH function for ABC routines
// ##############################################
void UpdateDBHtrackingABC()
{
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            if (T[s].t_age > 0)
                T[s].t_dbh_previous = T[s].t_dbh;
        }
    }
}

// ##############################################
//  Global function: calculating the TROLL transmittance field from simulated LiDAR
// ##############################################
//! - First draws from a distribution to calculate the sampling density, i.e. the number of beams per voxel column
//! - Then loop over voxel column from top to bottom and calculate the number of hits given the density of the respective voxel
//! - If beams are all extinct, NAs are returned (-1), if beams hit ground, all produce guaranteed returns
//! - The parameters used is the k assumed for the laser, which is only based on leaf geometry and should thus be taken equal to ctx.params.klight
//! - The difference to ctx.params.kpar is accounted for by parameterizing the transmittance of leaves, which, in the NIR spectrum, is much larger than for visible light (0.4 vs. 0.1)
//! - Results are saved in transmittance_simulatedALS_sampling for the number of beams, transmittance_simulatedALS for the transmittance
void UpdateTransmittanceCHM_ABC(float mean_beam, float sd_beam, float klaser, float ctx.pc.transmittance_laser)
{
    // loop over the ctx.field.LAI3D field
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int site = c + r * ctx.grid.cols;
            int nbbeams = int(mean_beam + gsl_ran_gaussian(ctx.rng.gslrand, sd_beam)); // always rounding up
            nbbeams = max(nbbeams, 1);

            // loop over the field from maximum height to 0 and iteratively update voxels from top to bottom, following the beam. An alternative version, also allowing for ground returns, can be activated to extending the loop to h >= -1. In this case, when a beam is not extinguished before it reaches the ground (h >= 0), then it is counted as a ground return
            for (int h = ctx.grid.HEIGHT - 1; h >= 0; h--)
            {
                // for(int h = ctx.grid.HEIGHT - 1; h >= -1; h--){
                int hits;
                float transmittance;
                transmittance_simulatedALS_sampling[h][site] = nbbeams;
                if (nbbeams == 0)
                {
                    // If there is no beam reaching the voxel, transmittance and hits are set to NA (i.e. -1.0)
                    hits = 0;
                    transmittance = -1.0;
                }
                else
                {
                    if (h >= 0)
                    {
                        // returns due to vegetation
                        float LAI_above = ctx.field.LAI3D[h + 1][site + ctx.grid.SBORD];
                        float LAI_current = ctx.field.LAI3D[h][site + ctx.grid.SBORD];

                        float prob_hit;
                        if (LAI_above == 100.0 & LAI_current == 100.0)
                        {
                            // stem returns
                            hits = nbbeams;
                            nbbeams = 0;
                            transmittance = 0.0;
                        }
                        else
                        {
                            // leaf/twig returns
                            float LAD = LAI_current - LAI_above;
                            if (LAD > 0.0)
                                prob_hit = 1.0 - exp(-klaser * LAD);
                            else
                                prob_hit = 0.0;
                            hits = gsl_ran_binomial(ctx.rng.gslrand, prob_hit, nbbeams);
                            // transmittance = exp(-klaser * LAD);
                            if (hits == 0)
                            {
                                transmittance = 1.0;
                            }
                            else
                            {
                                transmittance = float(nbbeams - hits) / float(nbbeams);
                                nbbeams -= hits;
                                // nbbeams += int(0.1*float(hits));                            // 10% of intercepted beams are not getting extinct
                                //  now simulate transmittance of beam through the leaves
                                int hits_notextinct = gsl_ran_binomial(ctx.rng.gslrand, ctx.pc.transmittance_laser, hits);
                                nbbeams += hits_notextinct;
                            }
                        }
                    }
                    else
                    {
                        // ground returns
                        hits = nbbeams;
                        // nbbeams = 0;
                        transmittance = -1.0;
                    }
                }
                transmittance_simulatedALS[h][site] = transmittance;
            }
        }
    }
    // Also output the "direct"/"actual" transmittance of each voxel, i.e. simply based on inversing the Beer Lambert law and estimating transmittance from the leaf area density
    // This can be used to compare actual vs. lidar-derived transmittance estimates
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
    {
        for (int r = row_start; r < row_end; r++)
        {
            for (int c = col_start; c < col_end; c++)
            {
                int s = c + r * ctx.grid.cols;
                float LAD = 0.0;
                if (h < ctx.grid.HEIGHT)
                    LAD = ctx.field.LAI3D[h][s + ctx.grid.SBORD] - ctx.field.LAI3D[h + 1][s + ctx.grid.SBORD];
                transmittance_direct[h][s] = exp(-ctx.params.klight * LAD);
            }
        }
    }

    // Now calculate CHM fields, both with and without ALS simulation
    // Set previous CHM fields
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            chm_field_previous[s] = chm_field_current[s];
            chm_field_previous_ALS[s] = chm_field_current_ALS[s];
            chm_field_current[s] = 0;
            chm_field_current_ALS[s] = 0;
        }
    }

#ifdef CHM_SPIKEFREE
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            if (T[s].t_age > 0)
            {
#ifdef CROWN_UMBRELLA
                float height = T[s].t_height;
                float CR = T[s].t_CR;
                float CD = T[s].t_CD;
                float fraction_filled_target = 1.0; // to remove spikes, we assume a fully filled crown for all trees
                int shell_fromtop = 0;              // toplayer
                float noinput = 0.0;

                LoopLayerUpdateCrownStatistic_template(r, c, height, CR, CD, fraction_filled_target, shell_fromtop, GetRadiusSlope, noinput, chm_field_current, KeepFloatAsIs, UpdateCHM);
#else
                int crown_top = int(T[s].t_height);

                float crown_area = PI * T[s].t_CR * T[s].t_CR; // floor of crown_area to bound area accumulation
                int crown_intarea = int(crown_area);           // floor of crown_area to bound area accumulation
                crown_intarea = max(crown_intarea, 1);         // minimum area of crown (1)
                crown_intarea = min(crown_intarea, 1963);      // maximum area of crown (radius 25), int(3.14*25*25)

                int row_crowncenter = s / ctx.grid.cols;
                int col_crowncenter = s % ctx.grid.cols;

                for (int i = 0; i < crown_intarea; i++)
                {
                    int site_relative = ctx.lookup.LookUp_Crown_site[i];
                    int row = row_crowncenter + site_relative / 51 - 25;
                    int col = col_crowncenter + site_relative % 51 - 25;
                    if (row >= 0 && row < ctx.grid.rows && col >= 0 && col < ctx.grid.cols)
                    {
                        int site = col + row * ctx.grid.cols;
                        if (chm_field_current[site] < crown_top)
                            chm_field_current[site] = crown_top;
                    }
                }
#endif
            }
        }
    }
#else

    // calculate current CHM fields
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            int height_canopy = 0;
            for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            {
                if (ctx.field.LAI3D[h][s + ctx.grid.SBORD] > 0.0)
                    height_canopy = max(h, height_canopy);
            }
            chm_field_current[s] = height_canopy;
        }
    }
#endif

    // calculate CHM based on simulated lidar
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            int height_canopy_ALS = 0;
            for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
            {
                if (transmittance_simulatedALS[h][s] >= 0.0 && transmittance_simulatedALS[h][s] < 1.0)
                    height_canopy_ALS = max(h, height_canopy_ALS);
            }
            chm_field_current_ALS[s] = height_canopy_ALS;
        }
    }

    // compute CHM changes, both for full simulation and simulated ALS
    for (int s = 0; s < ctx.grid.sites; s++)
    {
        chm_field_changes[s] = chm_field_previous[s] - chm_field_current[s];
        chm_field_changes_ALS[s] = chm_field_previous_ALS[s] - chm_field_current_ALS[s];
    }
}

// ##############################################
//  Global ABC function: output general ABC statistics
// ##############################################
void OutputABC()
{
    cout << " ABC: Conservation of Traits " << endl;
    OutputABCConservationTraits(output[11]);
    cout << " ABC: Ground data " << endl;
    OutputABC_ground(output[12]);
    cout << " ABC: CHM simulation " << endl;
    OutputABC_CHM(output[13], output[14], output[19]);
    cout << " ABC: Transmittance simulation " << endl;
    OutputABC_transmittance(output[15], output[16]);
    cout << " ABC: Species outputs " << endl;
    OutputABC_species(output[23], output[24], output[25], output[26], output[27]);
}

// ##############################################
//  Global ABC function: write headers for ABC outputs
// ##############################################
void OutputABCWriteHeaders(fstream &output_traitconservation, fstream &output_field, fstream &output_CHM, fstream &output_CHM_ALS, fstream &output_transmittance, fstream &output_transmittance_ALS, fstream &output_LAIfield, fstream &output_LAIfield_ALS, fstream &output_chmpotential, fstream &output_species, fstream &output_species10, fstream &output_traits, fstream &output_traits10, fstream &output_biomass)
{
    // Write headers for trait conservation metrics
    output_traitconservation << "Iter\t" << "mean_ran\t" << "sd_ran\t" << "Height_output\t" << "Heightsd_output\t" << "CR_output\t" << "CRsd_output\t" << "CD_output\t" << "CDsd_output\t" << "P_output\t" << "Psd_output\t" << "N_output\t" << "Nsd_output\t" << "LMA_output\t" << "LMAsd_output\t" << "wsg_output\t" << "wsgsd_output\t" << "dmax_output\t" << "dmaxsd_output\t" << "Height_input\t" << "Heightsd_input\t" << "CR_input\t" << "CRsd_input\t" << "CD_input\t" << "CDsd_input\t" << "P_input\t" << "Psd_input\t" << "N_input\t" << "Nsd_input\t" << "LMA_input\t" << "LMAsd_input\t" << "wsg_input\t" << "wsgsd_input\t" << "dmax_input\t" << "dmaxsd_input" << endl;
    // Write headers for ground metrics
    output_field << "Iter\t" << "Nbsites\t" << "NBspecies_realized10\t" << "NBspecies\t" << "NBspecies10\t" << "Shannon\t" << "Shannon10\t" << "Simpson\t" << "Simpson10\t" << "Abu\t" << "Abu10\t" << "Abu30\t" << "Abu10_retained\t" << "Abu30_retained\t" << "AGB\t" << "AGB10\t" << "BA\t" << "BA10\t" << "LoreyH\t" << "LoreyH10\t" << "YearlyGPP\t" << "YearlyLitterfall\t" << "YearlyMortality\t" << "YearlyTreefall\t" << "mean_LMA\t" << "mean_Nmass\t" << "mean_Pmass\t" << "mean_wsg\t" << "mean_CR\t" << "mean_LMA10\t" << "mean_Nmass10\t" << "mean_Pmass10\t" << "mean_wsg10\t" << "mean_CR10\t" << "DBH_mean\t" << "DBH_sd";

    for (int d = 0; d < 50; d++)
        output_field << "\tDBH_hist";
    output_field << "\tDBHgrowth_mean" << "\tDBHgrowth_sd";
    for (int d = 0; d < 50; d++)
        output_field << "\tDBHgrowth_hist";
    output_field << "\tDBHgrowth_yearly_mean" << "\tDBHgrowth_yearly_sd";
    for (int d = 0; d < 50; d++)
        output_field << "\tDBHgrowth_yearly_hist";
    for (int d = -50; d < 0; d++)
        output_field << "\tDBHshrinkage_hist_werr";
    for (int d = 0; d < 50; d++)
        output_field << "\tDBHgrowth_hist_werr";
    for (int d = -50; d < 0; d++)
        output_field << "\tDBHshrinkage_yearly_hist_werr";
    for (int d = 0; d < 50; d++)
        output_field << "\tDBHgrowth_yearly_hist_werr";
    output_field << endl;

    // Write second row, giving additional information on binning etc.
    output_field << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    for (int d = 0; d < 50; d++)
        output_field << "\t" << float(d) / 20.0;
    output_field << "\t" << "\t";
    for (int d = 0; d < 50; d++)
        output_field << "\t" << float(d) / 250.0;
    output_field << "\t" << "\t";
    for (int d = 0; d < 50; d++)
        output_field << "\t" << float(d) / 1000.0;
    for (int d = -50; d < 0; d++)
        output_field << "\t" << float(d) / 250.0;
    for (int d = 0; d < 50; d++)
        output_field << "\t" << float(d) / 250.0;
    for (int d = -50; d < 0; d++)
        output_field << "\t" << float(d) / 1000.0;
    for (int d = 0; d < 50; d++)
        output_field << "\t" << float(d) / 1000.0;
    output_field << endl;

    // Write headers for chm metrics
    output_CHM << "Iter\t" << "Sites_abc\t" << "CHM_mean\t" << "CHM_sd\t";
    for (int h = 0; h < 70; h++)
        output_CHM << "CHM_hist\t";
    output_CHM << "CHMchange_mean\t" << "CHMchange_sd\t";
    for (int h = 0; h < 140; h++)
        output_CHM << "CHMchange_hist\t";
    output_CHM << endl;

    // Second line, information on bin size etc.
    output_CHM << "\t" << "\t" << "\t" << "\t";
    for (int h = 0; h < 70; h++)
        output_CHM << h << "\t";
    output_CHM << "\t" << "\t";
    for (int h = 0; h < 140; h++)
        output_CHM << h << "\t";
    output_CHM << endl;

    // Same for ALS derived metrics
    output_CHM_ALS << "Iter\t" << "Sites_abc\t" << "CHM_mean\t" << "CHM_sd\t";
    for (int h = 0; h < 70; h++)
        output_CHM_ALS << "CHM_hist\t";
    output_CHM_ALS << "CHMchange_mean\t" << "CHMchange_sd\t";
    for (int h = 0; h < 140; h++)
        output_CHM_ALS << "CHMchange_hist\t";
    output_CHM_ALS << endl;

    // Second line, information on bin size etc.
    output_CHM_ALS << "\t" << "\t" << "\t" << "\t";
    for (int h = 0; h < 70; h++)
        output_CHM_ALS << h << "\t";
    output_CHM_ALS << "\t" << "\t";
    for (int h = 0; h < 140; h++)
        output_CHM_ALS << h << "\t";
    output_CHM_ALS << endl;

    // Write headers for transmittance metrics
    output_transmittance << "Iter\t" << "Sites_abc\t";
    output_transmittance << "maxheight\t" << "voxcanopy_total\t" << "voxmaxheight_total\t" << "voxcanopy_filled_total\t" << "voxcanopy_greater2\t" << "voxmaxheight_greater2\t" << "voxcanopy_filled_greater2\t" << "voxcrown_total\t" << "voxcrown_greater2\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "voxcrown\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "transm_nogaps_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "transm_incanopy_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "transm_full_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "voxcanopy_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "voxcanopy_na_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "voxcanopy_empty_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << "voxcanopy_filled_z\t";

    for (int d = 0; d < 70; d++)
        output_transmittance << "transm_nogaps_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << "transm_full_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << "voxna_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << "voxempty_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << "voxfilled_d\t";

    output_transmittance << "nb_aggregates\t";
    for (int bin = 0; bin < 80; bin++)
        output_transmittance << "LAIhist\t";
    output_transmittance << endl;
    output_transmittance << "\t" << "\t";
    output_transmittance << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t" << "\t";
    for (int i = 0; i < 8; i++)
        for (int h = 0; h < 70; h++)
            output_transmittance << h << "\t";
    for (int i = 0; i < 5; i++)
        for (int d = 0; d < 70; d++)
            output_transmittance << d << "\t";
    output_transmittance << "\t";
    for (int bin = 0; bin < 80; bin++)
        output_transmittance << bin << "\t";
    output_transmittance << endl;
    output_transmittance_ALS << "Iter\t" << "Sites_abc\t";

    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << "transm_nogaps_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << "transm_incanopy_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << "transm_full_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << "voxcanopy_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << "voxcanopy_na_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << "voxcanopy_empty_z\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << "voxcanopy_filled_z\t";

    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << "transm_nogaps_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << "transm_full_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << "voxna_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << "voxempty_d\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << "voxfilled_d\t";

    output_transmittance_ALS << "nb_aggregates\t";
    for (int bin = 0; bin < 80; bin++)
        output_transmittance_ALS << "LAIhist\t";
    output_transmittance_ALS << endl;
    output_transmittance_ALS << "\t" << "\t";
    for (int i = 0; i < 7; i++)
        for (int h = 0; h < 70; h++)
            output_transmittance_ALS << h << "\t";
    for (int i = 0; i < 5; i++)
        for (int d = 0; d < 70; d++)
            output_transmittance_ALS << d << "\t";
    output_transmittance_ALS << "\t";
    for (int bin = 0; bin < 80; bin++)
        output_transmittance_ALS << bin << "\t";
    output_transmittance_ALS << endl;

    // Now the species headers
    output_species << "Iter";
    output_species10 << "Iter";
    //    output_traits << "Iter\tTrait";
    //    output_traits10 << "Iter\tTrait";
    output_biomass << "Iter";

    for (int spp = 1; spp < ctx.grid.nbspp + 1; spp++)
    {
        output_species << "\t" << S[spp].s_name;
        output_species10 << "\t" << S[spp].s_name;
        //        output_traits << "\t" << S[spp].s_name;
        //        output_traits10 << "\t" << S[spp].s_name;
        output_biomass << "\t" << S[spp].s_name;
    }

    output_species << endl;
    output_species10 << endl;
    //    output_traits << endl;
    //    output_traits10 << endl;
    output_biomass << endl;
}

// ##############################################
//  Global ABC function: assesses the conservation of traits between input and output in TROLL
// ##############################################
//! - for example, it may be that a particular species is more successful than expected from its relative frequency at the parameterized site, and thus its abundance will exceed the real abundance. This could then lead to important shifts in the overall community trait patterns between the trait pattern that is provided to TROLL and the one that is found in the simulated community
//! - There is a potentially important ecological question behind it, namely: to what extent do the trait distributions that we observe for seeds/seedlings/saplings (i.e. input from seedrain) differ from those of the mature community
void OutputABCConservationTraits(fstream &output_traitconservation)
{

    // Trait input/output variation
    int nb_trees_counted = 0;

    // Summary statistics for initial, random configuration (i.e. randomly drawn variance around trait means)
    float mu_random = 0.0, moment2_random = 0.0;

    float mu_height_varinput = 0.0, mu_CR_varinput = 0.0, mu_CD_varinput = 0.0, mu_P_varinput = 0.0, mu_N_varinput = 0.0, mu_LMA_varinput = 0.0, mu_wsg_varinput = 0.0, mu_dbhmax_varinput = 0.0;
    float mu_height_varoutput = 0.0, mu_CR_varoutput = 0.0, mu_CD_varoutput = 0.0, mu_P_varoutput = 0.0, mu_N_varoutput = 0.0, mu_LMA_varoutput = 0.0, mu_wsg_varoutput = 0.0, mu_dbhmax_varoutput = 0.0;

    float moment2_height_varinput = 0.0, moment2_CR_varinput = 0.0, moment2_CD_varinput = 0.0, moment2_P_varinput = 0.0, moment2_N_varinput = 0.0, moment2_LMA_varinput = 0.0, moment2_wsg_varinput = 0.0, moment2_dbhmax_varinput = 0.0;
    float moment2_height_varoutput = 0.0, moment2_CR_varoutput = 0.0, moment2_CD_varoutput = 0.0, moment2_P_varoutput = 0.0, moment2_N_varoutput = 0.0, moment2_LMA_varoutput = 0.0, moment2_wsg_varoutput = 0.0, moment2_dbhmax_varoutput = 0.0;

    // Means and 2nd moment for calculation of sd later on
    for (int s = 0; s < ctx.grid.sites; s++)
    {
        if (T[s].t_age > 0 && T[s].t_dbh >= 0.1)
        {
            int dev_rand = int(gsl_rng_uniform_int(gslrng, 10000)); // modified FF, v.3.1.5

            nb_trees_counted++;
            mu_random += dev_rand;

            mu_height_varinput += log(ctx.intra.d_intraspecific_height[dev_rand]);
            mu_CR_varinput += log(ctx.intra.d_intraspecific_CR[dev_rand]);
            mu_CD_varinput += log(ctx.intra.d_intraspecific_CD[dev_rand]);
            mu_P_varinput += log(ctx.intra.d_intraspecific_P[dev_rand]);
            mu_N_varinput += log(ctx.intra.d_intraspecific_N[dev_rand]);
            mu_LMA_varinput += log(ctx.intra.d_intraspecific_LMA[dev_rand]);
            mu_dbhmax_varinput += log(ctx.intra.d_intraspecific_dbhmax[dev_rand]);
            mu_wsg_varinput += log(ctx.intra.d_intraspecific_wsg[dev_rand]);

            mu_height_varoutput += log(T[s].t_mult_height);
            mu_CR_varoutput += log(T[s].t_mult_CR);
            mu_CD_varoutput += log(T[s].t_mult_CD);
            mu_P_varoutput += log(T[s].t_mult_P);
            mu_N_varoutput += log(T[s].t_mult_N);
            mu_LMA_varoutput += log(T[s].t_mult_LMA);
            mu_dbhmax_varoutput += log(T[s].t_mult_dbhmax);
            mu_wsg_varoutput += log(T[s].t_dev_wsg);

            moment2_random += dev_rand;
            moment2_height_varinput += log(ctx.intra.d_intraspecific_height[dev_rand]) * log(ctx.intra.d_intraspecific_height[dev_rand]);
            moment2_CR_varinput += log(ctx.intra.d_intraspecific_CR[dev_rand]) * log(ctx.intra.d_intraspecific_CR[dev_rand]);
            moment2_CD_varinput += log(ctx.intra.d_intraspecific_CD[dev_rand]) * log(ctx.intra.d_intraspecific_CD[dev_rand]);
            moment2_P_varinput += log(ctx.intra.d_intraspecific_P[dev_rand]) * log(ctx.intra.d_intraspecific_P[dev_rand]);
            moment2_N_varinput += log(ctx.intra.d_intraspecific_N[dev_rand]) * log(ctx.intra.d_intraspecific_N[dev_rand]);
            moment2_LMA_varinput += log(ctx.intra.d_intraspecific_LMA[dev_rand]) * log(ctx.intra.d_intraspecific_LMA[dev_rand]);
            moment2_dbhmax_varinput += log(ctx.intra.d_intraspecific_dbhmax[dev_rand]) * log(ctx.intra.d_intraspecific_dbhmax[dev_rand]);
            moment2_wsg_varinput += log(ctx.intra.d_intraspecific_wsg[dev_rand]) * log(ctx.intra.d_intraspecific_wsg[dev_rand]);

            moment2_height_varoutput += log(T[s].t_mult_height) * log(T[s].t_mult_height);
            moment2_CR_varoutput += log(T[s].t_mult_CR) * log(T[s].t_mult_CR);
            moment2_CD_varoutput += log(T[s].t_mult_CD) * log(T[s].t_mult_CD);
            moment2_P_varoutput += log(T[s].t_mult_P) * log(T[s].t_mult_P);
            moment2_N_varoutput += log(T[s].t_mult_N) * log(T[s].t_mult_N);
            moment2_LMA_varoutput += log(T[s].t_mult_LMA) * log(T[s].t_mult_LMA);
            moment2_dbhmax_varoutput += log(T[s].t_mult_dbhmax) * log(T[s].t_mult_dbhmax);
            moment2_wsg_varoutput += log(T[s].t_dev_wsg) * log(T[s].t_dev_wsg);
        }
    }

    // Calculation of standard deviation
    float sd_random;

    float sd_height_varinput = 0.0, sd_CR_varinput = 0.0, sd_CD_varinput = 0.0, sd_P_varinput = 0.0, sd_N_varinput = 0.0, sd_LMA_varinput = 0.0, sd_wsg_varinput = 0.0, sd_dbhmax_varinput = 0.0;
    float sd_height_varoutput = 0.0, sd_CR_varoutput = 0.0, sd_CD_varoutput = 0.0, sd_P_varoutput = 0.0, sd_N_varoutput = 0.0, sd_LMA_varoutput = 0.0, sd_wsg_varoutput = 0.0, sd_dbhmax_varoutput = 0.0;

    if (nb_trees_counted > 0)
    {
        mu_random *= 1.0 / float(nb_trees_counted);

        mu_height_varinput *= 1.0 / float(nb_trees_counted);
        mu_CR_varinput *= 1.0 / float(nb_trees_counted);
        mu_CD_varinput *= 1.0 / float(nb_trees_counted);
        mu_P_varinput *= 1.0 / float(nb_trees_counted);
        mu_N_varinput *= 1.0 / float(nb_trees_counted);
        mu_LMA_varinput *= 1.0 / float(nb_trees_counted);
        mu_wsg_varinput *= 1.0 / float(nb_trees_counted);
        mu_dbhmax_varinput *= 1.0 / float(nb_trees_counted);

        mu_height_varoutput *= 1.0 / float(nb_trees_counted);
        mu_CR_varoutput *= 1.0 / float(nb_trees_counted);
        mu_CD_varoutput *= 1.0 / float(nb_trees_counted);
        mu_P_varoutput *= 1.0 / float(nb_trees_counted);
        mu_N_varoutput *= 1.0 / float(nb_trees_counted);
        mu_LMA_varoutput *= 1.0 / float(nb_trees_counted);
        mu_dbhmax_varoutput *= 1.0 / float(nb_trees_counted);
        mu_wsg_varoutput *= 1.0 / float(nb_trees_counted);

        sd_random = sqrt(moment2_random / float(nb_trees_counted) - mu_random * mu_random);

        sd_height_varinput = sqrt(moment2_height_varinput / float(nb_trees_counted) - mu_height_varinput * mu_height_varinput);
        sd_CR_varinput = sqrt(moment2_CR_varinput / float(nb_trees_counted) - mu_CR_varinput * mu_CR_varinput);
        sd_CD_varinput = sqrt(moment2_CD_varinput / float(nb_trees_counted) - mu_CD_varinput * mu_CD_varinput);
        sd_P_varinput = sqrt(moment2_P_varinput / float(nb_trees_counted) - mu_P_varinput * mu_P_varinput);
        sd_N_varinput = sqrt(moment2_N_varinput / float(nb_trees_counted) - mu_N_varinput * mu_N_varinput);
        sd_LMA_varinput = sqrt(moment2_LMA_varinput / float(nb_trees_counted) - mu_LMA_varinput * mu_LMA_varinput);
        sd_wsg_varinput = sqrt(moment2_wsg_varinput / float(nb_trees_counted) - mu_wsg_varinput * mu_wsg_varinput);
        sd_dbhmax_varinput = sqrt(moment2_dbhmax_varinput / float(nb_trees_counted) - mu_dbhmax_varinput * mu_dbhmax_varinput);

        sd_height_varoutput = sqrt(moment2_height_varoutput / float(nb_trees_counted) - mu_height_varoutput * mu_height_varoutput);
        sd_CR_varoutput = sqrt(moment2_CR_varoutput / float(nb_trees_counted) - mu_CR_varoutput * mu_CR_varoutput);
        sd_CD_varoutput = sqrt(moment2_CD_varoutput / float(nb_trees_counted) - mu_CD_varoutput * mu_CD_varoutput);
        sd_P_varoutput = sqrt(moment2_P_varoutput / float(nb_trees_counted) - mu_P_varoutput * mu_P_varoutput);
        sd_N_varoutput = sqrt(moment2_N_varoutput / float(nb_trees_counted) - mu_N_varoutput * mu_N_varoutput);
        sd_LMA_varoutput = sqrt(moment2_LMA_varoutput / float(nb_trees_counted) - mu_LMA_varoutput * mu_LMA_varoutput);
        sd_wsg_varoutput = sqrt(moment2_wsg_varoutput / float(nb_trees_counted) - mu_wsg_varoutput * mu_wsg_varoutput);
        sd_dbhmax_varoutput = sqrt(moment2_dbhmax_varoutput / float(nb_trees_counted) - mu_dbhmax_varoutput * mu_dbhmax_varoutput);
    }
    else
    {
        sd_random = 0.0;
    }
    // Write to output file
    output_traitconservation << ctx.time.iter << "\t" << mu_random << "\t" << sd_random << "\t" << mu_height_varoutput << "\t" << sd_height_varoutput << "\t" << mu_CR_varoutput << "\t" << sd_CR_varoutput << "\t" << mu_CD_varoutput << "\t" << sd_CD_varoutput << "\t" << mu_P_varoutput << "\t" << sd_P_varoutput << "\t" << mu_N_varoutput << "\t" << sd_N_varoutput << "\t" << mu_LMA_varoutput << "\t" << sd_LMA_varoutput << "\t" << mu_wsg_varoutput << "\t" << sd_wsg_varoutput << "\t" << mu_dbhmax_varoutput << "\t" << sd_dbhmax_varoutput << "\t" << mu_height_varinput << "\t" << sd_height_varinput << "\t" << mu_CR_varinput << "\t" << sd_CR_varinput << "\t" << mu_CD_varinput << "\t" << sd_CD_varinput << "\t" << mu_P_varinput << "\t" << sd_P_varinput << "\t" << mu_N_varinput << "\t" << sd_N_varinput << "\t" << mu_LMA_varinput << "\t" << sd_LMA_varinput << "\t" << mu_wsg_varinput << "\t" << sd_wsg_varinput << "\t" << mu_dbhmax_varinput << "\t" << sd_dbhmax_varinput << "\t" << endl;
}

// ##############################################
//  Global ABC function: returns ABC ground outputs
// ##############################################
//! - field measured summary statistics: total number of species, abundances > 10cm, >30cm (provided for convenience, information already included in distribution below), AGB
void OutputABC_ground(fstream &output_field)
{

    // Self-explanatory
    int NBspecies_realized10 = 0;
    int NBspecies = 0, NBspecies10 = 0;
    float Shannon = 0.0, Shannon10 = 0.0, Simpson = 0.0, Simpson10 = 0.0;
    float Abu = 0, Abu10 = 0, Abu30 = 0, Abu10_prev = 0, Abu30_prev = 0, Abu10_retained = 0, Abu30_retained = 0;
    float AGB = 0.0, AGB10 = 0.0, ba = 0.0, ba10 = 0.0, LoreyH = 0.0, LoreyH10 = 0.0;

    float mean_LMA = 0.0, mean_Nmass = 0.0, mean_Pmass = 0.0, mean_wsg = 0.0, mean_CR = 0.0;
    float mean_LMA10 = 0.0, mean_Nmass10 = 0.0, mean_Pmass10 = 0.0, mean_wsg10 = 0.0, mean_CR10 = 0.0;

    // This is just a check whether the initialized species are preserved in the model
    for (int spp = 1; spp <= ctx.grid.nbspp; spp++)
        if (S[spp].s_dbhmax_realized > 0.1)
            NBspecies_realized10++;
    // and calculate the number of species
    for (int spp = 0; spp < ctx.grid.nbspp + 1; spp++)
    {
        abundances_species[spp] = 0;
        abundances_species10[spp] = 0;
    }
    // Compute summary statistics, but only over the respective area
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            if (T[s].t_age > 0)
            {
                Abu++;
                float dbh_tree = T[s].t_dbh;
                float dbh_track = T[s].t_dbh_previous;
                float height_tree = T[s].t_height;
                float ba_tree = dbh_tree * dbh_tree * 0.25 * PI;
                float AGBtree;
                AGBtree = 0.001 * T[s].CalcAGB(); // convert from kg to tons
                AGB += AGBtree;
                LoreyH += ba_tree * height_tree;
                ba += ba_tree;
                mean_LMA += T[s].t_LMA;
                mean_Nmass += T[s].t_Nmass;
                mean_Pmass += T[s].t_Pmass;
                mean_wsg += T[s].t_wsg;
                mean_CR += T[s].t_CR;

                int sp_lab = T[s].t_sp_lab;
                abundances_species[sp_lab]++;

                if (dbh_tree >= 0.1)
                {
                    abundances_species10[sp_lab]++;
                    Abu10++;
                    LoreyH10 += ba_tree * height_tree;
                    ba10 += ba_tree;
                    AGB10 += AGBtree;

                    mean_LMA10 += T[s].t_LMA;
                    mean_Nmass10 += T[s].t_Nmass;
                    mean_Pmass10 += T[s].t_Pmass;
                    mean_wsg10 += T[s].t_wsg;
                    mean_CR10 += T[s].t_CR;

                    if (dbh_tree >= 0.3)
                        Abu30++;
                }
                if (dbh_track >= 0.1)
                {
                    Abu10_prev++;
                    if (dbh_track >= 0.3)
                        Abu30_prev++;
                }
            }
        }
    }

    // Divide means by abundances
    float inv_abu, inv_abu10;
    if (Abu > 0)
        inv_abu = 1.0 / Abu;
    else
        inv_abu = 0.0;
    if (Abu10 > 0)
        inv_abu10 = 1.0 / Abu10;
    else
        inv_abu10 = 0.0;

    mean_LMA *= inv_abu;
    mean_Nmass *= inv_abu;
    mean_Pmass *= inv_abu;
    mean_wsg *= inv_abu;
    mean_CR *= inv_abu;

    mean_LMA10 *= inv_abu10;
    mean_Nmass10 *= inv_abu10;
    mean_Pmass10 *= inv_abu10;
    mean_wsg10 *= inv_abu10;
    mean_CR10 *= inv_abu10;

    // Denominator of Lorey's height
    if (ba > 0.0)
        LoreyH *= 1.0 / ba;
    if (ba10 > 0.0)
        LoreyH10 *= 1.0 / ba10;

    // Abundance growth
    Abu10_retained = Abu10 - Abu10_prev;
    Abu30_retained = Abu30 - Abu30_prev;

    // Now calculate the first three orders of diversity
    for (int spp = 1; spp < ctx.grid.nbspp + 1; spp++)
    {
        int abu_spp = abundances_species[spp];
        int abu_spp10 = abundances_species10[spp];

        if (abu_spp > 0)
        {
            float prop_spp = float(abu_spp) / float(Abu);

            NBspecies++;
            Shannon -= prop_spp * log(prop_spp);
            Simpson += prop_spp * prop_spp;
        }

        if (abu_spp10 > 0)
        {
            float prop_spp10 = float(abu_spp10) / float(Abu10);

            NBspecies10++;
            Shannon10 -= prop_spp10 * log(prop_spp10);
            Simpson10 += prop_spp10 * prop_spp10;
        }
    }

    // Standardize output metrics
    float isites_abc = 10000.0 / float(sites_abc);
    AGB *= isites_abc;
    AGB10 *= isites_abc;
    Abu10 *= isites_abc;
    Abu30 *= isites_abc;
    Abu10_retained *= isites_abc;
    Abu30_retained *= isites_abc;
    ba *= isites_abc;
    ba10 *= isites_abc;

    // Now add the process metrics from moving averages
    float YearlyGPP = 0.0, YearlyLitterfall = 0.0, YearlyMortality = 0.0, YearlyTreefall = 0.0;
    float nb_years = 120.0 / float(ctx.time.iterperyear);
    float inb_years = 1.0 / nb_years;

    for (int i = 0; i < 120; i++)
    {
        YearlyGPP += GPP_MA[i];
        YearlyLitterfall += Litterfall_MA[i];
        YearlyMortality += Mortality_MA[i];
        YearlyTreefall += Treefall_MA[i];
    }

    YearlyGPP *= inb_years;
    YearlyLitterfall *= inb_years;
    YearlyMortality *= inb_years;
    YearlyTreefall *= inb_years;

    // Create DBH histogram, mean and sd
    int dbh_abc[50] = {0};
    float mean_dbh = 0.0;
    float sd_dbh = 0.0;
    float icount_dbh = 0.0;

    if (Abu10 > 1)
    {
        icount_dbh = 1.0 / float(Abu10);

        for (int r = row_start; r < row_end; r++)
        {
            for (int c = col_start; c < col_end; c++)
            {
                int s = c + r * ctx.grid.cols;
                float dbh_tree = T[s].t_dbh;
                if (T[s].t_age > 0 && dbh_tree >= 0.1)
                {
                    mean_dbh += dbh_tree;
                    int dbh_bin = int(dbh_tree * 20.0);
                    if (dbh_bin > 49)
                        dbh_bin = 49;
                    dbh_abc[dbh_bin]++;
                }
            }
        }
        mean_dbh *= icount_dbh;
        for (int r = row_start; r < row_end; r++)
        {
            for (int c = col_start; c < col_end; c++)
            {
                int s = c + r * ctx.grid.cols;
                float dbh_tree = T[s].t_dbh;
                if (T[s].t_age > 0 && dbh_tree >= 0.1)
                {
                    sd_dbh += (dbh_tree - mean_dbh) * (dbh_tree - mean_dbh);
                }
            }
        }
        float icount_dbh_sd = 0.0;
        icount_dbh_sd = 1.0 / float(Abu10 - 1);
        sd_dbh = sqrt(sd_dbh * icount_dbh_sd);
    }

    // Create DBH growth histogram, mean and sd / CHM analogous period and yearly values
    int dbhgrowth_abc[50] = {0};
    int dbhgrowth_abc_yearly[50] = {0};
    float mean_dbhgrowth = 0.0;
    float mean_dbhgrowth_yearly = 0.0;
    float sd_dbhgrowth = 0.0;
    float sd_dbhgrowth_yearly = 0.0;
    float icount_dbhgrowth = 0;

    // The dbhgrowth witherror variables also simulate errors in measurement, taken from Chave et al. 2004 (all given in cm). See also Réjou-Méchain 2017
    //  this can be used to compare distributions with negative diameter growth
    //  this is, however, empirical, and does not account for actual negative diameter growth, i.e. trees shrinking slightly under different environmental conditions etc.
    int dbhgrowth_witherror_abc[50] = {0};
    int dbhgrowth_witherror_abc_yearly[50] = {0};
    int dbhshrinkage_witherror_abc[50] = {0};
    int dbhshrinkage_witherror_abc_yearly[50] = {0};
    int count_dbhgrowth_witherror = 0;
    float icount_dbhgrowth_witherror = 0;

    if (Abu10_prev > 1)
    {
        icount_dbhgrowth = 1.0 / float(Abu10_prev);

        for (int r = row_start; r < row_end; r++)
        {
            for (int c = col_start; c < col_end; c++)
            {
                int s = c + r * ctx.grid.cols;
                float dbh_previous = T[s].t_dbh_previous;
                // Errors taken from Chave et al. 2004 (all given in cm). See also Réjou-Méchain 2017
                //  slight modification by assuming that measurement errors cannot go beyond a third of the diameter, e.g. for a stem of 10cm not be above or below 3.3 cm, and for a stem of 100cm not be below or above 33cm), also prevents negative diameters
                float sd1 = (0.0062 * dbh_previous * 100.0 + 0.0904) * 0.01;
                float sd2 = 0.0464;

                float prob = gsl_rng_uniform(ctx.rng.gslrand);
                float error;
                if (prob < 0.95)
                    error = gsl_ran_gaussian(ctx.rng.gslrand, sd1);
                else
                    error = gsl_ran_gaussian(ctx.rng.gslrand, sd2);

                float dbh_previous_witherror = fmaxf(dbh_previous + error, 0.66 * dbh_previous);
                dbh_previous_witherror = fminf(dbh_previous_witherror, 1.33 * dbh_previous);

                if (dbh_previous >= 0.1)
                {
                    float dbh = T[s].t_dbh;
                    float dbh_growth = dbh - dbh_previous;
                    float dbh_growth_yearly = dbh_growth * 12.0 / float(chmchange_iter);

                    mean_dbhgrowth += dbh_growth;
                    mean_dbhgrowth_yearly += dbh_growth_yearly;
                    int dbhgrowth_bin = int(dbh_growth * 250.0);                // with a limit at 50 bins, this implies maximum growth of 20cm (in census intervals of 10 years)
                    int dbhgrowth_bin_yearly = int(dbh_growth_yearly * 1000.0); // with a limit at 50 bins, this implies that there is no further increase above 0.05m, i.e. maximum yearly growth is 5cm

                    if (dbhgrowth_bin >= 50)
                        dbhgrowth_bin = 50 - 1;
                    if (dbhgrowth_bin_yearly >= 50)
                        dbhgrowth_bin_yearly = 50 - 1;
                    dbhgrowth_abc[dbhgrowth_bin]++;
                    dbhgrowth_abc_yearly[dbhgrowth_bin_yearly]++;
                }

                if (dbh_previous_witherror >= 0.1)
                {
                    count_dbhgrowth_witherror++;
                    float dbh = T[s].t_dbh;
                    // Errors taken from Chave et al. 2004 (all given in cm). See also Réjou-Méchain 2017
                    //  slight modification by assuming that measurement errors cannot go beyond a third of the diameter, e.g. for a stem of 10cm not be above or below 3.3 cm, and for a stem of 100cm not be below or above 33cm), also prevents negative diameters
                    float sd1 = (0.0062 * dbh_previous * 100.0 + 0.0904) * 0.01;
                    float sd2 = 0.0464;

                    float prob = gsl_rng_uniform(ctx.rng.gslrand);
                    float error;
                    if (prob < 0.95)
                        error = gsl_ran_gaussian(ctx.rng.gslrand, sd1);
                    else
                        error = gsl_ran_gaussian(ctx.rng.gslrand, sd2);

                    float dbh_witherror = fmaxf(dbh + error, 0.66 * dbh);
                    dbh_witherror = fminf(dbh_witherror, 1.33 * dbh);

                    float dbh_growth_witherror = dbh_witherror - dbh_previous_witherror;
                    float dbh_growth_yearly_witherror = dbh_growth_witherror * 12.0 / float(chmchange_iter);

                    if (dbh_growth_witherror >= 0.0)
                    {
                        int dbhgrowth_witherror_bin = int(dbh_growth_witherror * 250.0);                // with a limit at 50 bins, this implies maximum growth of 50cm (in census intervals of 10 years)
                        int dbhgrowth_witherror_bin_yearly = int(dbh_growth_yearly_witherror * 1000.0); // with a limit at 50 bins, this implies that there is no further increase above 0.05m, i.e. maximum yearly growth is 5cm

                        if (dbhgrowth_witherror_bin >= 50)
                            dbhgrowth_witherror_bin = 50 - 1;
                        if (dbhgrowth_witherror_bin_yearly >= 50)
                            dbhgrowth_witherror_bin_yearly = 50 - 1;
                        dbhgrowth_witherror_abc[dbhgrowth_witherror_bin]++;
                        dbhgrowth_witherror_abc_yearly[dbhgrowth_witherror_bin_yearly]++;
                    }
                    else
                    {
                        dbh_growth_witherror *= -1.0;
                        dbh_growth_yearly_witherror *= -1.0;

                        int dbhgrowth_witherror_bin = int(dbh_growth_witherror * 250.0);                // with a limit at 50 bins, this implies maximum growth of 50cm (in census intervals of 10 years)
                        int dbhgrowth_witherror_bin_yearly = int(dbh_growth_yearly_witherror * 1000.0); // with a limit at 50 bins, this implies that there is no further increase above 0.05m, i.e. maximum yearly growth is 5cm

                        if (dbhgrowth_witherror_bin >= 50)
                            dbhgrowth_witherror_bin = 50 - 1;
                        if (dbhgrowth_witherror_bin_yearly >= 50)
                            dbhgrowth_witherror_bin_yearly = 50 - 1;
                        dbhshrinkage_witherror_abc[dbhgrowth_witherror_bin]++;
                        dbhshrinkage_witherror_abc_yearly[dbhgrowth_witherror_bin_yearly]++;
                    }
                }
            }
        }

        if (count_dbhgrowth_witherror > 0)
            icount_dbhgrowth_witherror = 1.0 / float(count_dbhgrowth_witherror);
        else
            icount_dbhgrowth_witherror = 0.0;

        mean_dbhgrowth *= icount_dbhgrowth;
        mean_dbhgrowth_yearly *= icount_dbhgrowth;

        // Now standard deviation of dbh growth
        for (int r = row_start; r < row_end; r++)
        {
            for (int c = col_start; c < col_end; c++)
            {
                int s = c + r * ctx.grid.cols;

                float dbh_previous = T[s].t_dbh_previous;

                if (dbh_previous >= 0.1)
                {
                    float dbh_growth = T[s].t_dbh - dbh_previous;
                    float dbh_growth_yearly = dbh_growth * 12.0 / float(chmchange_iter);

                    sd_dbhgrowth += (dbh_growth - mean_dbhgrowth) * (dbh_growth - mean_dbhgrowth);
                    sd_dbhgrowth_yearly += (dbh_growth_yearly - mean_dbhgrowth_yearly) * (dbh_growth - mean_dbhgrowth_yearly);
                }
            }
        }

        float icount_dbhgrowth_sd = 0.0;
        icount_dbhgrowth_sd = 1.0 / float(Abu10_prev - 1);

        sd_dbhgrowth = sqrt(sd_dbhgrowth * icount_dbhgrowth_sd);
        sd_dbhgrowth_yearly = sqrt(sd_dbhgrowth_yearly * icount_dbhgrowth_sd);
    }

    // Ripley's K(r), transformed to L estimator through L(r) = sqrt(K/Pi) - r
    //    float itrees_ripley = 0.0;
    //    int area_ripley = ctx.grid.cols * ctx.grid.rows;
    //    int sum_ripley[25] = {0};
    //
    //    if(Abu10 > 0){
    //        int trees_ripley = Abu10;
    //        itrees_ripley = 1.0/trees_ripley;
    //
    //        for(int r=row_start;r<row_end;r++){
    //            for(int c=col_start;c<col_end;c++){
    //                int site = c + r*ctx.grid.cols;
    //                if(T[site].t_age > 0 && T[site].t_dbh > 0.1){
    //
    //                    for(int r = 0; r < 25; r++){
    //                        int t = r + 1;
    //                        int t_squared = t * t;
    //                        for(int site_compare = 0; site_compare < ctx.grid.sites; site_compare++){
    //                            if(T[site_compare].t_age > 0 && T[site_compare].t_dbh > 0.1 && site != site_compare){
    //                                int row = site/ctx.grid.cols;
    //                                int col = site%ctx.grid.cols;
    //                                int row_compare = site_compare/ctx.grid.cols;
    //                                int col_compare = site_compare%ctx.grid.cols;
    //                                int dist_squared = (row - row_compare) * (row - row_compare) + (col - col_compare) * (col - col_compare);
    //                                if(dist_squared < t_squared){
    //                                    sum_ripley[r]++;
    //                                }
    //                            }
    //                        }
    //                    }
    //                }
    //            }
    //        }
    //    }

    // Write to file
    output_field << ctx.time.iter << "\t" << sites_abc << "\t" << NBspecies_realized10 << "\t" << NBspecies << "\t" << NBspecies10 << "\t" << Shannon << "\t" << Shannon10 << "\t" << Simpson << "\t" << Simpson10 << "\t" << Abu << "\t" << Abu10 << "\t" << Abu30 << "\t" << Abu10_retained << "\t" << Abu30_retained << "\t" << AGB << "\t" << AGB10 << "\t" << ba << "\t" << ba10 << "\t" << LoreyH << "\t" << LoreyH10 << "\t" << YearlyGPP << "\t" << YearlyLitterfall << "\t" << YearlyMortality << "\t" << YearlyTreefall << "\t" << mean_LMA << "\t" << mean_Nmass << "\t" << mean_Pmass << "\t" << mean_wsg << "\t" << mean_CR << "\t" << mean_LMA10 << "\t" << mean_Nmass10 << "\t" << mean_Pmass10 << "\t" << mean_wsg10 << "\t" << mean_CR10 << "\t" << mean_dbh << "\t" << sd_dbh;

    for (int d = 0; d < 50; d++)
    {
        float density_DBH = float(dbh_abc[d]) * icount_dbh;
        output_field << "\t" << density_DBH;
    }

    // Write to file
    output_field << "\t" << mean_dbhgrowth << "\t" << sd_dbhgrowth;

    for (int d = 0; d < 50; d++)
    {
        float density_dbhgrowth = float(dbhgrowth_abc[d]) * icount_dbhgrowth;
        output_field << "\t" << density_dbhgrowth;
    }

    output_field << "\t" << mean_dbhgrowth_yearly << "\t" << sd_dbhgrowth_yearly;

    for (int d = 0; d < 50; d++)
    {
        float density_dbhgrowth_yearly = float(dbhgrowth_abc_yearly[d]) * icount_dbhgrowth;
        output_field << "\t" << density_dbhgrowth_yearly;
    }

    for (int d = 50 - 1; d >= 0; d--)
    {
        float density_dbhshrinkage_witherror = float(dbhshrinkage_witherror_abc[d]) * icount_dbhgrowth_witherror;
        output_field << "\t" << density_dbhshrinkage_witherror;
    }

    for (int d = 0; d < 50; d++)
    {
        float density_dbhgrowth_witherror = float(dbhgrowth_witherror_abc[d]) * icount_dbhgrowth_witherror;
        output_field << "\t" << density_dbhgrowth_witherror;
    }

    for (int d = 50 - 1; d >= 0; d--)
    {
        float density_dbhshrinkage_yearly_witherror = float(dbhshrinkage_witherror_abc_yearly[d]) * icount_dbhgrowth_witherror;
        output_field << "\t" << density_dbhshrinkage_yearly_witherror;
    }

    for (int d = 0; d < 50; d++)
    {
        float density_dbhgrowth_yearly_witherror = float(dbhgrowth_witherror_abc_yearly[d]) * icount_dbhgrowth_witherror;
        output_field << "\t" << density_dbhgrowth_yearly_witherror;
    }

    //    for(int r = 0; r < 25; r++){
    //        int t = r + 1;
    //        float K_ripley = float(area_ripley) * float(sum_ripley[r]) * itrees_ripley * itrees_ripley;
    //        output_field << sqrt(K_ripley / PI) - t << "\t";
    //    }

    output_field << endl;
}

// ##############################################
//  Global ABC function: returns ABC outputs for species
// ##############################################
void OutputABC_species(fstream &output_species, fstream &output_species10, fstream &output_traits, fstream &output_traits10, fstream &output_biomass)
{

    // Empty the vectors
    for (int spp = 0; spp < ctx.grid.nbspp + 1; spp++)
    {
        abundances_species[spp] = 0;
        abundances_species10[spp] = 0;
        biomass_species[spp] = 0.0;
        for (int trait = 0; trait < 10; trait++)
        {
            traits_species[spp][trait] = 0.0;
            traits_species10[spp][trait] = 0.0;
        }
    }

    // Now calculate
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            if (T[s].t_age > 0)
            {
                // First abundance, then mean and standard deviation of the variation in the 5 traits (leaf level traits, wood density, crown radius), mean and standard deviation are calculated in one pass from sum of traits and sum of squares of traits
                int sp_lab = T[s].t_sp_lab;
                abundances_species[sp_lab]++;

                float agb_tree = 0.001 * T[s].CalcAGB(); // convert from kg to tons
                biomass_species[sp_lab] += agb_tree;

                float LMA = log(T[s].t_mult_LMA);
                float LMA2 = LMA * LMA;
                float Nmass = log(T[s].t_mult_N);
                float Nmass2 = Nmass * Nmass;
                float Pmass = log(T[s].t_mult_P);
                float Pmass2 = Pmass * Pmass;
                float wsg = T[s].t_dev_wsg;
                float wsg2 = wsg * wsg;
                float crown = log(T[s].t_mult_CR);
                float crown2 = crown * crown;

                traits_species[sp_lab][0] += LMA;
                traits_species[sp_lab][1] += LMA2;
                traits_species[sp_lab][2] += Nmass;
                traits_species[sp_lab][3] += Nmass2;
                traits_species[sp_lab][4] += Pmass;
                traits_species[sp_lab][5] += Pmass2;
                traits_species[sp_lab][6] += wsg;
                traits_species[sp_lab][7] += wsg2;
                traits_species[sp_lab][8] += crown;
                traits_species[sp_lab][9] += crown2;

                if (T[s].t_dbh >= 0.1)
                {
                    abundances_species10[sp_lab]++;

                    traits_species10[sp_lab][0] += LMA;
                    traits_species10[sp_lab][1] += LMA2;
                    traits_species10[sp_lab][2] += Nmass;
                    traits_species10[sp_lab][3] += Nmass2;
                    traits_species10[sp_lab][4] += Pmass;
                    traits_species10[sp_lab][5] += Pmass2;
                    traits_species10[sp_lab][6] += wsg;
                    traits_species10[sp_lab][7] += wsg2;
                    traits_species10[sp_lab][8] += crown;
                    traits_species10[sp_lab][9] += crown2;
                }
            }
        }
    }

    // Create a vector of traits
    vector<string> trait_names;

    trait_names.push_back("LMA");
    trait_names.push_back("LMA_sd");
    trait_names.push_back("Nmass");
    trait_names.push_back("Nmass_sd");
    trait_names.push_back("Pmass");
    trait_names.push_back("Pmass_sd");
    trait_names.push_back("wsg");
    trait_names.push_back("wsg_sd");
    trait_names.push_back("crown");
    trait_names.push_back("crown_sd");

    // Now calculate the means and sds properly
    for (int spp = 1; spp < ctx.grid.nbspp + 1; spp++)
    {
        int abu = abundances_species[spp];
        int abu10 = abundances_species10[spp];
        float inv_abu, inv_abu10;
        if (abu > 0)
            inv_abu = 1.0 / float(abu);
        else
            inv_abu = 0.0;
        if (abu10 > 0)
            inv_abu10 = 1.0 / float(abu10);
        else
            inv_abu10 = 0.0;

        // First divide both quantities by the number of individuals
        for (int trait = 0; trait < 10; trait++)
        {
            traits_species[spp][trait] *= inv_abu;
            traits_species10[spp][trait] *= inv_abu10;
        }

        // Then subtract the squared means from the standard deviations
        traits_species[spp][1] -= traits_species[spp][0] * traits_species[spp][0];
        traits_species[spp][3] -= traits_species[spp][2] * traits_species[spp][2];
        traits_species[spp][5] -= traits_species[spp][4] * traits_species[spp][4];
        traits_species[spp][7] -= traits_species[spp][6] * traits_species[spp][6];
        traits_species[spp][9] -= traits_species[spp][8] * traits_species[spp][8];

        traits_species10[spp][1] -= traits_species10[spp][0] * traits_species10[spp][0];
        traits_species10[spp][3] -= traits_species10[spp][2] * traits_species10[spp][2];
        traits_species10[spp][5] -= traits_species10[spp][4] * traits_species10[spp][4];
        traits_species10[spp][7] -= traits_species10[spp][6] * traits_species10[spp][6];
        traits_species10[spp][9] -= traits_species10[spp][8] * traits_species10[spp][8];
    }

    // Now create outputs
    output_species << ctx.time.iter;
    for (int spp = 1; spp < ctx.grid.nbspp + 1; spp++)
        output_species << "\t" << abundances_species[spp];
    output_species << endl;

    output_species10 << ctx.time.iter;
    for (int spp = 1; spp < ctx.grid.nbspp + 1; spp++)
        output_species10 << "\t" << abundances_species10[spp];
    output_species10 << endl;

    output_biomass << ctx.time.iter;
    for (int spp = 1; spp < ctx.grid.nbspp + 1; spp++)
        output_biomass << "\t" << biomass_species[spp];
    output_biomass << endl;

    //    for(int trait = 0; trait < 10; trait++){
    //
    //        output_traits << ctx.time.iter << "\t" << trait_names[trait];
    //        for(int spp = 1; spp < ctx.grid.nbspp+1; spp++) output_traits  << "\t" << traits_species[spp][trait];
    //        output_traits << endl;
    //
    //        output_traits10 << ctx.time.iter << "\t" << trait_names[trait];
    //        for(int spp = 1; spp < ctx.grid.nbspp+1; spp++) output_traits10  << "\t" << traits_species10[spp][trait];
    //        output_traits10 << endl;
    //    }
}

// ##############################################
//  Global function: returns ABC outputs for canopy height model (CHM)
// ##############################################
void OutputABC_CHM(fstream &output_CHM, fstream &output_CHM_ALS, fstream &output_chmpotential)
{
    // Compute CHM changes
    for (int s = 0; s < ctx.grid.sites; s++)
    {
        chm_field_changes[s] = chm_field_previous[s] - chm_field_current[s];
        chm_field_changes_ALS[s] = chm_field_previous_ALS[s] - chm_field_current_ALS[s];
    }

    // Compute CHM distribution
    int chm_abc[70] = {0}, chm_abc_ALS[70] = {0};
    float mean_chm = 0.0, mean_chm_ALS = 0.0;
    float sd_chm = 0.0, sd_chm_ALS = 0.0;

    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            int height_chm = chm_field_current[s];
            mean_chm += float(height_chm);
            chm_abc[height_chm]++;
            int height_chm_ALS = chm_field_current_ALS[s];
            mean_chm_ALS += float(height_chm_ALS);
            chm_abc_ALS[height_chm_ALS]++;
        }
    }

    mean_chm *= isites_abc;
    mean_chm_ALS *= isites_abc;

    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            int height_chm = chm_field_current[s];
            sd_chm += (height_chm - mean_chm) * (height_chm - mean_chm);
            int height_chm_ALS = chm_field_current_ALS[s];
            sd_chm_ALS += (height_chm_ALS - mean_chm_ALS) * (height_chm_ALS - mean_chm_ALS);
        }
    }

    sd_chm = sqrt(sd_chm * isites_abc);
    sd_chm_ALS = sqrt(sd_chm_ALS * isites_abc);

    // Compute CHM change distribution
    int chmchange_abc[140] = {0}, chmchange_abc_ALS[140] = {0};
    float mean_chmchange = 0.0, mean_chmchange_ALS = 0.0;
    float sd_chmchange = 0.0, sd_chmchange_ALS = 0.0;

    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            int height_chmchange = chm_field_changes[s];
            mean_chmchange += float(height_chmchange);
            chmchange_abc[height_chmchange + 70]++;
            int height_chmchange_ALS = chm_field_changes_ALS[s];
            mean_chmchange_ALS += float(height_chmchange_ALS);
            chmchange_abc_ALS[height_chmchange + 70]++;
        }
    }

    mean_chmchange *= isites_abc;
    mean_chmchange_ALS *= isites_abc;

    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int s = c + r * ctx.grid.cols;
            int height_chmchange = chm_field_changes[s];
            sd_chmchange += (height_chmchange - mean_chmchange) * (height_chmchange - mean_chmchange);
            int height_chmchange_ALS = chm_field_changes_ALS[s];
            sd_chmchange_ALS += (height_chmchange_ALS - mean_chmchange_ALS) * (height_chmchange_ALS - mean_chmchange_ALS);
        }
    }

    sd_chmchange = sqrt(sd_chmchange * isites_abc);
    sd_chmchange_ALS = sqrt(sd_chmchange * isites_abc);

    //    //! create variogram for both chmchange fields (final and change)
    //
    //    float chm_variogram[50] = {0.0}, chm_variogram_ALS[50] = {0.0};
    //    int chm_variogram_nb[50] = {0};
    //
    //    float chmchange_variogram[50] = {0.0}, chmchange_variogram_ALS[50] = {0.0};
    //    int chmchange_variogram_nb[50] = {0};
    //
    //    for(int r=row_start;r<row_end;r++){
    //        for(int c=col_start;c<col_end;c++){
    //            int height_canopy = chm_field_current[c + r * ctx.grid.cols];
    //            int height_canopychange = chm_field_changes[c + r * ctx.grid.cols];
    //            int height_canopy_ALS = chm_field_current_ALS[c + r * ctx.grid.cols];
    //            int height_canopychange_ALS = chm_field_changes_ALS[c + r * ctx.grid.cols];
    //
    //            for(int r_compare=row_start;r_compare<row_end;r_compare++){
    //                for(int c_compare=col_start;c_compare<col_end;c_compare++){
    //                    //! only compare if you have not already compared
    //                    if(r_compare > r && c_compare > c){
    //                        int height_canopy_compare = chm_field_current[c_compare + r_compare * ctx.grid.cols];
    //                        int height_canopychange_compare = chm_field_changes[c_compare + r_compare * ctx.grid.cols];
    //                        int height_canopy_compare_ALS = chm_field_current_ALS[c_compare + r_compare * ctx.grid.cols];
    //                        int height_canopychange_compare_ALS = chm_field_changes_ALS[c_compare + r_compare * ctx.grid.cols];
    //
    //                        int dist = int(sqrt(float((r_compare - r) * (r_compare - r) + (c_compare - c) * (c_compare - c))));
    //
    //                        //! only compute semivariance for distances < 50
    //                        if(dist < 50){
    //                            chm_variogram[dist] += float((height_canopy_compare - height_canopy) * (height_canopy_compare - height_canopy));
    //                            chm_variogram_ALS[dist] += float((height_canopy_compare_ALS - height_canopy_ALS) * (height_canopy_compare_ALS - height_canopy_ALS));
    //                            chm_variogram_nb[dist]++;
    //
    //                            chmchange_variogram[dist] += float((height_canopychange_compare - height_canopychange) * (height_canopychange_compare - height_canopychange));
    //                            chmchange_variogram_ALS[dist] += float((height_canopychange_compare_ALS - height_canopychange_ALS) * (height_canopychange_compare_ALS - height_canopychange_ALS));
    //                            chmchange_variogram_nb[dist]++;
    //                        }
    //
    //                    }
    //                }
    //            }
    //        }
    //    }

    // Write to file
    output_CHM << ctx.time.iter << "\t" << sites_abc << "\t" << mean_chm << "\t" << sd_chm << "\t";

    for (int h = 0; h < 70; h++)
    {
        float density_CHM = float(chm_abc[h]) * isites_abc;
        output_CHM << density_CHM << "\t";
    }

    output_CHM << mean_chmchange << "\t" << sd_chmchange << "\t";

    for (int h = 0; h < 140; h++)
    {
        float density_chmchange = float(chmchange_abc[h]) * isites_abc;
        output_CHM << density_chmchange << "\t";
    }

    output_CHM << endl;
    output_CHM_ALS << ctx.time.iter << "\t" << sites_abc << "\t" << mean_chm_ALS << "\t" << sd_chm_ALS << "\t";

    for (int h = 0; h < 70; h++)
    {
        float density_CHM = chm_abc_ALS[h] * isites_abc;
        output_CHM_ALS << density_CHM << "\t";
    }
    output_CHM_ALS << mean_chmchange_ALS << "\t" << sd_chmchange_ALS << "\t";

    for (int h = 0; h < 140; h++)
    {
        float density_chmchange = chmchange_abc_ALS[h] * isites_abc;
        output_CHM_ALS << density_chmchange << "\t";
    }
    output_CHM_ALS << endl;
    // In the future: compute canopy extension (i.e. lateral growth, vertical growth etc.) to test model of Kellner & Asner 2014
}

// ##############################################
//  Global ABC function: ABC outputs
// ##############################################
//! - this function creates various transmittance and lidar metrics, from the LAI field and the simulated lidar
//! - the output variables are: avg transmittance per ctx.diag.layer within all voxels of that ctx.diag.layer (i.e. transmittance_full), only within voxels of that ctx.diag.layer that are also inside the canopy (i.e. transmittance_incanopy, voxels below the CHM, if there is a gap with an average canopy height of 3m for example, then voxelsat 10m won't be counted for the transmittance avg at 10m), and transmittance only in filled voxes (i.e. only voxels with leaves, transmittance_nogaps)
//! - additional metrics are the total number of voxels that have been considered for the averages
//! - all metrics will be computed normalized to the ground (suffix z) and normalized to the canopy (suffix d), and both for the actual 3D canopy (no additional suffix) and a simulated lidar (additional suffix ALS)
//! - !!!: TODO, detailed documentation
void OutputABC_transmittance(fstream &output_transmittance, fstream &output_transmittance_ALS)
{

    // Compute height normalized metrics (z stands for height dimension) from it, both directly and with ALS simulation
    //  filled and empty voxels are only taken within the canopy
    float transmittance_nogaps_z[70] = {0.0}, transmittance_nogaps_zALS[70] = {0.0};
    float transmittance_incanopy_z[70] = {0.0}, transmittance_incanopy_zALS[70] = {0.0};
    float transmittance_full_z[70] = {0.0}, transmittance_full_zALS[70] = {0.0};
    int voxcrown[70] = {0};
    int voxcanopy_z[70] = {0}, voxcanopy_zALS[70] = {0};
    int voxcanopy_empty_z[70] = {0}, voxcanopy_empty_zALS[70] = {0};
    int voxcanopy_filled_z[70] = {0}, voxcanopy_filled_zALS[70] = {0};
    int voxcanopy_na_z[70] = {0}, voxcanopy_na_zALS[70] = {0};

    // Calculate the volume filled by crowns (for packing densities)
    //  to be consistent with other estimates, we do not only use leaf-filled area, but the whole area used up by the crown (even when overlapping)
    for (int site = 0; site < ctx.grid.sites; site++)
    {
        if (T[site].t_age > 0)
        {
            int row_center = site / ctx.grid.cols;
            int col_center = site % ctx.grid.cols;

            AddCrownVolumeLayer(row_center, col_center, T[site].t_height, T[site].t_CR, T[site].t_CD, voxcrown);
        }
    }

    // Compute the voxels for heights greater 2 separately, as the lowest ctx.diag.layer in TROLL can be a bit difficult to interpret (lots of seedlings by default)
    int voxcrown_total = voxcrown[0] + voxcrown[1];
    int voxcrown_greater2 = 0;

    for (int h = 2; h < 70; h++)
    {
        voxcrown_total += voxcrown[h];
        voxcrown_greater2 += voxcrown[h];
    }

    // Update statistics based on 3D fields, including the simulated transmittance field
    for (int h = min(70, ctx.grid.HEIGHT) - 1; h >= 0; h--)
    {
        for (int r = row_start; r < row_end; r++)
        {
            for (int c = col_start; c < col_end; c++)
            {
                int site = c + r * ctx.grid.cols;
                int height_canopy = chm_field_current[site];
                int height_canopy_ALS = chm_field_current_ALS[site];

                float transmittance = transmittance_direct[h][site];
                float transmittanceALS = transmittance_simulatedALS[h][site];

                if (h <= height_canopy)
                {
                    // Without ALS simulation, "real"
                    if (transmittance < 0.0)
                    {
                        voxcanopy_na_z[h]++;
                    }
                    else
                    {
                        if (transmittance == 1.0)
                        {
                            voxcanopy_empty_z[h]++;
                        }
                        else
                        {
                            voxcanopy_filled_z[h]++;
                            transmittance_nogaps_z[h] += transmittance;
                        }
                        transmittance_incanopy_z[h] += transmittance;
                        voxcanopy_z[h]++;
                    }
                    // From ALS simulation
                }

                if (h <= height_canopy_ALS)
                {
                    if (transmittanceALS < 0.0)
                    {
                        voxcanopy_na_zALS[h]++;
                    }
                    else
                    {
                        if (transmittanceALS == 1.0)
                        {
                            voxcanopy_empty_zALS[h]++;
                        }
                        else
                        {
                            voxcanopy_filled_zALS[h]++;
                            transmittance_nogaps_zALS[h] += transmittanceALS;
                        }

                        transmittance_incanopy_zALS[h] += transmittanceALS;
                        voxcanopy_zALS[h]++;
                    }
                }
            }
        }

        // Now calculate the mean
        if (voxcanopy_filled_z[h] > 0)
            transmittance_nogaps_z[h] *= 1.0 / float(voxcanopy_filled_z[h]);
        else
            transmittance_nogaps_z[h] = -1.0;
        if ((voxcanopy_filled_z[h] + voxcanopy_empty_z[h]) > 0)
            transmittance_incanopy_z[h] *= 1.0 / float(voxcanopy_filled_z[h] + voxcanopy_empty_z[h]);
        else
            transmittance_incanopy_z[h] = -1.0;

        if (voxcanopy_filled_zALS[h] > 0)
            transmittance_nogaps_zALS[h] *= 1.0 / float(voxcanopy_filled_zALS[h]);
        else
            transmittance_nogaps_zALS[h] = -1.0;
        if ((voxcanopy_filled_zALS[h] + voxcanopy_empty_zALS[h]) > 0)
            transmittance_incanopy_zALS[h] *= 1.0 / float(voxcanopy_filled_zALS[h] + voxcanopy_empty_zALS[h]);
        else
            transmittance_incanopy_zALS[h] = -1.0;

        // Now the full LAI profile, including non-canopy areas
        int voxeltotal = 0;

        for (int r = row_start; r < row_end; r++)
        {
            for (int c = col_start; c < col_end; c++)
            {
                int site = c + r * ctx.grid.cols;

                float transmittance = transmittance_direct[h][site];
                float transmittanceALS = transmittance_simulatedALS[h][site];

                if (transmittance < 0.0)
                    transmittance_full_z[h] += transmittance_incanopy_z[h];
                else
                    transmittance_full_z[h] += transmittance;

                if (transmittanceALS < 0.0)
                    transmittance_full_zALS[h] += transmittance_incanopy_zALS[h];
                else
                    transmittance_full_zALS[h] += transmittanceALS;

                voxeltotal++;
            }
        }

        if (voxeltotal > 0)
        {
            transmittance_full_z[h] *= 1.0 / float(voxeltotal);
            transmittance_full_zALS[h] *= 1.0 / float(voxeltotal);
        }
        else
        {
            transmittance_full_z[h] = -1.0;
            transmittance_full_zALS[h] = -1.0;
        }
    }

    // Now compute metrics normalized with regard to top of canopy (d for depth)
    float transmittance_nogaps_d[70] = {0.0}, transmittance_nogaps_dALS[70] = {0.0};
    float transmittance_full_d[70] = {0.0}, transmittance_full_dALS[70] = {0.0};
    int voxempty_d[70] = {0}, voxempty_dALS[70] = {0};
    int voxfilled_d[70] = {0}, voxfilled_dALS[70] = {0};
    int voxna_d[70] = {0}, voxna_dALS[70] = {0};

    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int site = c + r * ctx.grid.cols;
            int height_canopy = chm_field_current[site];
            int height_canopy_ALS = chm_field_current_ALS[site];

            for (int d = 0; d <= height_canopy; d++)
            {
                float transmittance = transmittance_direct[height_canopy - d][site];

                if (transmittance < 0.0)
                {
                    voxna_d[d]++;
                }
                else
                {
                    if (transmittance == 1.0)
                    {
                        voxempty_d[d]++;
                    }
                    else
                    {
                        voxfilled_d[d]++;
                        transmittance_nogaps_d[d] += transmittance;
                    }
                    transmittance_full_d[d] += transmittance;
                }
            }

            for (int d = 0; d <= height_canopy_ALS; d++)
            {
                float transmittanceALS = transmittance_simulatedALS[height_canopy_ALS - d][site];

                if (transmittanceALS < 0.0)
                {
                    voxna_dALS[d]++;
                }
                else
                {
                    if (transmittanceALS == 1.0)
                    {
                        voxempty_dALS[d]++;
                    }
                    else
                    {
                        voxfilled_dALS[d]++;
                        transmittance_nogaps_dALS[d] += transmittanceALS;
                    }
                    transmittance_full_dALS[d] += transmittanceALS;
                }
            }
        }
    }

    for (int d = 0; d < 70; d++)
    {
        if (voxfilled_d[d] > 0)
            transmittance_nogaps_d[d] *= 1.0 / float(voxfilled_d[d]);
        else
            transmittance_nogaps_d[d] = -1.0;

        int voxnona = voxfilled_d[d] + voxempty_d[d];
        if (voxnona > 0)
            transmittance_full_d[d] *= 1.0 / float(voxnona);
        else
            transmittance_full_d[d] = -1.0;

        if (voxfilled_dALS[d] > 0)
            transmittance_nogaps_dALS[d] *= 1.0 / float(voxfilled_dALS[d]);
        else
            transmittance_nogaps_dALS[d] = -1.0;

        int voxnonaALS = voxfilled_dALS[d] + voxempty_dALS[d];
        if (voxnonaALS > 0)
            transmittance_full_dALS[d] *= 1.0 / float(voxnonaALS);
        else
            transmittance_full_dALS[d] = -1.0;
    }

    // Finally we create PAI distributions, similar to efforts to estimate PAI from lidar simulations (cf. Greg's work)
    //  interpretation outside of an ABC context is a bit problematic, since we have many NA values that need to be imputated (otherwise PAI estimate is biased downwards), and since mean(log(x)) != log(mean(x))
    //  we fill up voxels within canopy with mean canopy ctx.diag.layer value, this decreases variance, but it does so for both empirical and simulated distributions, and the effect can be investigated given that we also have the direct measurements form ctx.field.LAI3D field
    //  furthermore, the canopy height will probably have a stronger effect on the distribution of PAI values than local variation within one ctx.diag.layer
    //  as above, we will calculate the actual distribution and the ALS-inferred one
    int stepsize = 10;
    int PAIhist[80] = {0}, PAIhist_ALS[80] = {0}; // for values going from 0 to 20, anything beyond is put into the 20 bin
    int nb_aggregates = 0;

    for (int r = row_start; r < row_end; r += stepsize)
    {
        for (int c = col_start; c < col_end; c += stepsize)
        {
            float PAIcolumn = 0.0, PAIcolumn_ALS = 0.0;
            nb_aggregates++;

            // Loop over the whole canopy except for 0 height where there is no transmittance value
            for (int h = ctx.grid.HEIGHT; h > 0; h--)
            {
                int nbvoxels = 0;
                float transmittance_avg = 0.0, transmittance_avgALS = 0.0;

                for (int r_avg = r; r_avg < r + stepsize; r_avg++)
                {
                    for (int c_avg = c; c_avg < c + stepsize; c_avg++)
                    {

                        if (r_avg >= row_start && r_avg < row_end && c_avg >= col_start && c_avg < col_end)
                        {
                            int site_avg = c_avg + r_avg * ctx.grid.cols;
                            float transmittance = transmittance_direct[h][site_avg];
                            float transmittanceALS = transmittance_simulatedALS[h][site_avg];

                            if (transmittance < 0.0)
                                transmittance_avg += transmittance_incanopy_z[h];
                            else
                                transmittance_avg += transmittance;
                            if (transmittanceALS < 0.0)
                                transmittance_avgALS += transmittance_incanopy_zALS[h];
                            else
                                transmittance_avgALS += transmittanceALS;

                            nbvoxels++;
                        }
                    }
                }
                if (nbvoxels > 0)
                {
                    if (transmittance_avg >= 0.0)
                    {
                        transmittance_avg *= 1.0 / float(nbvoxels);
                        float PAI = -log(transmittance_avg) / ctx.params.klight;
                        PAIcolumn += PAI;
                    }
                    if (transmittance_avgALS >= 0.0)
                    {
                        transmittance_avgALS *= 1.0 / float(nbvoxels);
                        float PAI_ALS = -log(transmittance_avgALS) / ctx.params.klight;
                        PAIcolumn_ALS += PAI_ALS;
                    }
                }
            }
            // We bin in bins of 0.25 LAI difference
            int PAIbin = min(int(4.0 * PAIcolumn), 79);
            int PAIbin_ALS = min(int(4.0 * PAIcolumn_ALS), 79);
            PAIhist[PAIbin]++;
            PAIhist_ALS[PAIbin_ALS]++;
        }
    }

    // Calculate summary statistics for crown packing analysis, i.e. the crown volume per voxel, average per ctx.diag.layer and canopy height
    //  first compute maxheight
    int height_max = 0;
    for (int r = row_start; r < row_end; r++)
    {
        for (int c = col_start; c < col_end; c++)
        {
            int site = c + r * ctx.grid.cols;
            int height_canopy = chm_field_current[site];
            if (height_max < height_canopy)
                height_max = height_canopy;
        }
    }

    // number of voxels to consider
    int voxmaxheight_total = height_max * sites_abc, voxmaxheight_greater2 = (height_max - 2) * sites_abc;
    int voxcanopy_total = 0, voxcanopy_greater2 = 0;
    int voxcanopy_filled_total = 0, voxcanopy_filled_greater2 = 0;

    voxcanopy_total += voxcanopy_z[0] + voxcanopy_z[1];
    voxcanopy_filled_total += voxcanopy_filled_z[0] + voxcanopy_filled_z[1];

    for (int h = 2; h < 70; h++)
    {
        voxcanopy_total += voxcanopy_z[h];
        voxcanopy_greater2 += voxcanopy_z[h];
        voxcanopy_filled_total += voxcanopy_filled_z[h];
        voxcanopy_filled_greater2 += voxcanopy_filled_z[h];
    }

    // Write to file
    output_transmittance << ctx.time.iter << "\t" << sites_abc << "\t";

    // Summary statistics
    output_transmittance << height_max << "\t" << voxcanopy_total << "\t" << voxmaxheight_total << "\t" << voxcanopy_filled_total << "\t" << voxcanopy_greater2 << "\t" << voxmaxheight_greater2 << "\t" << voxcanopy_filled_greater2 << "\t" << voxcrown_total << "\t" << voxcrown_greater2 << "\t";

    // Now the more detailed metrics
    //  from the ground upwards
    for (int h = 0; h < 70; h++)
        output_transmittance << voxcrown[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << transmittance_nogaps_z[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << transmittance_incanopy_z[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << transmittance_full_z[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << voxcanopy_z[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << voxcanopy_na_z[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << voxcanopy_empty_z[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance << voxcanopy_filled_z[h] << "\t";

    // From the canopy top downwards
    for (int d = 0; d < 70; d++)
        output_transmittance << transmittance_nogaps_d[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << transmittance_full_d[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << voxna_d[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << voxempty_d[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance << voxfilled_d[d] << "\t";

    output_transmittance << nb_aggregates << "\t";

    for (int bin = 0; bin < 80; bin++)
    {
        if (nb_aggregates > 0)
            output_transmittance << PAIhist[bin] / float(nb_aggregates) << "\t";
        else
            output_transmittance << "NA\t";
    }

    output_transmittance << endl;

    // Same as before, but for the simulated ALS scan
    output_transmittance_ALS << ctx.time.iter << "\t" << sites_abc << "\t";

    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << transmittance_nogaps_zALS[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << transmittance_incanopy_zALS[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << transmittance_full_zALS[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << voxcanopy_zALS[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << voxcanopy_na_zALS[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << voxcanopy_empty_zALS[h] << "\t";
    for (int h = 0; h < 70; h++)
        output_transmittance_ALS << voxcanopy_filled_zALS[h] << "\t";

    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << transmittance_nogaps_dALS[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << transmittance_full_dALS[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << voxna_dALS[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << voxempty_dALS[d] << "\t";
    for (int d = 0; d < 70; d++)
        output_transmittance_ALS << voxfilled_dALS[d] << "\t";

    output_transmittance_ALS << nb_aggregates << "\t";

    for (int bin = 0; bin < 80; bin++)
    {
        if (nb_aggregates > 0)
            output_transmittance_ALS << PAIhist_ALS[bin] / float(nb_aggregates) << "\t";
        else
            output_transmittance_ALS << "NA\t";
    }

    output_transmittance_ALS << endl;
}
#endif

#ifdef MPI
// MPI Routines

// ##############################################
//  Global MPI function: Communication of border fields in the parallel version of the code
// ##############################################
//! - Only if the MPI option has been enabled
void MPI_ShareSeed(unsigned char **c, int n)
{

    MPI_Status status;

    if (p_rank == size - 1)
        MPI_Sendrecv(c[0], n, MPI_UNSIGNED_CHAR, size - 2, 0, c[3], n, MPI_UNSIGNED_CHAR, 0, 0, MPI_COMM_WORLD, &status);
    if (p_rank == 0)
        MPI_Sendrecv(c[0], n, MPI_UNSIGNED_CHAR, size - 1, 0, c[3], n, MPI_UNSIGNED_CHAR, 1, 0, MPI_COMM_WORLD, &status);
    if ((p_rank) && (p_rank < size - 1))
        MPI_Sendrecv(c[0], n, MPI_UNSIGNED_CHAR, p_rank - 1, 0, c[3], n, MPI_UNSIGNED_CHAR, p_rank + 1, 0, MPI_COMM_WORLD, &status);

    if (p_rank == 0)
        MPI_Sendrecv(c[1], n, MPI_UNSIGNED_CHAR, 1, 1, c[2], n, MPI_UNSIGNED_CHAR, size - 1, 1, MPI_COMM_WORLD, &status);
    if (p_rank == size - 1)
        MPI_Sendrecv(c[1], n, MPI_UNSIGNED_CHAR, 0, 1, c[2], n, MPI_UNSIGNED_CHAR, size - 2, 1, MPI_COMM_WORLD, &status);
    if ((p_rank) && (p_rank < size - 1))
        MPI_Sendrecv(c[1], n, MPI_UNSIGNED_CHAR, p_rank + 1, 1, c[2], n, MPI_UNSIGNED_CHAR, p_rank - 1, 1, MPI_COMM_WORLD, &status);
}

// ##############################################
//  Global MPI function: Communication of fields
// ##############################################
void MPI_ShareField(unsigned short **cl, unsigned short ***cp, int n)
{

    MPI_Status status;
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
    {
        if (p_rank == 0)
            MPI_Sendrecv(cl[h], n, MPI_UNSIGNED_SHORT, size - 1, h, cp[1][h], n, MPI_UNSIGNED_SHORT, 1, h, MPI_COMM_WORLD, &status);
        if (p_rank == size - 1)
            MPI_Sendrecv(cl[h], n, MPI_UNSIGNED_SHORT, size - 2, h, cp[1][h], n, MPI_UNSIGNED_SHORT, 0, h, MPI_COMM_WORLD, &status);
        if ((p_rank) && (p_rank < size - 1))
            MPI_Sendrecv(cl[h], n, MPI_UNSIGNED_SHORT, p_rank - 1, h, cp[1][h], n, MPI_UNSIGNED_SHORT, p_rank + 1, h, MPI_COMM_WORLD, &status);

        if (p_rank == 0)
            MPI_Sendrecv(cl[h] + ctx.grid.sites, n, MPI_UNSIGNED_SHORT, 1, h + ctx.grid.HEIGHT, cp[0][h], n, MPI_UNSIGNED_SHORT, size - 1, h + ctx.grid.HEIGHT, MPI_COMM_WORLD, &status);
        if (p_rank == size - 1)
            MPI_Sendrecv(cl[h] + ctx.grid.sites, n, MPI_UNSIGNED_SHORT, 0, h + ctx.grid.HEIGHT, cp[0][h], n, MPI_UNSIGNED_SHORT, size - 2, h + ctx.grid.HEIGHT, MPI_COMM_WORLD, &status);
        if ((p_rank) && (p_rank < size - 1))
            MPI_Sendrecv(cl[h] + ctx.grid.sites, n, MPI_UNSIGNED_SHORT, p_rank + 1, h + ctx.grid.HEIGHT, cp[0][h], n, MPI_UNSIGNED_SHORT, p_rank - 1, h + ctx.grid.HEIGHT, MPI_COMM_WORLD, &status);
    }
}

// ##############################################
//  Global MPI function: Communication of treefalls
// ##############################################
void MPI_ShareTreefall(unsigned short **c, int n)
{

    MPI_Status status;
    if (p_rank == 0)
        MPI_Sendrecv(c[0], n, MPI_UNSIGNED_SHORT, size - 1, 0, c[2], n, MPI_UNSIGNED_SHORT, 1, 0, MPI_COMM_WORLD, &status);
    if (p_rank == size - 1)
        MPI_Sendrecv(c[0], n, MPI_UNSIGNED_SHORT, size - 2, 0, c[2], n, MPI_UNSIGNED_SHORT, 0, 0, MPI_COMM_WORLD, &status);
    if ((p_rank) && (p_rank < size - 1))
        MPI_Sendrecv(c[0], n, MPI_UNSIGNED_SHORT, p_rank - 1, 0, c[2], n, MPI_UNSIGNED_SHORT, p_rank + 1, 0, MPI_COMM_WORLD, &status);

    if (p_rank == 0)
        MPI_Sendrecv(c[0] + 2 * n, n, MPI_UNSIGNED_SHORT, 1, 1, c[1], n, MPI_UNSIGNED_SHORT, size - 1, 1, MPI_COMM_WORLD, &status);
    if (p_rank == size - 1)
        MPI_Sendrecv(c[0] + 2 * n, n, MPI_UNSIGNED_SHORT, 0, 1, c[1], n, MPI_UNSIGNED_SHORT, size - 2, 1, MPI_COMM_WORLD, &status);
    if ((p_rank) && (p_rank < size - 1))
        MPI_Sendrecv(c[0] + 2 * n, n, MPI_UNSIGNED_SHORT, p_rank + 1, 1, c[1], n, MPI_UNSIGNED_SHORT, p_rank - 1, 1, MPI_COMM_WORLD, &status);
}
#endif

//! Close outputs
void CloseOutputs()
{
    output_info.close();
    output_info.clear();

    for (int i = 0; i < 4; i++)
    {
        output_basic[i].close();
        output_basic[i].clear();
    }

    if (ctx.opt._OUTPUT_extended == 1)
    {
        for (int i = 0; i < 9; i++)
        {
            output_extended[i].close();
            output_extended[i].clear();
        }
        if (ctx.crown.extent_visual > 0)
        {
            for (int i = 0; i < 2; i++)
            {
                output_visual[i].close();
                output_visual[i].clear();
            }
        }
    }

#ifdef Output_ABC
    for (int i = 0; i < 11; i++)
    {
        output_abc[i].close();
        output_abc[i].clear();
    }
#endif
#ifdef WATER
    for (int i = 0; i < 10; i++)
    {
        output[i].close();
        output[i].clear();
        // output_water[i].close();
        // output_water[i].clear();
    }
#endif
#ifdef TRACK_INDIVIDUALS
    for (int i = 0; i < 3; i++)
    {
        output_track[i].close();
        output_track[i].clear();
    }
#endif
}

//!  Free dynamic memory
void FreeMem()
{
    delete[] ctx.diag.nbdbh;
    delete[] ctx.diag.layer;
    delete[] ctx.species.SPECIES_GERM;
#ifdef WATER
    delete[] ctx.grid.site_DCELL;
#endif
    for (int site = 0; site < ctx.grid.sites; site++)
        delete[] ctx.species.SPECIES_SEEDS[site];
    delete[] ctx.species.SPECIES_SEEDS;
    delete[] ctx.species.p_seed;
    delete[] ctx.species.n_seed;
    delete[] ctx.species.p_species;
    delete[] ctx.species.n_species;

    if (ctx.opt._SEEDTRADEOFF || ctx.opt._NDD)
        delete[] ctx.species.PROB_S;
    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
        delete[] ctx.field.LAI3D[h];
    delete[] ctx.field.LAI3D;

    for (int i = 0; i < 3; i++)
        delete[] ctx.field.Thurt[i];

#ifdef Output_ABC
    delete[] chm_field_previous;
    delete[] chm_field_previous_ALS;
    delete[] chm_field_current;
    delete[] chm_field_current_ALS;
    delete[] chm_field_changes;

    for (int h = 0; h < (ctx.grid.HEIGHT + 1); h++)
    {
        delete[] transmittance_simulatedALS[h];
        delete[] transmittance_direct[h];
        delete[] transmittance_simulatedALS_sampling[h];
    }

    delete[] transmittance_simulatedALS;
    delete[] transmittance_direct;
    delete[] transmittance_simulatedALS_sampling;

    delete[] abundances_species;
    delete[] abundances_species10;
    delete[] biomass_species;

    for (int spp = 0; spp < (ctx.grid.nbspp + 1); spp++)
    {
        delete[] traits_species[spp];
        delete[] traits_species10[spp];
    }
    delete[] traits_species;
    delete[] traits_species10;

#endif
    delete[] ctx.lookup.LookUp_T;
    delete[] ctx.lookup.LookUp_KmT;
    delete[] ctx.lookup.LookUp_VPD;
    delete[] ctx.lookup.LookUp_flux_absorption;
    delete[] ctx.lookup.LookUp_flux;
    delete[] ctx.lookup.LookUp_ExtinctLW;
    // delete [] LookUp_Rday; //newIM: no redundancy anymore between LookUp_Rday and ctx.lookup.LookUp_Rleaf
    delete[] ctx.lookup.LookUp_JmaxT;
    delete[] ctx.lookup.LookUp_Rstem;
    delete[] ctx.lookup.LookUp_Rleaf; // newIM: no redundancy anymore between LookUp_Rday and ctx.lookup.LookUp_Rleaf
    delete[] ctx.lookup.LookUp_GammaT;
    // delete [] LookUp_Rnight; //newIM: no redundancy anymore between LookUp_Rday and ctx.lookup.LookUp_Rleaf
    delete[] ctx.lookup.LookUp_VcmaxT;
#ifdef WATER
    delete[] ctx.lookup.LookUp_INLR;
    delete[] ctx.lookup.LookUp_SLOPE;
    delete[] ctx.lookup.LookUp_GRADN;
#endif
}
