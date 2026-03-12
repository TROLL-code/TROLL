//////////////////////////////////////////////////////////////////////////////////
/*! \mainpage
 *  \section TROLL
 *
 *  Individual-based forest dynamics simulator
 *
 * History
 * -------
 *    - Version 1: Jerome Chave (Sept 1997 to Sept 2001; Chave 1999, 2001)
 *    - Version 2.0: Jerome Chave (March 2011)
 *    - Version 2.1 & 2.2: Isabelle Marechaux & Jerome Chave (Oct 2013 to May 2016)
 *    - Version 2.3: Isabelle Marechaux, Fabian Fischer, Jerome Chave (Oct 2016 to March 2017; Marechaux & Chave 2017)
 *    - Version 2.4 & 2.5: Fabian Fischer (Feb 2018 to May 2020)
 *    - Version 3.0: Fabian Fischer, Isabelle Marechaux, Jerome Chave (Jan 2021)
 *    - Version 3.1: Isabelle Maréchaux (May-June 2021)
 *    - Version 4.0: Isabelle Maréchaux (Feb 2023)
 *
 * Compiling options
 * -----------------
 *    - Compilation test on osx and linux plateforms
 *    - Compilation command: _g++ main.cpp -O3 -o TROLL.out -lgsl -lgslcblas -Wall_
 *    - Code profiling: _g++ -O3 -Wall -o troll main.cpp -lgsl -lgslcblas -lm -g -pg_
 *
 * Bibliography
 * -----------
 *    - Chave, J. (1999). Study of structural, successional and spatial patterns in tropical rain forests using TROLL, a spatially explicit forest model. Ecological modelling, 124(2-3), 233-254.
 *    - Chave, J. (2001). Spatial patterns and persistence of woody plant species in ecological communities. The American Naturalist, 157(1), 51-65.
 *    - Maréchaux, I., & Chave, J. (2017). An individual‐based forest model to jointly simulate carbon and tree diversity in Amazonia: description and applications. Ecological Monographs, 87(4), 632-664.
 *
 * Comments
 * -------
 *     - TODO: include iomanip, typedef, be careful with parameter_names initialisation
 *     - As of v.2.4, GNU scientific library (gsl) is needed (current version is 2.6)
 *        -# to work, the gsl_linalg.h header is needed, so versions above 1.7 are the minimum
 *        -# on osx, type "brew install gsl"
 *     - Basic uniform sampling functions (for more information: c:
 *        -# gsl_rng_uniform(gsl_rand) which samples range [0,1)
 *        -# gsl_rng_uniform_pos(gsl_rand) which samples range (0,1) to avoid 0 for log transformations
 *        -# gls_rng_uniform_int(gsl_rand, unsigned long int n) samples long integers from 0 to n-1
 */
//////////////////////////////////////////////////////////////////////////////////

#include "troll_defines.hpp"

// LIBRAIRIES
#include <cstdio>
#include <iostream>
#include <iomanip> //new IM (for setprecision)
#include <fstream>
#include <cstdlib>
#include <string>
#include <limits>
#include <ctime>
#include <cmath>
#include <vector>
#include <sstream>
#include <algorithm>
#include <typeinfo>
#include <random>

#ifdef MPI
#include "mpi.h"
#endif

#include <gsl/gsl_math.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_test.h>
#include <gsl/gsl_ieee_utils.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_errno.h>

using namespace std;

// FORWARD DECLARATIONS
struct Context;

// FileIO and InputBuffers migrated to ctx.fileio / ctx.buffers

// FILE OUTPUT STREAMS. Updated in v.3.1 to reduce number of streams and increase clarity
fstream output_info;        //!< Global variable:  basic simulation information
fstream output_basic[4];    //!< Global variable:  default output streams, always used
fstream output_extended[9]; //!< Global variable:  extended TROLL outputs, preserved from previous versions, might need further clean-up
fstream output_visual[2];   //!< Global variable: outputs for visualization/gif creation, new in v.3.1.2
fstream output_pointcloud;  //!< Global variable: optional las file output, new in v.3.1.6
#ifdef MIP_Lichstein
fstream output_MIP_eco;
fstream output_MIP_ind;
#endif

#ifdef Output_ABC
fstream output_abc[11]; //!< Global variable: output streams for Approximate Bayesian Computation
#endif

#ifdef WATER
fstream output[40]; //!< Global variable: output files
// fstream output_water[10];           //!< Global variable: output streams for water module (in development), to be modified
#endif

#ifdef TRACK_INDIVIDUALS
fstream output_track[3]; //!< Global variable: output streams for tracking of trees
#endif

// USER CONTROLS migrated to ctx.opt:
// _NONRANDOM, _GPPcrown, _BASICTREEFALL, _SEEDTRADEOFF, _NDD, _CROWN_MM,
// _OUTPUT_extended, _OUTPUT_inventory, _FromInventory, _sapwood,
// _seedsadditional, _LL_parameterization, _LA_regulation,
// _OUTPUT_pointcloud, _SOIL_LAYER_WEIGHT, _WATER_RETENTION_CURVE

// GLOBAL PARAMETERS OF THE SIMULATION
// (sites, cols, rows, nbspp migrated to ctx.grid)

// RNG and covariance machinery migrated to ctx.rng:
// gslrand, mcov_N_P_LMA, mu_N_P_LMA, variation_N_P_LMA, covariance_status

// DCELL/Grid variables migrated to ctx.grid:
// length_dcell, linear_nb_dcells, sites_per_dcell, nbdcells,
// site_DCELL, i_sites_per_dcell, HEIGHT, dbhmaxincm, RMAX, SBORD,
// leafdem_resolution, NV, NH, LV, LH

float p_nonvert; //!< Global variable: ratio of non-vertical incident light
float Cseedrain; //!< Global variable: constant used to scale total seed rain per hectare across species
float nbs0;      //!< Global variable: number of seeds produced and dispersed by each mature tree when SEEDTRADEOFF is not defined
float Cair;      //!< Global variable: atmospheric CO_2 concentration (in ppm). If in the future CO_2 is allowed to vary, Cair should have the same status as other climatic variables
#ifdef WATER
float PRESS; //!< Global variable: atmospheric CO_2 pressure (in kPa). If in the future PRESS should vary, it should have the same status as other climatic variables
#endif
float iCair; //!< Global variable: inverse of Cair

// CrownGeometry migrated to ctx.crown:
// crown_gap_fraction, shape_crown, Rndd, deltaR, deltaD, BAtot,
// extent_visual, mincol_visual, maxcol_visual, minrow_visual,
// maxrow_visual, minrow_visual_slice, maxrow_visual_slice

//! ENVIRONMENTAL VARIABLES

// Climate vectors migrated to ctx.climate:
// varday_light, varday_vpd, varday_T, varday_WS,
// DailyMeanTemperature, DailyMeanIrradiance,
// DailyMeanVapourPressureDeficit, NightTemperature,
// Rainfall, DailyMeanWindSpeed

