#ifndef CONFIG_HPP
#define CONFIG_HPP

#include "troll_defines.hpp"

class Config
{
public:
    static char buffer[256], inputfile[256], inputfile_daytimevar[256], inputfile_climate[256], inputfile_soil[256], outputinfo[256], inputfile_inventory[256], inputfile_pointcloud[256], *bufi, *bufi_daytimevar, *bufi_climate, *bufi_soil, *buf, *bufi_data, *bufi_pointcloud; //!< Global variable: static character strings used to read file names, or other features
#ifdef WATER
    static char inputfile_SWC[256], *bufi_dataSWC;
#endif
    static char inputfile_species[256], *bufi_species; //!< Global variable: vector of input files

};

#endif // CONFIG_HPP