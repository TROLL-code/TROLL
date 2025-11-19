#include "config.hpp"
//
// configuration & input path variables definition
//
char Config::buffer[256];
char* Config::buf = nullptr;
char Config::inputfile[256];
char* Config::bufi = nullptr;
char Config::inputfile_daytimevar[256];
char* Config::bufi_daytimevar = nullptr;
char Config::inputfile_climate[256];
char* Config::bufi_climate = nullptr;
char Config::inputfile_soil[256];
char* Config::bufi_soil = nullptr;
char Config::outputinfo[256];
char Config::inputfile_inventory[256];
char* Config::bufi_data = nullptr;
char Config::inputfile_pointcloud[256];
char* Config::bufi_pointcloud = nullptr;
#ifdef WATER
char Config::inputfile_SWC[256];
char* Config::bufi_dataSWC = nullptr;
#endif
char Config::inputfile_species[256];
char* Config::bufi_species = nullptr;
//
// output path variables definition
//
std::fstream Config::output_info;
std::fstream Config::output_basic[4];
std::fstream Config::output_extended[9];
std::fstream Config::output_visual[2];
std::fstream Config::output_pointcloud;
#ifdef MIP_Lichstein
std::fstream Config::output_MIP_eco;
std::fstream Config::output_MIP_ind;
#endif
#ifdef Output_ABC
std::fstream Config::output_abc[11];
#endif
#ifdef WATER
std::fstream Config::output[40];
// std::fstream Config::output_water[10];
#endif
#ifdef TRACK_INDIVIDUALS
std::fstream Config::output_track[3];
#endif
//
// user controls
//
bool Config::_NONRANDOM = false;
bool Config::_GPPcrown = false;
bool Config::_BASICTREEFALL = false;
bool Config::_SEEDTRADEOFF = false;
bool Config::_NDD = false;
bool Config::_CROWN_MM = false;
bool Config::_OUTPUT_extended = false;
bool Config::_OUTPUT_inventory = false;
bool Config::_FromInventory = false;
bool Config::_sapwood = false;
bool Config::_seedsadditional = false;
bool Config::_LL_parameterization = false;
int Config::_LA_regulation = 0;
int Config::_OUTPUT_pointcloud = 0;
int Config::_SOIL_LAYER_WEIGHT = 0;
int Config::_WATER_RETENTION_CURVE = 0;
//
// random number generator
//
gsl_rng* Config::gslrand = nullptr;
gsl_matrix* Config::mcov_N_P_LMA = nullptr;
gsl_vector* Config::mu_N_P_LMA = nullptr;
gsl_vector* Config::variation_N_P_LMA = nullptr;
int Config::covariance_status = 0; 
//
// time variables
//
int Config::iterperyear = 0;  // Initialize to a sensible default or leave uninitialized if set elsewhere
int Config::nbiter = 0;
int Config::iter = 0;
int Config::nbout = 0;
int Config::freqout = 0;
#ifdef FULL_CLIMATE
int Config::nbdays = 0;
#endif // FULL_CLIMATE
float Config::timestep = 0.0f;