// LOOKUP TABLES migrated to ctx.lookup:
// nbTbins, iTaccuracy, LookUp_KmT/GammaT/VcmaxT/JmaxT/Rleaf,
// LookUp_flux_absorption/flux/ExtinctLW/VPD/T/Rstem/Crown_site,
// nbVPDbins, iVPDaccuracy, LookUp_INLR/SLOPE/GRADN,
// nbHbins, iHaccuracy, LookUp_Wind, LookUpLAImax

// ENVIRONMENTAL VARIABLES migrated to ctx.climate:
// tnight, precip, WSDailyMean, WDailyMean, tDailyMean, VPDDailyMean,
// WDailyMean_year, tDailyMean_year, VPDDailyMean_year,
// windDailyMean_year, Tnight_year,
// WDailyMean_all, VPDDailyMean_all, tDailyMean_all, windDailyMean_all

// GLOBAL VARIABLES ACROSS SPECIES
float SWtoPPFD; //!< Global variable: conversion factor for shortwave irradiance measured in W/m2 to PPFD in micromol of PAR (micromol/s/m^2, as used in the Farquhar model). Around 2.0-2.5 in the tropics. Data at Nouragues (comparing photon count and irradiance) give a value: 2.27. Depends on cloudiness (in non-cloudy areas, the fraction of PAR in irradiance arriving on the ground may be much lower). This is typically equals to ca 0.5*4.57, where 0.5 stands for the fact that ca 50% of the total solar energy reaching the Earth’s surface corresponds to PAR, and 4.57 umol J-1 is basically equal to 10^6/(Emean*Avogadro number) where Emean is the average energy of a photon across PAR wavelength range: Ephoton=h*c/wavelength).
#ifdef WATER
float PPFDtoSW; //!< Global variable: conversion factor from PPFD in micromol of PAR to shortwave irradiance measured in J/ Inverse of SWtoPPFD.
#endif
float klight;             //!< Global variable: light absorption rate or extinction coefficient used in Beer-Lambert law to compute light within the canopy
float kpar;               //!< Global variable: new in v.2.5: effective light absorption rate or extinction coefficient used in Beer-Lambert law to compute light within the canopy; kpar = klight * absorptance_leaves
float phi;                //!< Global variable: true quantum yield; previously was apparent quantum yield (in micromol C/micromol photon): quantum yield multiplied by leaf absorptance. Quantum yield is often provided per absorbed light flux, so one should multiply incident PPFD by leaf absorptance (Poorter et al American Journal of Botany). For some authors, it should be species-dependent or environment dependent, but these options are not implemented here (see eg Domingues et al 2014 Plant Ecology & Diversity). As of v2.5: phi is the quantum yield, without multiplication with absorptance (see absorptance_leaves)
float theta;              //!< Global variable: parameter of the Farquhar model set to 0.7 in this version. For some authors, it should be species-dependent or environment dependent, but these options are not implemented here
float absorptance_leaves; //!< Global variable: absorptance of leaves (close to 0.91 for tropical tree species)
float g1;                 //!< Global variable: g1 parameter of Medlyn et al's model of stomatal conductance. v230: defined as a global parameter shared by species, instead of a Species class variable. !!!UPDATE A species-specific value of g1 (cf Lin et al. 2015 NCC or Wu et al. 2019 GCB) is needed to simulate functional shift through a regeneration. Different values of g1 across PFT are also used by Xu et al. 2016 New Phytologist using ED2+SPA applied on tropical dry forests
#ifdef G0
float g0; //!< Global variable: minimum leaf conductance, in mmolH20 m-2 s-1, parameter of stomatal conductance model. Defined as a global parameter shared by species, in absence of a clear variation with other traits (see Duursma et al. 2018 New Phytologist, Slot et al. 2021 New Phytologist, METRADICA data)
#endif
#ifdef PHENO_DROUGHT
float pheno_a0;    //!< Global variable: threshold beyond which a change in t_pheno_factor (that controls old leaves shedding) is triggered, in proportion of leaf TLP
float pheno_b0;    //!< Global variable: threshold beyond which a change in t_pheno_factor (that controls old leaves shedding) is triggered, in proportion of tree height
float pheno_delta; //!< Global variable: amplitude of change in t_pheno_factor per timestep
#endif
float alpha;         //!< Global variable: apparent quantum yield to electron transport in mol e-/mol photons, equal to the true quantum yield multiplied by leaf absorbance
float vC;            //!< Global variable: variance of treefall threshold
float H0;            //!< Global variable: initial tree height (m)
float DBH0;          //!< Global variable: initial tree DBH (m)
float CD0;           //!< Global variable: initial tree crown depth (m)
float fallocwood;    //!< Global variable: fraction of biomass allocated to above ground wood (branch turnover+stem)
float falloccanopy;  //!< Global variable: fraction of biomass allocated to canopy (leaves + reproductive organs + twigs)
float dens;          //!< Global variable: initial crown leaf density (in m^2/m^3)
float CD_a;          //!< Global variable: allometric parameter crown depth intercept
float CD_b;          //!< Global variable: allometric parameter crown depth slope
float CR_a;          //!< Global variable: allometric parameter crown radius log scale intercept (translates into factor on regular scale)
float CR_b;          //!< Global variable: allometric parameter crown radius log scale slope (translates into exponent on regular scale)
float CR_min;        //!< Global variable: allometric parameter minimum crown radius (in m)
float p_tfsecondary; //!< Global variable: probability that a death due to a treefall is a treefall itself (v.2.4.0)
float hurt_decay;    //!< Global variable: "healing factor" rate at which t_hurt, the tree-level negative impact of a treefall on a tree, declines each timestep (v.2.4.0)
float m;             //!< Global variable: basal death rate
float m1;            //!< Global variable: slope of the dependence between death rate and wood density (wsg); usually a negative constant (v.2.2)

// sigmas for intraspecific variation, currently assumed to be the same for all species
float sigma_height; //!< Global variable: standard deviation of intraspecific variation in maximal height
float sigma_CR;     //!< Global variable: standard deviation of intraspecific variation in crown radius
float sigma_CD;     //!< Global variable: standard deviation of intraspecific variation in crown depth
float sigma_P;      //!< Global variable: standard deviation of intraspecific variation in leaf phosphorus concentration
float sigma_N;      //!< Global variable: standard deviation of intraspecific variation in leaf nitrogen concentration
float sigma_LMA;    //!< Global variable: standard deviation of intraspecific variation in leaf mass per area (LMA)
float sigma_wsg;    //!< Global variable: standard deviation of intraspecific variation in wood specific gravity (wsg)
float sigma_dbhmax; //!< Global variable: standard deviation of intraspecific variation in maximal trunk diameter
#ifdef WATER
float sigma_leafarea; //!< Global variable: standard deviation of intraspecific variation in leaf area (LA)
float sigma_tlp;      //!< Global variable: standard deviation of intraspecific variation in turgor loss point (TLP)
#endif
float corr_CR_height; //!< Global variable: intraspecific correlation between crown radius and maximal height
float corr_N_P;       //!< Global variable: intraspecific correlation between leaf nitrogen and leaf phosphorus
float corr_N_LMA;     //!< Global variable: intraspecific correlation between leaf nitrogen and LMA
float corr_P_LMA;     //!< Global variable: intraspecific correlation between leaf phosphorus and LMA
float cov_N_P;        //!< Global variable: intraspecific covariance between leaf nitrogen and leaf phosphorus
float cov_N_LMA;      //!< Global variable: intraspecific covariance between leaf nitrogen and LMA
float cov_P_LMA;      //!< Global variable: intraspecific covariance between leaf phosphorus and LMA

