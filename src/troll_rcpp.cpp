#include <Rcpp.h>
using namespace Rcpp;   // is there not a potential problem with "using namespace std;" below, cf. example of namespace collision at: https://coliru.stacked-crooked.com/a/578f9934725ffd90, maybe they don't overlap here, but still, would be good to discuss!
 
#include "troll-cpp/troll.hpp"
#include "troll-cpp/constants.hpp"
#include "troll-cpp/context.hpp"
#include "internal/look_up_tables_cache.hpp"
#include "internal/param_registry.hpp"

int mpi_rank = 0;
int mpi_size = 0;
int easympi_rank = 0;

//###########################################
//###########################################
//###########     MAIN PROGRAM    ###########
//###########################################
//###########################################

//' @title TROLL simulator
//'
//' @description
//' Wrapper of the TROLL C++ simulator with Rcpp.
//'
//' @name trollCpp
//'
//' @param global_file char. Path to the global parameters file.
//' @param climate_file char. Path to the climate file.
//' @param species_file char. Path to the species file.
//' @param day_file char. Path to the daytime file.
//' @param lidar_file char. Path to the lidar file.
//' @param forest_file char. Path to the forest file.
//' @param output_file char. Path to the output folder.
//'
//' @return Void with outputs files written in the defined folder.
//'
//' @examples
//' \dontrun{
//' trollCpp(global_file = "test/test_input_global.txt",
//'          climate_file = "test/test_input_climate.txt",
//'          species_file = "test/test_input_species.txt",
//'          day_file = "test/test_input_daily.txt",
//'          lidar_file = "",
//'          forest_file = "",
//'          output_file = "test")
//' }
//'
//' @export
// [[Rcpp::export]]
void trollCpp(
    std::string global_file,
    std::string climate_file,
    std::string species_file,
    std::string day_file,
    std::string lidar_file,
    std::string forest_file,
    std::string output_file
) {

  // New context
  Context ctx{};
  
  // From Rcpp acceptable input to TROLL char*
  ctx.buffers.bufi = &global_file[0] ;
  ctx.buffers.bufi_climate = &climate_file[0] ;
  ctx.buffers.bufi_species = &species_file[0] ;
  ctx.buffers.bufi_daytimevar = &day_file[0] ;
  ctx.buffers.bufi_data = &forest_file[0] ;
  ctx.buffers.bufi_pointcloud = &lidar_file[0] ;
  ctx.buffers.buf = &output_file[0] ;
  
  ctx.opt._FromInventory = 0; // added v.3.1.7, was previously undefined when no inputfile was provided
  ctx.opt._OUTPUT_pointcloud = 0;  // added v.3.1.7, was previously undefined when no inputfile was provided  
  
  if(strlen(ctx.buffers.bufi_data) != 0) ctx.opt._FromInventory = 1; // There is a more formal checking of the stream within ReadInputInventory, so this is only to check whether any kind of file/path has been provided, i.e. whether the attempt at initializing from data has been made. But maybe there is a better way of doing this? (and to check: What happens if the string provided in R is NA or NULL? Can we avoid this?)
  if(strlen(ctx.buffers.bufi_pointcloud) != 0) ctx.opt._OUTPUT_pointcloud = 1; // There is a more formal checking of the stream within ReadInputInventory, so this is only to check whether any kind of file/path has been provided, i.e. whether the attempt at initializing from data has been made. But maybe there is a better way of doing this? (and to check: What happens if the string provided in R is NA or NULL? Can we avoid this?)
    
  //int main(int argc,char *argv[]) { // now left as comment to recuperate original TROLL version
  
  //!*********************
  //!** Initializations **
  //!*********************
#ifdef MPI   // Lookup processor number / total number of processors
  MPI_Init(&argc,&argv);
  MPI_Comm_rank(MPI_COMM_WORLD,&p_rank);
  MPI_Comm_size(MPI_COMM_WORLD,&size);
#else
  mpi_rank = 0;
  mpi_size = 1;
#endif
  easympi_rank = 0;

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
  
  LOG_COUT << "Easy MPI rank: " << easympi_rank << endl;
  
  unsigned long int t = (unsigned long int)time(NULL);
  unsigned long int seed = 3 * t + 2 * (easympi_rank + 1) + 1;
  
  if (ctx.opt._NONRANDOM == 1)
    seed = 1;
  
  gsl_rng_set(ctx.rng.gslrand, seed);
  
  LOG_COUT << "On proc #" << easympi_rank << " seed: " << seed << endl;
  sprintf(ctx.fileio.outputinfo, "%s_%i_info.txt", ctx.buffers.buf, easympi_rank);
  ctx.out.output_info.open(ctx.fileio.outputinfo, ios::out);
  if (!ctx.out.output_info)
    LOG_CERR << "ERROR with info file" << endl;
  
  Initialise(ctx); // Read global parameters
  
  InitialiseOutputStreams(ctx); // Initialise Output streams, taken outside of Initialise() function in v.3.1 to mirror AllocMem()
  AllocMem(ctx);                // Memory allocation
  
#ifdef Output_ABC
  InitialiseABC(ctx);
#endif
  
   if (ctx.opt._OUTPUT_pointcloud)
  {
    ReadInputPointcloud(ctx); // parameters for point cloud generation, v.3.1.6
  }
  
  if (ctx.opt._FromInventory)
  {
    ReadInputInventory(ctx); // Initial configuration of the forest, read from data
  }
  
  LOG_COUT << "klight is: " << ctx.params.klight << endl;
  LOG_COUT << "CO2 concentration is: " << ctx.params.Cair << endl;
  LOG_COUT << "Number of species: " << ctx.grid.nbspp << endl
       << endl;
#ifdef WATER
  LOG_COUT << "Atmospheric pressure is: " << ctx.params.PRESS << endl;
#endif
  
  if (ctx.opt._GPPcrown == 1)
    LOG_COUT << "Activated Module: FastGPP" << endl;
  if (ctx.opt._BASICTREEFALL == 1)
    LOG_COUT << "Activated Module: BASICTREEFALL" << endl;
  if (ctx.opt._NDD == 1)
    LOG_COUT << "Activated Module: NDD" << endl;
  if (ctx.opt._SEEDTRADEOFF == 1)
    LOG_COUT << "Activated Module: SEEDTRADEOFF" << endl;
  if (ctx.opt._FromInventory == 1)
    LOG_COUT << "Activated Module: FromInventory" << endl;
  if (ctx.opt._OUTPUT_extended == 1)
    LOG_COUT << "Activated Module: OUTPUT_extended" << endl;
  if (ctx.opt._OUTPUT_inventory == 1)
    LOG_COUT << "Activated Module: OUTPUT_inventory" << endl;
  if (ctx.opt._OUTPUT_extended == 1 && ctx.crown.extent_visual > 0)
    LOG_COUT << "Activated visualization output." << endl;
  if (ctx.opt._OUTPUT_pointcloud == 1)
    LOG_COUT << "Activated Module: Point cloud output (simplified ALS simulation)" << endl; // v.3.1.6
  
  //!*********************
  //!** Evolution loop  **
  //!*********************
  
  LOG_COUT << "Simulation starts with " << ctx.diag.nblivetrees << " trees." << endl;
  
  //** Information in file info **
  //******************************
  if (!mpi_rank)
  {
    ctx.out.output_info << "\nTROLL simulator\n\n";
    ctx.out.output_info << "\n   2D discrete network: horizontal step = " << ctx.grid.LH
                        << " m, one tree per " << ctx.grid.LH * ctx.grid.LH << " m^2 \n\n";
    ctx.out.output_info << "\n   Tree : (t_dbh,t_height,t_CR,t_CD) \n\n";
    ctx.out.output_info << "\n            + one species label \n\n";
    ctx.out.output_info << " Number of sites      : " << ctx.grid.rows << "x" << ctx.grid.cols << "\n";
    ctx.out.output_info << " Number of iterations : " << ctx.time.nbiter << "\n";
    ctx.out.output_info << " Duration of timestep : " << ctx.time.timestep << " years\n";
    ctx.out.output_info << " Number of Species    : " << ctx.grid.nbspp << "\n\n";
    ctx.out.output_info.flush();
  }
  
  // initial pattern, should be empty, unless an inventory has been provided
  if (ctx.opt._OUTPUT_extended & !ctx.opt._OUTPUT_inventory)
    OutputSnapshot(ctx, ctx.out.output_basic[1], 1, 0.01); // Initial Pattern, for trees > 0.01m DBH
  else if (ctx.opt._OUTPUT_inventory)
    OutputSnapshot(ctx, ctx.out.output_basic[1], 1, 0.001);
  else
    OutputSnapshot(ctx, ctx.out.output_basic[1], 1, 0.1); // Initial Pattern, for trees > 0.1m DBH
  
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
      int timeofyear = GetTimeofyear(ctx);
      if (timeofyear == 0)
        OutputVisual(ctx);
    }
    
    /*if(ctx.opt._OUTPUT_pointcloud > 0 && ctx.time.iter == ctx.pc.iter_pointcloud_generation){
     ExportPointcloud(ctx.pc.mean_beam_pc, ctx.pc.sd_beam_pc, ctx.pc.klaser_pc, ctx.pc.transmittance_laser, ctx.out.output_pointcloud); // v.3.1.6
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
      OutputABC(ctx);
      UpdateDBHtrackingABC(ctx);
    }
#endif
  }
  
  LOG_COUT << "Simulation ends with " << ctx.diag.nblivetrees << " trees." << endl;
  
  // final pattern
  if (ctx.opt._OUTPUT_extended & !ctx.opt._OUTPUT_inventory)
  {
    OutputSnapshot(ctx, ctx.out.output_basic[2], 1, 0.01); // Final Pattern, for trees > 0.01m DBH
  }
  else if (ctx.opt._OUTPUT_inventory)
  {
    OutputSnapshot(ctx, ctx.out.output_basic[2], 1, 0.001);
  }
  else
  {
    OutputSnapshot(ctx, ctx.out.output_basic[2], 1, 0.1); // Final Pattern, for trees > 0.1m DBH
  }
  if (ctx.opt._OUTPUT_extended)
  {
    OutputLAI(ctx, ctx.out.output_extended[7]);
    OutputCHM(ctx, ctx.out.output_extended[8]);
  }
  if (ctx.opt._OUTPUT_inventory)
  {
    for (int d = 0; d < ctx.grid.nbdcells; d = d + 1)
    {
      ctx.out.output_basic[3] << d;
      for (int l = 0; l < ctx.soil.nblayers_soil; l = l + 1)
      {
        ctx.out.output_basic[3] << "\t" << ctx.soil.SWC3D[l][d];
      }
      ctx.out.output_basic[3] << endl;
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
    LOG_COUT << "\n";
#ifdef MPI
    ctx.out.output_info << "Number of processors : " << mpi_size << "\n";
#endif
    ctx.out.output_info << "Average computation time : " << durf / float(mpi_size) << " seconds.\n";
    ctx.out.output_info << "End of simulation.\n";
    ctx.out.output_info.flush();
    LOG_COUT << "\nNumber of processors : " << mpi_size << "\n";
    LOG_COUT << "Average computation time : " << durf / float(mpi_size) << " seconds.\n";
    LOG_COUT << "End of simulation.\n";
  }
  
  CloseOutputs(ctx); // new in v.3.1: Close and clear outputs, maybe not necessary as main function terminates shortly after, but maybe it ensures a cleaner communication with file system/within Rcpp
  FreeMem(ctx);      // Free dynamic memory  //! added in oct2013
#ifdef easyMPI
  MPI::Finalize();
#endif
}
