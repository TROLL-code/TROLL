#ifndef TROLL_CONTEXT_HPP
#define TROLL_CONTEXT_HPP

#include <vector>

//
// ===============================
//   TROLL Context (Grouped)
// ===============================
//   Every global from mainTROLL4.0.cpp
//   grouped by subsystem
//

struct FileIO
{
    char buffer[256];
    char inputfile[256];
    char inputfile_daytimevar[256];
    char inputfile_climate[256];
    char inputfile_soil[256];
    char outputinfo[256];
    char inputfile_inventory[256];
    char inputfile_pointcloud[256];
    char inputfile_SWC[256];
    char inputfile_species[256];
};

struct InputBuffers
{
    char *bufi;
    char *bufi_daytimevar;
    char *bufi_climate;
    char *bufi_soil;
    char *buf;
    char *bufi_data;
    char *bufi_pointcloud;
    char *bufi_dataSWC;
    char *bufi_species;
};

struct OutputConfig
{
    int output_info;
    int output_basic[4];
    int output_extended[9];
    int output_visual[2];
    int output_pointcloud;
    int output[40];

    bool _OUTPUT_extended;
    bool _OUTPUT_inventory;
    int _OUTPUT_pointcloud;
};

struct ModelOptions
{
    bool _NONRANDOM;
    bool _GPPcrown;
    bool _BASICTREEFALL;
    bool _SEEDTRADEOFF;
    bool _NDD;
    bool _CROWN_MM;
    bool _sapwood;
    bool _seedsadditional;
    bool _LL_parameterization;

    bool _FromInventory;
    int _LA_regulation;
    int _SOIL_LAYER_WEIGHT;
    int _WATER_RETENTION_CURVE;
};

struct Grid
{
    int sites;
    int cols;
    int rows;
    int nbspp;

    int length_dcell;
    int linear_nb_dcells;
    int sites_per_dcell;
    int nbdcells;
    int *site_DCELL;

    float i_sites_per_dcell;
};

struct TimeState
{
    int iterperyear;
    int nbiter;
    int iter;
    int nbout;
    int freqout;

    int nbdays;

    int nbsteps_varday;
    float inv_nbsteps_varday;
    float nbhours_covered;
};

//
// Climate variables
//
struct Climate
{
    int varday_light;
    int varday_vpd;
    int varday_T;
    int varday_WS;

    int DailyMeanTemperature;
    int DailyMeanIrradiance;
    int DailyMeanVapourPressureDeficit;
    int NightTemperature;
    int Rainfall;
    int DailyMeanWindSpeed;

    float tnight;
    float precip;
    float WSDailyMean;
    float WDailyMean;
    float tDailyMean;
    float VPDDailyMean;

    float WDailyMean_year;
    float tDailyMean_year;
    float VPDDailyMean_year;
    float windDailyMean_year;
    float Tnight_year;

    float *WDailyMean_all;
    float *VPDDailyMean_all;
    float *tDailyMean_all;
    float *windDailyMean_all;
};

//
// Photosynthesis & radiation parameters
//
struct PhotosynthesisParams
{
    float NV, NH, LV, LH;
    float timestep;
    float p_nonvert;
    float Cseedrain;
    float nbs0;
    float Cair;
    float PRESS;
    float iCair;

    float crown_gap_fraction;
    float shape_crown;

    float Rndd;
    float deltaR;
    float deltaD;
    float BAtot;

    float SWtoPPFD;
    float PPFDtoSW;

    float klight;
    float kpar;
    float phi;
    float theta;
    float absorptance_leaves;

    float g1;
    float g0;

    float pheno_a0;
    float pheno_b0;
    float pheno_delta;

    float alpha;
    float vC;
    float H0;
    float DBH0;
    float CD0;

    float fallocwood;
    float falloccanopy;
    float dens;
    float CD_a;
    float CD_b;
    float CR_a;
    float CR_b;
    float CR_min;

    float p_tfsecondary;
    float hurt_decay;

    float m;
    float m1;
};

//
// Lookup tables (temperature, VPD, hydraulic, etc.)
//
struct LookupTables
{
    int nbTbins;
    float iTaccuracy;