// Intraspecific arrays migrated to ctx.intra:
// d_intraspecific_height/CR/CD/P/N/LMA/wsg/dbhmax/leafarea/tlp

// LookUpLAImax migrated to ctx.lookup

// THREE DIMENSIONAL LAI FIELD
float **LAI3D(0); //!< Global 3D field: leaf density (per volume unit)
// TREEFALL IMPACT ON TREE HEALTH
unsigned short *Thurt[3]; //!<  Global vector:Treefall field

// Soil globals migrated to ctx.soil:
// nblayers_soil, layer_depth, Sat_SWC, Max_SWC, FC_SWC, Res_SWC, Min_SWC,
// Ksat, a_vgm, b_vgm, c_vgm, m_vgm, phi_e, b, SWC3D, soil_phi3D, Ks, KsPhi,
// LAI_DCELL, LAI_young, LAI_mature, LAI_old, Canopy_height_DCELL, HSum_DCELL,
// TopWindSpeed_DCELL, Interception, Throughfall, Runoff, Leakage, Evaporation,
// Transpiration, transpiration_1016, abund_phi_root, abund10_phi_root, agb_phi_root

// SEED DENSITIES migrated to ctx.species:
// SPECIES_SEEDS, p_seed, n_seed, p_species, n_species,
// SPECIES_GERM, PROB_S

// PointCloud globals migrated to ctx.pc:
// mean_beam_pc, sd_beam_pc, klaser_pc, transmittance_laser, iter_pointcloud_generation

#ifdef Output_ABC
// Output creation for Approximate Bayesian Computation and Summary Statistics calculation. ABC produces large files, so metrics are pre-calculated within TROLL
int chmchange_iter = 43; //!< Global variable: ad-hoc variable. Output at step 43 iterations before the final output, to simulate a suite of successive LiDAR measurements at Nouragues, from March 2012 to October 2015, so 3 * 12 + 7 = 43 !!!UPDATE
// the margins of the ABC analysis, can be smaller than the actually simulated plot to deal with edge effects

int margin;       //!< Global variable: for ABC -- margin used to deal with edge effects
int row_start;    //!< Global variable: for ABC -- row start after margin clipping
int row_end;      //!< Global variable: for ABC -- row end after margin clipping
int col_start;    //!< Global variable: for ABC -- col start after margin clipping
int col_end;      //!< Global variable: for ABC -- col end after margin clipping
int sites_abc;    //!< Global variable: for ABC -- number of sites after margin clipping
int nbvisited;    //!< Global variable: for ABC -- number of visited sites !!!UPDATE
int patch_size;   //!< Global variable: for ABC -- patch size !!!UPDATE
float isites_abc; //!< Global variable: for ABC -- inverse of number of sites after margin clipping

int *chm_field_previous(0);     //!< Global vector: for ABC -- canopy height model (chm) calculated at previous step !!!UPDATE
int *chm_field_current(0);      //!< Global vector: for ABC -- canopy height model (chm) calculated at current step !!!UPDATE
int *chm_field_previous_ALS(0); //!< Global vector: for ABC -- canopy height model (chm) inferred from Airborne Lidar Scanning (ALS) at previous step
int *chm_field_current_ALS(0);  //!< Global vector: for ABC -- canopy height model (chm) inferred from Airborne Lidar Scanning (ALS) at current step
int *chm_field_changes(0);      //!< Global vector: for ABC -- change in canopy height as calculated
int *chm_field_changes_ALS(0);  //!< Global vector: for ABC -- change in canopy height as observed
float **transmittance_simulatedALS(0);
float **transmittance_direct(0);
int **transmittance_simulatedALS_sampling(0);
float GPP_MA[120] = {0.0};        //!< Global variable: moving average of GPP across 120 iterations (originally 120 months, could also be made dependent on iterperyear)
float Litterfall_MA[120] = {0.0}; //!< Global variable: moving average of litterfall across 120 iterations (originally 120 months, could also be made dependent on iterperyear)
float Mortality_MA[120] = {0.0};  //!< Global variable: moving average of mortality across 120 iterations (originally 120 months, could also be made dependent on iterperyear)
float Treefall_MA[120] = {0.0};   //!< Global variable: moving average of treefall across 120 iterations (originally 120 months, could also be made dependent on iterperyear)
#endif

// DIAGNOSTICS OUTPUT STATISTICS migrated to ctx.diag:
// nblivetrees, nbtrees_n10/n30, nbdead_n1/n10/n30,
// nbTreefall1/10/30, nbtrees_carbstarv_n1/n10/n30, nbdbh, layer
// (Output_ABC globals omitted: Output_ABC is #undef'd)

#ifdef CHECK_CARBON
float carbon_assimilated_total; //!< Global variable: --  !!!UPDATE
float carbon_net_total;         //!< Global variable: --  !!!UPDATE
float carbon_stored_leaves;     //!< Global variable: --  !!!UPDATE
float carbon_stored_trunk;      //!< Global variable: --  !!!UPDATE
float carbon_stored_free;       //!< Global variable: --  !!!UPDATE
#endif

// PROCESSORS FOR MPI OPTION
int mpi_rank;     //!< Global variable: processor rank (Message Passing Interface)
int mpi_size;     //!< Global variable: processor number (Message Passing Interface)
int easympi_rank; //!< Global variable: processor rank (easy Message Passing Interface)

// MPI PROCEDURES
#ifdef MPI
unsigned short **LAIc[2];                                        //!< Global 3D field: sharing LAI across boundaries
void MPI_ShareSeed(unsigned char **, int);                       //!< Global MPI function: Communication of border fields in the parallel version of the code
void MPI_ShareField(unsigned short **, unsigned short ***, int); //!< Global MPI function: Communication of fields
void MPI_ShareTreefall(unsigned short **, int);                  //!< Global MPI function: Communication of treefalls
#endif

