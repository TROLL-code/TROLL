#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <fstream>
#include <gsl/gsl_math.h>
#include <gsl/gsl_randist.h>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_test.h>
#include <gsl/gsl_ieee_utils.h>
#include <gsl/gsl_linalg.h>
#include <gsl/gsl_errno.h>

#include "troll_defines.hpp"

class Config
{
public:
    static char buffer[256], inputfile[256], inputfile_daytimevar[256], inputfile_climate[256], inputfile_soil[256], outputinfo[256], inputfile_inventory[256], inputfile_pointcloud[256], *bufi, *bufi_daytimevar, *bufi_climate, *bufi_soil, *buf, *bufi_data, *bufi_pointcloud; //!< Global variable: static character strings used to read file names, or other features
#ifdef WATER
    static char inputfile_SWC[256], *bufi_dataSWC;
#endif
    static char inputfile_species[256], *bufi_species; //!< Global variable: vector of input files

    // FILE OUTPUT STREAMS. Updated in v.3.1 to reduce number of streams and increase clarity
    static std::fstream output_info;        //!< Global variable:  basic simulation information
    static std::fstream output_basic[4];    //!< Global variable:  default output streams, always used
    static std::fstream output_extended[9]; //!< Global variable:  extended TROLL outputs, preserved from previous versions, might need further clean-up
    static std::fstream output_visual[2];   //!< Global variable: outputs for visualization/gif creation, new in v.3.1.2
    static std::fstream output_pointcloud;  //!< Global variable: optional las file output, new in v.3.1.6
#ifdef MIP_Lichstein
    static std::fstream output_MIP_eco;
    static std::fstream output_MIP_ind;
#endif

#ifdef Output_ABC
    static std::fstream output_abc[11]; //!< Global variable: output streams for Approximate Bayesian Computation
#endif

#ifdef WATER
    static std::fstream output[40]; //!< Global variable: output files
// static std::fstream output_water[10];           //!< Global variable: output streams for water module (in development), to be modified
#endif

#ifdef TRACK_INDIVIDUALS
    static std::fstream output_track[3]; //!< Global variable: output streams for tracking of trees
#endif

    // USER CONTROLS. Options that can be turned on (1) or off (0). This comes at computational cost: where routines have to be called frequently, if-conditioning should be done as far outside the loop as possible (e.g. for DAYTIMELIGHT outside voxel loops) .Options are set below, but inclusion in parameter sheet needed (for control from R)
    static bool _NONRANDOM;            //!< User control: If _NONRANDOM == 1, the seeds for the random number generators will be kept fixed at 1, for bug fixing
    static bool _GPPcrown;             //!< User control: This defines an option to compute only GPP from the topmost value of PPFD and GPP, instead of looping within the crown.
    static bool _BASICTREEFALL;        //!< User control: if defined: treefall is a source of tree death (and if TREEFALL not defined, this is modeled through simple comparison between tree height and a threshold t_Ct, if not defined, treefall is not represented as a separated and independent source of death, but instead, all tree death are due to the deathrate value)
    static bool _SEEDTRADEOFF;         //!< User control: if defined: the number of seeds produced by each tree is determined by the tree NPP allocated to reproduction and the species seed mass, otherwise the number of seeds is fixed; besides, seedling recruitment in one site is not made by randomly and 'equiprobably' picking one species among the seeds present at that site but the probability of recruitment among the present seeds is proportional to the number of seeds (in s_Seed[site]) time the seed mass of each species
    static bool _NDD;                  //!< User control: if defined, negative density dependant processes affect both the probability of seedling recruitment and the local tree death rate. The term of density-dependance is computed as the sum of conspecific tree basal area divided by their distance to the focal tree within a neighbourhood (circle of radius 15m)
    static bool _CROWN_MM;             //!< User control: new in v.2.4.1: Michaelis Menten allometry for crowns instead of power law, since v.2.5: not a macro anymore, but set at runtime (little overhead since queried only once at birth and once per timestep), !!!: power law is the default. If Michaelis Menten type allometry is activated, the parameters have to be changed in input sheet accordingly
    static bool _OUTPUT_extended;      //!< User control: changed in v.3.1 from _OUTPUT_reduced to _OUTPUT_extended, uses extended set of output streams
    static bool _OUTPUT_inventory;     //!< User control: added in v4.0 to ease stop and start from inventories.
    static bool _FromInventory;        //!< User control: if defined, an additional input file can be provided to start simulations from an existing data set or a simulated data set (5 parameters are needed: x and y coordinates, dbh, species_label, species
    static bool _sapwood;              //!< User control: two ways of parameterising sapwood density: constant thickness (0), Fyllas, but with lower limit (1)
    static bool _seedsadditional;      //!< User control: excess carbon into seeds? no/yes=(0/1)
    static bool _LL_parameterization;  //!< User control: two ways for parameterising leaf lifespan: empirical (derived by Sylvain Schmitt, TODO: from which data?), Kikuzawa model (0,1)
    static int _LA_regulation;         //!< User control: updated v.3.1: potentially three ways of parameterising leaf dynamic allocation, but currently using only two ways: no regulation (0), never exceed LAImax, i.e. the maximum LAI under full sunlight (1), adjust LAI to the current light environment (2). To switch between option 1 and 2, only one line is necessary in CalcLAmax()
    static int _OUTPUT_pointcloud;     //!< User control: ATTENTION! At the moment assumes a little-endian system (most personal computers, but not necessarily server systems), because LAS fles are in little-endian! If == 1, creates a point cloud from a simplified ALS simulation;
    static int _SOIL_LAYER_WEIGHT;     // !< User control: three ways of computing the fraction of transpiration supplied by each soil layer in individual tree total transpiration, and to weight the tree average water potential in the root zone. (0: root biomass only, 1: relative root-to soil conductance, 2: relative estimated maximal transpiration as in Duursma & Medlyn 2012).
    static int _WATER_RETENTION_CURVE; // !< User control: different water retention curves can be used. So far two are have been implemented: either brooks & Corey (0), either van Genuchten-Mualem (1). To each wtare retention cirve option is associated a different set of pedo-transfer functions, see Table 2 (texture-based Tomasella & Hodnett 1998

    // Random number generator for trait covariance calculation
    static gsl_rng *gslrand;                           //!< Global variable: random number generator
    static gsl_matrix *mcov_N_P_LMA;                   //!< Global variable: covariance matrix for leaf_properties
    static gsl_vector *mu_N_P_LMA, *variation_N_P_LMA; //!< Global variable: mean values of the distributions and the output vector for the multivariate draw
    static int covariance_status;                      //!< Global variable: covariance status: if one of N, P, or LMA has zero variation, the Cholesky decomposition fails, we then use no correlation at all

    // TIME variables
    static int iterperyear; //!< number of iterations per year (=12 if monthly timestep, =365 if daily timestep)
    static int nbiter;      //!< total number of timesteps
    static int iter;        //!< current timestep
    static int nbout;       //!< number of outputs
    static int freqout;     //!< frequency HDF outputs
#ifdef FULL_CLIMATE
    static int nbdays;     //!< number of days with explicit daily climate variation provided in input
#endif
    static float timestep; //!< duration of one timestep (in years) = 1/iterperyear
};

#endif // CONFIG_HPP