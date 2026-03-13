#ifndef TROLL_CONTEXT_HPP
#define TROLL_CONTEXT_HPP

#include <fstream>
#include <vector>
#include <string>
#include <gsl/gsl_rng.h>
#include <gsl/gsl_matrix.h>
#include <gsl/gsl_vector.h>

// Forward declaration
struct Species;
struct Tree;

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
    char *bufi = nullptr;
    char *bufi_daytimevar = nullptr;
    char *bufi_climate = nullptr;
    char *bufi_soil = nullptr;
    char *buf = nullptr;
    char *bufi_data = nullptr;
    char *bufi_pointcloud = nullptr;
    char *bufi_dataSWC = nullptr;
    char *bufi_species = nullptr;
};

struct OutputConfig
{
    std::fstream output_info;
    std::fstream output_basic[4];
    std::fstream output_extended[9];
    std::fstream output_visual[2];
    std::fstream output_pointcloud;
#ifdef MIP_Lichstein
    std::fstream output_MIP_eco;
    std::fstream output_MIP_ind;
#endif
#ifdef Output_ABC
    std::fstream output_abc[11];
#endif
#ifdef WATER
    std::fstream output[40];
#endif
#ifdef TRACK_INDIVIDUALS
    std::fstream output_track[3];
#endif
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
    bool _OUTPUT_extended;
    bool _OUTPUT_inventory;
    int _LA_regulation;
    int _OUTPUT_pointcloud;
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
    int *site_DCELL = nullptr;
    float i_sites_per_dcell;
    int HEIGHT;
    int SBORD;
    float NV;
    float NH;
    float LV;
    float LH;
    int RMAX;
    int dbhmaxincm;
    int leafdem_resolution;
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
    float timestep;
};

struct Climate
{
    std::vector<float> DailyMeanTemperature;
    std::vector<float> DailyMeanIrradiance;
    std::vector<float> DailyMeanVapourPressureDeficit;
    std::vector<float> NightTemperature;
    std::vector<float> Rainfall;
    std::vector<float> DailyMeanWindSpeed;

    std::vector<float> varday_light;
    std::vector<float> varday_vpd;
    std::vector<float> varday_T;
    std::vector<float> varday_WS;

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

    float *WDailyMean_all = nullptr;
    float *VPDDailyMean_all = nullptr;
    float *tDailyMean_all = nullptr;
    float *windDailyMean_all = nullptr;
};

struct LookupTables
{
    int nbTbins;
    float iTaccuracy;

    float *LookUp_KmT = nullptr;
    float *LookUp_GammaT = nullptr;
    float *LookUp_VcmaxT = nullptr;
    float *LookUp_JmaxT = nullptr;
    float *LookUp_Rleaf = nullptr;
    float *LookUp_flux_absorption = nullptr;
    float *LookUp_flux = nullptr;
    float *LookUp_ExtinctLW = nullptr;
    float *LookUp_VPD = nullptr;
    float *LookUp_T = nullptr;
    float *LookUp_Rstem = nullptr;
    int LookUp_Crown_site[2601];

    int nbVPDbins;
    float iVPDaccuracy;

    float **LookUp_INLR = nullptr;
    float *LookUp_SLOPE = nullptr;
    float *LookUp_GRADN = nullptr;

    int nbHbins;
    float iHaccuracy;

    float *LookUp_Wind = nullptr;

    std::vector<float> LookUpLAImax;
};

struct Soil
{
    int nblayers_soil;
    float *layer_depth = nullptr;

    float *Sat_SWC = nullptr;
    float *Max_SWC = nullptr;
    float *FC_SWC = nullptr;
    float *Res_SWC = nullptr;
    float *Min_SWC = nullptr;

    float *Ksat = nullptr;
    float *a_vgm = nullptr;
    float *b_vgm = nullptr;
    float *c_vgm = nullptr;
    float *m_vgm = nullptr;
    float *phi_e = nullptr;
    float *b = nullptr;

    float **SWC3D = nullptr;
    float **soil_phi3D = nullptr;
    float **Ks = nullptr;
    float **KsPhi = nullptr;
    float **Transpiration = nullptr;

    float **LAI_DCELL = nullptr;