#ifdef CROWN_UMBRELLA
// TREESHAPE CALCULATIONS
// All these calculations are currently defined as non-member functions, but could potentially be converted to class Tree
// See function description for more details
void GetPPFDabove(int height, int site, float noinput, float (&PPFD)[2]); //!< Global function: PPFD retrieval for function leafarea_max()
#ifdef WATER
void GetCanopyEnvironment(int height, int site, float dens, float (&canopy_environment_cumulated)[6]); //!< Global function: calculates the canopy environment
#else
void GetCanopyEnvironment(int height, int site, float dens, float (&canopy_environment_cumulated)[4]); //!< Global function: calculates the canopy environment
#endif
void AddCrownVolumeLayer(int row_center, int col_center, float height, float CR, float CD, int crownvolume[70]); //!< Global function: calculates packing densities
void UpdateLAI3D(int height, int site, float dens, float &LA_cumulated);                                         //!< Global function: update of LAI3D field, called by CalcLAI()
#ifdef CHM_SPIKEFREE
void UpdateCHMvector(int height, int site, float noinput, vector<int> &chm); //!< Global function: remove outliers in canopy height model (CHM); vector option
void UpdateCHM(int height, int site, float noinput, int *chm);               //!< Global function: remove outliers in canopy height model (CHM)
#endif
void OutputCrownSliced(int height, int site, int row_slice, vector<float> &output_statistics);      //!< Global function: write a slice of a crown to file
void KeepFloatAsIs(float input, float &output, float CD, float height, int layer_fromtop);          //!< Global function: dummy function when no modification is needed
void KeepIntAsIs(int input, int &output, float CD, float height, int layer_fromtop);                //!< Global function: dummy function when no modification is needed
void LAI2dens(float LAI, float &dens_layer, float CD, float height, int layer_fromtop);             //!< Global function: a modifying function that converts LAI to the density of a specific layer, using the GetDensity functions
void LAI2dens_cumulated(float LAI, float &dens_layer, float CD, float height, int layer_fromtop);   //!< Global function: a modifying function that converts LAI to percentage LAI in and above the current layer, using the GetDensity functions; can be used to directly allocate LAI without looping over LAI3D field; new in v.3.1
void GetDensitiesGradient(float LAI, float CD, float &dens_top, float &dens_belowtop, float &dens); //!< Global function: deduces within-crown densities from LAI with a gradient from 50% in top layer to 25% in belowtop and 25% in all shells underneath (1 layer for umbrella-like shape)
void GetDensityUniform(float LAI, float CD, float &dens);                                           //!< Global function: deduces within-crown density from LAI, assuming uniform leaf distribution
int GetCrownIntarea(float radius);                                                                  //!< Global function: converts floating point crown area into integer value, imposing lower and upper limits
float GetRadiusSlope(float CR, float crown_extent, float crown_position);                           //!< Global function: linear decrease of crown radius
float GetRadiusCylinder(float CR, float crown_extent, float crown_position);                        //!< Global function: not currently used, but returns the input radius
template <typename I, typename O, typename M, typename F>
void LoopLayerUpdateCrownStatistic_template(int row_center, int col_center, float height, float CR, float CD, float fraction_filled_target, int shell_fromtop, float GetRadiusLayer(float, float, float), I CrownStatistic_input, O &CrownStatistic_output, M ModifyCrownStatistic_input, F UpdateCrownStatistic_output);
//!< Global function: Template function to loop across crown layer and update
template <typename I, typename O, typename F>
void CircleAreaUpdateCrownStatistic_template(int row_center, int col_center, int pos_start, int pos_end, float fraction_filled_target, float &fraction_filled_actual, int height_layer, I CrownStatistic_input, O &CrownStatistic_output, F UpdateCrownStatistic);
//!< Global function: Template function called by LoopLayerUpdateCrownStatistic_template
#endif

float CalcVcmaxm(float lma, float nmass, float pmass);             //!< Returns Vcmaxm, in micromol C g-1 s-1
float CalcRdark(float lma, float nmass, float pmass, float vcmax); //!< Returns Rdark, in micromol C m-2 s-1
#ifdef G0
float QUAD(float A, float B, float C, int ROOT); //!< Returns solution of quadratic equation (larger root of ROOT=1, smaller root if ROOT=-1)
#endif

// GLOBAL FUNCTIONS
void ReadInputGeneral(Context &ctx);                                //!< Global function: read in global parameter sheet
void Initialise(Context &ctx);                                      //!< Global function: initialisation with bare ground conditions
void InitialiseOutputStreams(void);                                 //!< Global function: initialisation of output streams
void ReadInputInventory(void);                                      //!< Global function: updated in v.3.1: initialisation from inventories
void ReadInputPointcloud(void);                                     //!< Global function: introduced in v.3.1.6: reads the parameter sheet for the point cloud simulation
void AllocMem(Context &ctx);                                        //!< Global function: Field dynamic memory allocation
void Evolution(Context &ctx);                                       //!< Global function: Evolution at each timestep
void UpdateSeeds(void);                                             //!< Global function: Compute field Seed
void UpdateField(void);                                             //!< Global function: Update all fields
void TriggerTreefall(void);                                         //!< Global function: Treefall gap formation; v.2.4
void TriggerTreefallSecondary(void);                                //!< Global function: Secondary treefall gap formation
void FillSeed(int col, int row, int spp);                           //!< Global function: update SPECIES_SEEDS field; v.2.5
void RecruitTree(void);                                             //!< Global function: tree germination module; v.2.5
void Average(void);                                                 //!< Global function: output of the global averages every timestep
void OutputField(void);                                             //!< Global function: output of the field variables every timestep
void OutputSnapshot(fstream &output, bool header, float dbh_limit); //!< Global function: output snapshots of the scene at one point in time
void OutputLAI(fstream &output_transmLAI3D);                        //!< Global function: writes the whole 3D LAI voxel field to file
void OutputCHM(fstream &output_CHM);                                //!< Global function: Outputs CHM
void OutputVisual();                                                //!< Global function: Output function for visualization purposes
void CloseOutputs();
void FreeMem(void);

void ExportPointcloud(float mean_beam, float sd_beam, float klaser, float transmittance_laser, fstream &output_pointcloud); //!< Global function: point cloud output, v.3.1.6; kept separately from other output functions, as we write to a dedicated external file format (.las)

// HELPER FUNCTIONS
int GetTimeofyear();                                          //!< Helper function, new in v.3.1: converts current iteration into time of year, also works backwards (negative iterations)
float CalcHeightBaseline(float &ah, float &hmax, float &dbh); //!< Helper function: calculates mean predicted height from allometry
float CalcCDBaseline(float &height);                          //!< Helper function, new in v.3.1: calculates mean predicted crown radius from allometry
float CalcCRBaseline(float &dbh);                             //!< Helper function new in v.3.1: calculates mean predicted crown diameter from allometry
int CalcIntabsorb(float absorb_prev, float absorb_delta);     //!< Helper function: returns index for LookUpTables of absorbed flux (considering leaves above and within voxel)
int CalcIntabsorb(float absorb_prev);                         //!< Helper function: returns index for LookUpTables of absorbed flux (only considering leaves above voxel)

// DATA READING FUNCTIONS
// update v.3.1: already defined here to enable calling from functions of class Tree()
template <typename N>
void SetParameter(string &parameter_name, string &parameter_value, N &parameter, N parameter_min, N parameter_max, N parameter_default, bool quiet);
void SetParameter(string &parameter_name, string &parameter_value, string &parameter, string parameter_default, bool quiet);

#ifdef WATER
//! Global structure: For GPPleaf FUNCTION
struct leafFluxes
{
    float carbon_flux;
    float water_flux;
};
#endif

