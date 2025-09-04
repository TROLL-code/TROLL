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
