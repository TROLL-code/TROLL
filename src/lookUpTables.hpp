#pragma once

//
// Global LUT metadata
//
extern int nbTbins;   // typically = 500
extern int nbVPDbins; // typically = 600 (WATER only)
extern int nbHbins;   // typically = 2000 (WATER only)

//
// 1. Temperature-binned (size nbTbins)
//
extern float *LookUp_KmT;
extern float *LookUp_GammaT;
extern float *LookUp_VcmaxT;
extern float *LookUp_JmaxT;
extern float *LookUp_Rleaf;
extern float *LookUp_Rstem;

//
// 2. WATER-dependent LUTs
//
#ifdef WATER
// INLR is a 2D lookup table: nbTbins × nbVPDbins
extern float **LookUp_INLR;

// Size nbTbins each
extern float *LookUp_SLOPE;
extern float *LookUp_GRADN;

// Size nbHbins
extern float *LookUp_Wind;
#endif

//
// 3. Flux LUTs (fixed size = 80000)
//
extern float *LookUp_flux_absorption;
extern float *LookUp_flux;
extern float *LookUp_ExtinctLW;
extern float *LookUp_VPD;
extern float *LookUp_T;

//
// 4. Crown LUT (fixed size = 2601)
//
extern int LookUp_Crown_site[2601];

//
// The initializer itself (already existing in mainTROLL)
//
void InitialiseLookUpTables();