#ifdef Output_ABC
// these are functions needed to create ABC output
void InitialiseABC();                                                                                                                                                                                                                                                                                                                                                                                                      //!< Global ABC function: initialise ABC conditions
void UpdateMovingAveragesABC();                                                                                                                                                                                                                                                                                                                                                                                            //!< Global ABC function: yearly statistics
void UpdateDBHtrackingABC();                                                                                                                                                                                                                                                                                                                                                                                               //!< Global ABC function: update DBH function for ABC routines
void UpdateTransmittanceCHM_ABC(int mean_beam, float sd_beam, float klaser, float transmittance_laser);                                                                                                                                                                                                                                                                                                                    //!< Global function: calculating the TROLL transmittance field from simulated LiDAR
void OutputABCWriteHeaders(fstream &output_traitconservation, fstream &output_field, fstream &output_CHM, fstream &output_CHM_ALS, fstream &output_transmittance, fstream &output_transmittance_ALS, fstream &output_LAIfield, fstream &output_LAIfield_ALS, fstream &output_chmpotential, fstream &output_species, fstream &output_species10, fstream &output_traits, fstream &output_traits10, fstream &output_biomass); //!< Global function: write headers for ABC outputs
void OutputABCConservationTraits(fstream &output_traitconservation);                                                                                                                                                                                                                                                                                                                                                       //!< Global ABC function: assesses the conservation of traits between input and output in TROLL
void OutputABC_ground(fstream &output_field);                                                                                                                                                                                                                                                                                                                                                                              //!< Global ABC function: returns ABC ground outputs
void OutputABC_species(fstream &output_species, fstream &output_species10, fstream &output_traits, fstream &output_traits10, fstream &output_biomass);                                                                                                                                                                                                                                                                     //!< Global ABC function: returns ABC outputs for species
void OutputABC_CHM(fstream &output_CHM, fstream &output_CHM_ALS, fstream &output_chmpotential);                                                                                                                                                                                                                                                                                                                            //!< Global function: returns ABC outputs for canopy height model (CHM)
void OutputABC_transmittance(fstream &output_transmittance, fstream &output_transmittance_ALS);                                                                                                                                                                                                                                                                                                                            //!< Global ABC function: ABC outputs
void OutputABC();                                                                                                                                                                                                                                                                                                                                                                                                          //!< Global ABC function: output general ABC statistics
void OutputCHM(fstream &output_CHM);                                                                                                                                                                                                                                                                                                                                                                                       //!< Global ABC function: creates a Canopy Height Model and LAD profile
#endif

#ifdef TRACK_INDIVIDUALS
void TrackingData_andOutput(); //!< Global function: tree level tracking of key variables
#endif

// ###########################################
//! Species class
// ############################################

class Species
{

public:
    int s_nbind;   //!< Number of individuals per species
    int s_nbind10; //!< Number of individuals > 10cm per species
    int s_nbind30; //!< Number of individuals > 30cm per species
    int s_nbext;   //!< Total number of incoming seeds in the simulated plot at each timestep (seed rain) -- v.2.2
    string s_name; //!< Species name, updated to string in v.3.0 (higher flexibility)

#ifdef LCP_alternative
#else
    float s_LCP; //!< Light compensation point  (micromol photon/m^2/s)
#endif
    float s_ds;           //!< Mean seed dispersal distance (m)
    float s_dbhmax;       //!< Maximal dbh (m) !! data usually report dbh in cm
    float s_hmax;         //!< Maximal height (m)
    float s_LMA;          //!< Leaf mass per area (g/m^2)
    float s_Nmass;        //!< Leaf nitrogen concentration (g/g) v.2.01
    float s_Pmass;        //!< Leaf phosphorous concentration (g/g) v.2.01
    float s_wsg;          //!< Wood specific gravity (g/cm^3)
    float s_ah;           //!< Parameter for allometric height-dbh equation
    float s_regionalfreq; //!< Regional frequency; v.3.0 !!!UPDATE
    float s_leafarea;     //!< Drymass; v.3.0  !!!UPDATE
    float s_seedmass;     //!< Seed mass (g); See Baraloto & Forget 2007 dataset v.2.3; deprecated in v.2.2, but still necessary for SEEDTRADEOFF
    float s_iseedmass;    //!< Inverse of seed mass (1/g), v.2.3
    // float s_output_field[12];         // scalar output fields, deprecated since v.3.1, replaced by actual sumstats for readability/code accessibility
    float s_sum1, s_sum10, s_sum30, s_ba, s_ba10, s_agb, s_gpp, s_npp, s_rday, s_rnight, s_rstem, s_litterfall; // species level summary statistics, to be provided to output streams

    float s_tlp; //!< Leaf water potential at turgor loss point (MPa); defined for consistency when WATER is deactivated
#ifdef WATER     // Some of these parameters may include intraspecific variability, as in v.2.4.1.
    // float s_g1;                  // parameter of stomatal conductance model. I went back to a species-specific value of g1 using Lin et al. 2015 relationship or Wu et al. 2019 GCB. It seems needed to well simulate functional shift through a regeneration. Different values of g1 across PFT are also used by Xu et al. 2016 New Phytologist using ED2+SPA on tropical dry forest. See also Domingues, Martinelli, & Ehleringer (2014) and Franks et al. (2018) for values of g1 for an Amazonian forest or potential alternative parameterization of g1 respectively
    // float s_dWSF;               // this is the denominator of WSF, when WSF is a linear normalization of phi_root (ie. s_dWSF= phi_sc - s_tlp, where phi_sc corresponds to the onset of water stress (inducing stomatal and non-stomatal responses), ie. leaf predawn water potential at which WSF starts decreasing <1)
    // float s_phi_lethal,           //!< plant water potential at drought-induced death (MPa)
    // s_itlp,         //!< inverse of s_tlp
    // s_b;            //!< parameter used to compute the water stress factor (WSF) for stomatal limitation
#endif

#ifdef Output_ABC
    float s_dbhmax_realized; //!< Maximum dbh found across individuals from this species
#endif

#ifdef MPI
    unsigned char *s_Gc[4]; //!< MPI: seeds on neighboring procs
#endif

    //! Constructor of the Species class
    Species();

    void Init();
};

vector<Species> S; //!< Definition of a vector of the Species class

// ###########################################
//! Tree class
// ############################################

class Tree
{
public:
    int t_site;              //!< Geolocation of the tree
    int t_NPPneg;            //!< Diagnostic variable: number of consecutive timesteps with NPP<0; v.2.2
    int t_CrownDisplacement; //!< Displacement of the crown center with respect to the stem. Currently not used in TROLL, but required for initialization via the Canopy Constructor algorithm. Its rationale is the same as for t_site, i.e. t_Crown_Displacement = col_displacement + row_displacement * cols, so it can be added to t_site to obtain the geolocation of the crown center; v.2.5
#ifdef MIP_Lichstein
    int t_inInventory;
#endif