    float *LAI_young = nullptr;
    float *LAI_mature = nullptr;
    float *LAI_old = nullptr;

    float *Canopy_height_DCELL = nullptr;
    int *HSum_DCELL = nullptr;
    float *TopWindSpeed_DCELL = nullptr;

    float *Interception = nullptr;
    float *Throughfall = nullptr;
    float *Runoff = nullptr;
    float *Leakage = nullptr;
    float *Evaporation = nullptr;

    float transpiration_1016;
    float abund_phi_root;
    float abund10_phi_root;
    float agb_phi_root;
};

struct Diagnostics
{
    int nblivetrees;
    int nbtrees_n10, nbtrees_n30;
    int nbdead_n1, nbdead_n10, nbdead_n30;
    int nbTreefall1, nbTreefall10, nbTreefall30;
    int nbtrees_carbstarv_n1, nbtrees_carbstarv_n10, nbtrees_carbstarv_n30;

    int *nbdbh = nullptr;
    float *layer = nullptr;
};

struct PointCloud
{
    float mean_beam_pc;
    float sd_beam_pc;
    float klaser_pc;
    float transmittance_laser;
    int iter_pointcloud_generation;
};

struct RNGState
{
    gsl_rng *gslrand = nullptr;
    gsl_matrix *mcov_N_P_LMA = nullptr;
    gsl_vector *mu_N_P_LMA = nullptr;
    gsl_vector *variation_N_P_LMA = nullptr;
    int covariance_status;
};

struct SpeciesState
{
    int **SPECIES_SEEDS = nullptr;
    double *p_seed = nullptr;
    unsigned int *n_seed = nullptr;

    double *p_species = nullptr;
    unsigned int *n_species = nullptr;

    int *SPECIES_GERM = nullptr;
    float *PROB_S = nullptr;
};

struct Intraspecific
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

    // Standard deviations and correlations for intraspecific variation
    float sigma_height;
    float sigma_CR;
    float sigma_CD;
    float sigma_P;
    float sigma_N;
    float sigma_LMA;
    float sigma_wsg;
    float sigma_dbhmax;
    float sigma_leafarea;
    float sigma_tlp;

    float corr_CR_height;
    float corr_N_P;
    float corr_N_LMA;
    float corr_P_LMA;
    float cov_N_P;
    float cov_N_LMA;
    float cov_P_LMA;
};

struct CrownGeometry
{
    float crown_gap_fraction;
    float shape_crown;
    float Rndd, deltaR, deltaD;

    float BAtot;

    int extent_visual;
    int mincol_visual, maxcol_visual;
    int minrow_visual, maxrow_visual;
    int minrow_visual_slice, maxrow_visual_slice;
};

struct SimParams
{
    // Light and photosynthesis
    float p_nonvert;
    float SWtoPPFD;
    float PPFDtoSW;
    float klight;
    float kpar;
    float phi;
    float theta;
    float absorptance_leaves;
    float alpha;
    float g1;
    float g0;

    // CO2 / atmosphere
    float Cair;
    float iCair;
    float PRESS;

    // Phenology drought response
    float pheno_a0;
    float pheno_b0;
    float pheno_delta;

    // Tree allometry
    float H0;
    float DBH0;
    float CD0;
    float CD_a;
    float CD_b;
    float CR_a;
    float CR_b;
    float CR_min;
    float dens;
    float fallocwood;
    float falloccanopy;
    float vC;

    // Mortality
    float m;
    float m1;
    float p_tfsecondary;
    float hurt_decay;

    // Seed dispersal
    float Cseedrain;
    float nbs0;
};

struct SimFields
{
    float **LAI3D = nullptr;
    unsigned short *Thurt[3];
};

struct Context
{
    FileIO fileio;
    InputBuffers buffers;
    ModelOptions opt;
    Grid grid;
    TimeState time;
    Climate climate;
    LookupTables lookup;
    Soil soil;
    Diagnostics diag;
    PointCloud pc;
    RNGState rng;
    SpeciesState species;
    Intraspecific intra;
    CrownGeometry crown;
    SimParams params;
    SimFields field;
    OutputConfig out;   // last: large fstream objects, accessed rarely
};

#endif