    float *LookUp_KmT;
    float *LookUp_GammaT;
    float *LookUp_VcmaxT;
    float *LookUp_JmaxT;
    float *LookUp_Rleaf;
    float *LookUp_flux_absorption;
    float *LookUp_flux;
    float *LookUp_ExtinctLW;
    float *LookUp_VPD;
    float *LookUp_T;
    float *LookUp_Rstem;

    int LookUp_Crown_site[2601];

    int nbVPDbins;
    float iVPDaccuracy;
    float **LookUp_INLR;
    float *LookUp_SLOPE;
    float *LookUp_GRADN;

    int nbHbins;
    float iHaccuracy;
    float *LookUp_Wind;
};

//
// Soil state
//
struct SoilState
{
    int nblayers_soil;

    float *layer_depth;
    float *Sat_SWC;
    float *Max_SWC;
    float *FC_SWC;
    float *Res_SWC;
    float *Min_SWC;
    float *Ksat;
    float *a_vgm;
    float *b_vgm;
    float *c_vgm;
    float *m_vgm;
    float *phi_e;
    float *b;

    float **SWC3D;
    float **soil_phi3D;
    float **Ks;
    float **KsPhi;

    float **LAI_DCELL;
    float *LAI_young;
    float *LAI_mature;
    float *LAI_old;

    float *Canopy_height_DCELL;
    int *HSum_DCELL;
    float *TopWindSpeed_DCELL;
    float *Interception;
    float *Throughfall;
    float *Runoff;
    float *Leakage;
    float *Evaporation;

    float **Transpiration;

    float transpiration_1016;

    float abund_phi_root;
    float abund10_phi_root;
    float agb_phi_root;
};

//
// Tree geometry & canopy maps
//
struct TreeGeometry
{
    int HEIGHT;
    int dbhmaxincm;
    int RMAX;
    int SBORD;
    int leafdem_resolution;

    int extent_visual;
    int mincol_visual;
    int maxcol_visual;
    int minrow_visual;
    int maxrow_visual;
    int minrow_visual_slice;
    int maxrow_visual_slice;
};

//
// Intraspecific trait distributions (large arrays)
//
struct IntraspecificDistributions
{
    float d_intraspecific_height[10000];
    float d_intraspecific_CR[10000];
    float d_intraspecific_CD[10000];
    float d_intraspecific_P[10000];
    float d_intraspecific_N[10000];
    float d_intraspecific_LMA[10000];
    float d_intraspecific_wsg[10000];
    float d_intraspecific_dbhmax[10000];
    float d_intraspecific_leafarea[10000];
    float d_intraspecific_tlp[10000];

    int LookUpLAImax;
};

//
// Species and seed state
//
struct SpeciesState
{
    int **SPECIES_SEEDS;
    double *p_seed;
    unsigned int *n_seed;

    double *p_species;
    unsigned int *n_species;

    int *SPECIES_GERM;
    float *PROB_S;
};

//
// Diagnostic counters
//
struct Diagnostics
{
    int nblivetrees;
    int nbtrees_n10;
    int nbtrees_n30;

    int nbdead_n1;
    int nbdead_n10;
    int nbdead_n30;

    int nbTreefall1;
    int nbTreefall10;
    int nbTreefall30;

    int nbtrees_carbstarv_n1;
    int nbtrees_carbstarv_n10;
    int nbtrees_carbstarv_n30;

    int *nbdbh;
    float *layer;
};

//
// Point Cloud module
//
struct PointCloud
{
    float mean_beam_pc;
    float sd_beam_pc;
    float klaser_pc;
    float transmittance_laser;

    int iter_pointcloud_generation;
};

//
// MPI-related
//
struct MPIState
{
    int mpi_rank;
    int mpi_size;
    int easympi_rank;
};

//
// Global species & time parameters
//
struct GlobalCounters
{
    int S;
    int T;
};

//
// =====================
//       MAIN CONTEXT
// =====================
struct Context
{
    FileIO fileio;
    InputBuffers buffers;
    OutputConfig out;
    ModelOptions opt;
    Grid grid;
    TimeState time;
    Climate climate;
    PhotosynthesisParams photo;
    LookupTables lookup;
    SoilState soil;
    TreeGeometry geom;
    IntraspecificDistributions intra;
    SpeciesState species;
    Diagnostics diag;
    PointCloud pc;
    MPIState mpi;
    GlobalCounters global;
};

#endif