    float t_age;       //!< Tree age, also indicates whether tree is alive (live trees are such that t_age > 0.0)
    float t_hmax;      //!< Allometric parameter, not real maximum
    float t_ah;        //!< Allometric parameter, for consistency with t_hmax also an individual parameter; v.2.4
    float t_dbh;       //!< Diameter at breast height (m) beware: this scales with NH, the horizontal size of voxels
    float t_dbhmature; //!< Reproductive size threshold; v.2.3
    float t_dbhmax;    //!< Maximum diameter at breast height (dbh), as estimated from field data
    float t_height;    //!< Total tree height (m) beware: this scales with NV, the vertical size of voxels, renamed v.3.1 for convenience
    float t_CD;        //!< crown depth (m) beware: this scales with NV, the vertical size of voxels, renamed v.3.1 for convenience
    float t_CR;        //!< crown radius (m) beware: this scales with NH, the horizontal size of voxels, renamed v.3.1 for convenience
    float t_Ct;        //!< flexural force threshold, _BASICTREEFALL
    float t_GPP;       //!< Gross primary productivity of the tree (gC/timestep)
    float t_NPP;       //!< Net primary productivity of the tree (gC/timestep)
    float t_Rday;      //!< Daytime leaf respiration of the tree (gC/timestep)
    float t_Rnight;    //!< Nighttime leaf respiration of the tree (gC/timestep)
    float t_Rstem;     //!< Stem respiration (gC/timestep)
    float t_LA;        //!< Total crown leaf area (m^2); v.2.2, renamed in v.3.1 for convenience
    float t_youngLA;   //!< Total young leaf area (m^2); v.2.2
    float t_matureLA;  //!< Total mature leaf area (m^2); v.2.2
    float t_oldLA;     //!< Total old leaf area (m^2); v.2.2
    float t_LAI;       //!< Total leaf area index (m^2/m^2), t_LAI replaces t_dens and average crown leaf density. LAI can be converted into densities; LAI is more relevant given the new dynamic leaf module, and also more informative as output variable; v.2.5
    float t_litter;    //!< Tree litterfall at each timestep, in dry mass (g); v.2.2

    vector<float> t_NDDfield; //!< Tree field useful when option _NDD is activated

#ifdef WATER
    // !!!: suggestion, maybe redefine some quantities via a field (i.e. tree root biomass...) or locally where they are needed (especially if they need to be recomputed every timestep)
    float t_root_depth;                //!< Tree rooting depth (m)
    float t_phi_root;                  //!< Soil water potential in the root zone (MPa)
    vector<float> t_root_biomass;      //!< Tree root biomass in each soil layer, in g
    vector<float> t_soil_layer_weight; //!< Soil layer weight (to compute t_phi_root), if different from root biomass
    float t_WSF;                       //!< Tree water stress factor for stomatal conductance, unitless, between 0 and 1
    float t_WSF_A;                     //!< Tree water stress factor for photosynthetic capacities, unitless, between 0 and 1
    float t_transpiration;             //!< Amount of water taken up from the soil and transpired at each timestep !!!UPDATE: which unit?
    float t_g1_0;
    float t_g1;

#ifdef PHENO_DROUGHT
    int t_Ndays_dry;
    int t_Ndays_wet;
    float t_pheno_factor;
#endif

#endif

    // new in v.2.4.0: traits defined at  individual level
    float t_Pmass; //!< Leaf phosphorus content, defined at tree scale (g/g)
    float t_Nmass; //!< Leaf nitrogen content, defined at tree scale (g/g))
    float t_LMA;   //!< Leaf mass per area (LMA), defined at tree scale (g/m^2)
#ifdef WATER
    float t_leafarea;   //!< Leaf area (LA), defined at tree scale
    float t_tlp;        //!< Leaf turgor loss point (TLP), defined at tree scale
    float t_wleaf;      //!< Leaf width (in m)
    float t_phi_lethal; //!< plant water potential at drought-induced death (MPa)
    float t_itlp;       //!< inverse of t_tlp
    float t_b;          //!< parameter used to compute the water stress factor (WSF) for stomatal limitation
#endif
    float t_wsg;   //!< Wood specific gravity, defined at tree scale (g/cm^3)
    float t_Rdark; //!< Dark respiration rate at PPFD = 0 (micromol C/m^2/s)
    float t_Vcmax; //!< Maximal rate of carboxylation, on an area basis (micromolC/m^2/s)
    float t_Jmax;  //!< Maximal rate of electron transport, on an area basis (micromol/m^2/s)
    // t_Vcmaxm, //maximal rate of carboxylation, on an mass basis (in micromolC/g-1/s), since v.2.4.1 calculated locally
    // t_Jmaxm,  //maximal rate of electron transport, on a mass basis (in micromol/g-1/s), since v.2.4.1 calculated locally
    // t_fci,    //fraction of CO2 partial pressure in intercellular spaces divided by ambiant CO2 partial pressure (both in microbar, or ppm = micromol/mol) -- deprecated in v.2.4.1
    //  t_Gamma, //compensation point for the carboxylation rate, here NORMALIZED by atm CO2 concentration (Cair) -- not used anymore, removed in v.2.4.1
    // t_Km,     //apparent kinetic constant for the rubiscco = Kc*(1+[O]/Ko), here normalized by atm CO2 concentration (Cair) -- deprecated in v.2.4.1
    float t_leaflifespan;  //!< Average leaf lifespan (months) !!!UPDATE: should be in SI units?
    float t_lambda_young;  //!< Residence time in the young leaf class, inverse of young leaf lifespan; v.2.5 !!!UPDATE: which unit?
    float t_lambda_mature; //!< Residence time in the mature leaf class, inverse of mature leaf lifespan; v.2.5  !!!UPDATE: which unit?
    float t_lambda_old;    //!< Residence time in the old leaf class, inverse of old leaf lifespan; v.2.5 !!!UPDATE: which unit?

    float t_mult_height; //!< Intraspecific multiplier for height (due to intraspp lognormal variation); v.2.4.0, renamed v.3.1 for convenience
    float t_mult_CR;     //!< Intraspecific multiplier for crown radius (due to intraspp lognormal variation); v.2.4.0, renamed v.3.1 for convenience
    float t_mult_CD;     //!< Intraspecific multiplier for crown depth (due to intraspp lognormal variation); v.2.4.0, renamed v.3.1 for convenience
    float t_mult_P;      //!< Intraspecific multiplier for leaf phosphorus concentration (due to intraspp lognormal variation); v.2.4.0, renamed v.3.1 for convenience
    float t_mult_N;      //!< Intraspecific multiplier for leaf nitrogen concentration (due to intraspp lognormal variation); v.2.4.0, renamed v.3.1 for convenience
    float t_mult_LMA;    //!< Intraspecific multiplier for leaf mass per area (due to intraspp lognormal variation); v.2.4.0, renamed v.3.1 for convenience
    float t_mult_dbhmax; //!< Intraspecific multiplier for dbh maximum (due to intraspp lognormal variation); v.2.4.0, renamed v.3.1 for convenience
    float t_dev_wsg;     //!< Intraspecific absolution deviation for wood specific gravity (due to intraspp normal variation); v.2.4.0, renamed v.3.1 for convenience
#ifdef WATER
    float t_mult_leafarea; //!< Intraspecific multiplier for leaf area (due to intraspp lognormal variation)
    float t_mult_tlp;      //!< Intraspecific multiplier for turgor loss point (due to intraspp lognormal variation)
#endif

