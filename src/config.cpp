#include "config.hpp"

// configuration & input path variables definition
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

// output path variables definition
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

