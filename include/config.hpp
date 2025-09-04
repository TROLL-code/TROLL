#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <fstream>

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
};

#endif // CONFIG_HPP