    float t_LAImax;          //!< Maximal LAI; Dynamic adjustment of leaf allocation, based on light environment !!!UPDATE
    float t_LAmax;           //!< Maximal leaf area; Dynamic adjustment of leaf allocation, based on light environment  !!!UPDATE, renamed in v.3.1 for convenience
    float t_carbon_storage;  //!< Persistent C storage pool. If leaf area is optimal, surplus carbon is allocated to a storage pool
    float t_carbon_biometry; //!< Temporary biometry C storage pool. In case a tree is suffering from carbon stress, it will tap this pool to renew its leaves and slow down growth
    float t_fraction_filled; //!< Filled fraction of tree crown (1-gap fraction). Differs from the global fraction: trees with larger variation in CR also have a lower fraction of filled crown area; so intraspp variation in crown radius is decoupled from leaf area and only describes crown size; v.2.5.0

    int t_multiplier_seed; //!< Not documented  !!!UPDATE
    float t_sapwood_area;  //!< Sapwood area !!!UPDATE units, description

#ifdef CROWN_UMBRELLA
    float t_Crown_Slope; //!< Not documented  !!!UPDATE
#endif

    unsigned short
        t_from_Data, //!< Indicator: tree was born through initialisation (1) or through simulation routine (0)
        t_sp_lab,    //!< Stores the species label. Can be defined even if the site is empty (cf. persistence function defined in Chave, Am Nat. 2001)
        t_hurt;      //!< Stories the treefall index: tree is either killed or harmed. In the latter case, t_hurt records the harm level

#ifdef Output_ABC
    float t_dbh_previous; //!< Not documented  !!!UPDATE
#endif

#ifdef TRACK_INDIVIDUALS
    int t_month_born; //!< Not documented  !!!UPDATE

    int t_seedsproduced;              //!< Number of seeds produced in total
    int t_seedsproduced_sumyear;      //!< Number of seed produced in a given year
    int t_time_carbonstarvation;      //!< Total number of iterations in carbon starvation status
    int t_time_carbonstarvation_year; //!< Number of iterations in carbon starvation status in a given year

    float t_GPP_sumyear;            //!< Total GPP for a specific year (gC/yr)
    float t_NPP_sumyear;            //!< Total NPP for a specific year (gC/yr)
    float t_GPPsquared_sumyear;     //!< Squared GPP for a specific year, to calculate standard deviation !!!UPDATE: is that really needed in the class??
    float t_NPPsquared_sumyear;     //!< Squared NPP for a specific year, to calculate standard deviation !!!UPDATE: is that really needed in the class??
    float t_Rday_sumyear;           //!< Total day leaf respiration for a specific year (gC/yr)
    float t_Rnight_sumyear;         //!< Total night leaf respiration for a specific year (gC/yr)
    float t_Rstem_sumyear;          //!< Total stem respiration for a specific year (gC/yr)
    float t_LAIabove_effavgyear;    //!< LAI effectively experienced for each tree, effective, because LAI is not simply averaged, but calculated from average PPFD experienced (maybe in future versions, PPFD could be directly reported)
    float t_carbon_storage_avgyear; //!< Total carbon storage per year

    float t_dbh_tracked;    //!< Stores previous dbh to compute dbh increment
    float t_height_tracked; //!< Stores previous height to compute height increment
    float t_CR_tracked;     //!< Stores previous CR (crown radius) to compute CR increment
    float t_agb_tracked;    //!< Stores previous agb (aboveground biomass) to compute agb increment

    // These variables are used for calculating lifetime means and standard deviations
    float t_LAIcum;            //!< Lifetime LAI (leaf area index), cumulated
    float t_LAIeffcum;         //!< Lifetime effective LAI (leaf area index, computed from inversion of PPFD), cumulated
    float t_GPPcum;            //!< Lifetime GPP (gross primary productivity), cumulated
    float t_NPPcum;            //!< Lifetime NPP (net primary productivity), cumulated
    float t_LAIsquared_cum;    //!< Squared lifetime LAI, to compute standard deviation
    float t_LAIeffsquared_cum; //!< Squared lifetime LAI (effective, i.e. from reversed PPFD), to compute standard deviation
    float t_GPPsquared_cum;    //!< Squared lifetime GPP, to compute standard deviation
    float t_NPPsquared_cum;    //!< Squared lifetime NPP, to compute standard deviation

#endif
    // Constructor
    Tree();

    void Birth(int, int);                                                                                                       //!< Tree birth
    int BirthFromInventory(int site, vector<string> &parameter_names, vector<string> &parameter_values, int &nb_speciesrandom); //!< Tree initialisation from field data, completely updated in v.3.1
    void Death();                                                                                                               //!< Tree death, called by Tree::Update
    void Growth();                                                                                                              //!< Tree growth
#ifdef WATER
    void Fluxh(int h, float &PPFD, float &VPD, float &Tmp, float &leafarea_layer, float &PPFD_incident, float &ExtinctLW); //!< Computation of PPFD right above the tree -- called by Tree::Birth and Tree::Growth
#else
    void Fluxh(int h, float &PPFD, float &VPD, float &Tmp, float &leafarea_layer); //!< Computation of PPFD right above the tree -- called by Tree::Birth and Tree::Growth
#endif

#ifdef WATER
    void Water_availability(); //!< Computation of the tree water availability in the root zone
    // compute root depth, root biomass in each layer, soil water potential in the root zone, and water stress factor
    // see comments at Tree::Water_availability
    // void UpdateRootDistribution();  //compute root depth, root biomass in each layer, soil water potential in the root zone, and water stress factor
    void Water_uptake(); //!< Contribution of trees to the stand Transpiration field -- called by UpdateField
#endif

    void CalcRespGPP();         //!< GPP and respiration calculation, called by Tree::Growth
    void CalcNPP();             //!< NPP calculation, called by Tree::Growth, new in v.3.1
    void UpdateLeafDynamics();  //!< Leaf dynamics and C allocation, called by Tree::Growth
    void UpdateTreeBiometry();  //!< Compute biometric relations, including allometry
    void UpdateVolumeDensity(); //!< Follows updates to leaf dynamics and biometry and computes the new leaf density; v.2.4.1
    //!< - For plastic and shy crowns, moved inside allocation step, otherwise computed straight after other update functions

    void DisperseSeed();        //!< Seed dispersal, called by UpdateField
    void Treefall(float angle); //!< Tree falling function, called by TriggerTreefall
    void Update();              //!< Tree death and growth
    void Average();             //!< Local computation of the averages
    void CalcLAI();             //!< Update of the LAI3D field
    // void CalcLAinitial();            //!< Initialise leaf area and related variables for trees that could not be initialized from data, new in v.3.1, not used yet
    void histdbh(); //!< Computation of dbh histograms

    //! empirical functions for trait calculation and tree level variables (Calc functions return the specific parameter, Update functions update a specific variable at tree level)
    float CalcJmaxm();                       //!< Returns Jmax for for Farquhar model
    float CalcAGB();                         //!< Calculation of above ground biomass (in kg) !!!: if updated, also update CalcIncrementDBH, cf. below
    float CalcIncrementDBH(float delta_agb); //!< Calculation of the increment of dbh from assimilated carbon/biomass (in m)
    float CalcCarbonStorageMax();            //!< Calculation of the maximum amount of carbon stored in a tree
    float CalcCt();                          //!< Calculation of the treefall threshold, if _BASICTREEFALL is activated

    void CalcLeafLifespan();            //!< Determines leaf life span, either from empirical function or from Kikuzawa model
    void InitialiseLeafPools();         //!< Initialises leaf pools for newly germinated trees, formerly part of CalcLeafLifespan(), new in v.3.1 to clear up code
    void UpdateSapwoodArea(float ddbh); //!< Determine sapwood area, limited by increase in dbh (ddbh) (in m2)
    void UpdateHeight();                //!< Updates t_height, based on t_dbh
    void UpdateCR();                    //!< Updates t_CR, based on t_dbh
    void UpdateCD();                    //!< Updates t_CD based on t_height

    // GPP functions are now calculated at tree level
    float DeathRateNDD(float, float, float); //!< Death rate function, including negative density dependence mortality, called when option _NDD is on.
#ifdef WATER
    float DeathRate(float, float, float);                                                 //!< Death rate function, including drought-induced mortality
    leafFluxes FluxesLeaf(float, float, float, float, float, float, float, float, float); //!< Determines the leaf-level temperature, CO2 concentration, and vapour pressure deficit using and iterative scheme, and provides the corresponding leaf-level photosyntehtic assimilation rate (call to Photosyn) and transpiration rate (using penman-Monteith equation) -- depends on light (PPFD), vapor pressure deficit (VPD), temperature (T), and wind (W) //IMmarch 2022: try to account for extinction of net thermal radiation in Rnet iso and of actually absorbed NIR radiation, hence the last two arguments
    leafFluxes dailyFluxesLeaf(float, float, float, float, float, float, float &);        //!< Computation of average C assimilation rate and water evapotranspiration per leaf area across daily variation in light (PPFD), vapor pressure deficit (VPD), temperature (T), and wind (W); //IMmarch 2022: try to account for extinction of net thermal raditiion in Rnet iso, and of actuel NIR absorbed energy, hence the last two arguments
    leafFluxes Photosyn(float, float, float, float);                                      //!< Implements the Farquhar von Caemmerer Berry model of photosynthesis together with the model of stomatal conductance provided by Medlyn et al. (2011).
    void OutputTreeStandard(fstream &output);                                             //!< Standard outputs during the simulation -- written to file
    void OutputTreeStandard();                                                            //!< Standard outputs during the simulation -- written to screen in real time
    // !!!UPDATE: question, why are these two functions needed? the first function with cout as an argument is the same as the second function, no? question2: why are these functions only available in WATER mode?
#else
    float DeathRate(float, float);                   //!< Death rate function
    float GPPleaf(float, float, float);              //!< Farquhar von Caemmerer Berry model -- computation of the light-limited leaf-level average C assimilation rate per m^2 (micromol/m^2/s) -- depends on daily variation in light (PPFD), vapor pressure deficit (VPD) and temperature (T)
    float dailyGPPleaf(float, float, float);         //!< Computation of average C assimilation rate per leaf area across daily variation in light (PPFD), vapor pressure deficit (VPD) and temperature (T)
    float dailyGPPcrown(float, float, float, float); //!< Farquhar von Caemmerer Berry model -- proposition of reinsertion of fastdailyGPPleaf() as dailyGPPcrown(), main reason: despite sharing some code with dailyGPPleaf, structurally very different, updated in v.2.5, replaced dens * CD by LAI
#endif
    float Rdayleaf(float T);      //!< !!!UPDATE
    float dailyRdayleaf(float T); //!< !!!UPDATE

    void CalcLAImax();                                       //!< Determines the maximum LAI that the tree should reach, given the Farquhar model, at a theoretical average day, up to which point leaves can be allocated and until which the costs (self-shading) are lower than the benefits (additional assimilation), renamed in v.3.1
    void CalcLAmax(float &LAIexperienced_eff, float &LAmax); //!<  Unlike CalcLAImax, calculates the maximum leafarea for the current light environment the tree experiences rather than for a theoretical day, renamed in v.3.1
    float predLeafLifespanKikuzawa();                        //!< Kikuzawa model for leaf lifespan
    float GetCrownAreaFilled(float crown_area);              //!< Calculate the crown area filled by leaves (only relevant for crown gap fractions > 0.0)

#ifdef TRACK_INDIVIDUALS
    float StartTracking(); //!< Diagnostic function to track trees born at a reference year
#endif
};

vector<Tree> T; //!< Definition of a vector of the Tree class

//// UTIL Templates

template <typename N>
bool AreEqual(N value1, N value2, int precision)
{
    return abs(value1 - value2) < pow(10, -precision); // make sure that namespace std is activated, otherwise abs is only defined for integers
}

string GetParameter(string &parameter_name, vector<string> &parameter_names, vector<string> &parameter_values)
{
    unsigned int parameter_index = 0;
    while (parameter_index < parameter_names.size() && parameter_names[parameter_index] != parameter_name)
    {
        parameter_index++;
    }

    /* if (parameter_name=="s_name") {
         for (int i=0; i<=parameter_names.size(); i=i+1) cout << parameter_names[i] << "=" << parameter_values[i] << "\t";
         cout << endl;
         cout << parameter_names[parameter_index] << " ="  << parameter_values[parameter_index] << endl;
         cout << parameter_names.size() << "\t"  << parameter_values.size() << endl;

     }*/
    string parameter_value;
    if (parameter_index < parameter_names.size())
        parameter_value = parameter_values[parameter_index];
    else
    {
        parameter_value = ""; // should not happen, potentially throw warning
        cout << "Problem finding parameter " << parameter_name << " please check input string in parameter definitions." << endl;
    }
    return (parameter_value);
}

template <typename N>
void CompareParameters(N &parameter_value, N parameter_min, N parameter_max, N parameter_default, string &parameter_name, vector<string> &parameter_names, vector<string> &parameter_values, bool quiet)
{
    // function could be used to systematically compare empirically provided values and computed values
    // since this could result in a lot of computation and output during initialisation, we rather print out a Snapshot of the initial configuration, to be compared to input
    N parameter_value_emp;
    string parameter_value_emp_string = GetParameter(parameter_name, parameter_names, parameter_values);
    SetParameter(parameter_name, parameter_value_emp_string, parameter_value_emp, parameter_min, parameter_max, parameter_default, quiet);
    if (parameter_value_emp != parameter_default)
    {
        int precision = 4;
        bool equal = AreEqual(parameter_value, parameter_value_emp, precision);
        if (!equal)
            cout << "Supplied parameter " << parameter_name << " does not correspond to calculated value at precision " << precision << endl;
    }
}
