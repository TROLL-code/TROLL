#include "lookUpTables.hpp"
#include "lookUpTables_cache.hpp"

#include <fstream>
#include <iostream>
#include <filesystem> // C++17 feature

static const char *LUT_CACHE_FILE = "./.troll_cache/lut.bin";

// --- Save LUTs to file -------------------------------------------------------

bool SaveLookUpTablesToCache()
{

    // Create the directory if it doesn't exist
    std::filesystem::path cacheDir = ".troll_cache";
    if (!std::filesystem::exists(cacheDir))
    {
        if (!std::filesystem::create_directory(cacheDir))
        {
            std::cerr << "Failed to create directory: " << cacheDir << "\n";
            return false;
        }
    }

    std::ofstream out(LUT_CACHE_FILE, std::ios::binary);
    if (!out)
    {
        std::cerr << "Cannot open LUT cache for writing: " << LUT_CACHE_FILE << "\n";
        return false;
    }

    // 1) Scalar sizes
    out.write((char *)&nbTbins, sizeof(nbTbins));
    out.write((char *)&nbVPDbins, sizeof(nbVPDbins));
    out.write((char *)&nbHbins, sizeof(nbHbins));

    // 2) Arrays of size nbTbins
    out.write((char *)LookUp_KmT, nbTbins * sizeof(float));
    out.write((char *)LookUp_GammaT, nbTbins * sizeof(float));
    out.write((char *)LookUp_VcmaxT, nbTbins * sizeof(float));
    out.write((char *)LookUp_JmaxT, nbTbins * sizeof(float));
    out.write((char *)LookUp_Rleaf, nbTbins * sizeof(float));
    out.write((char *)LookUp_Rstem, nbTbins * sizeof(float));

#ifdef WATER
    // 3) WATER-dependent LUTs
    out.write((char *)LookUp_SLOPE, nbTbins * sizeof(float));
    out.write((char *)LookUp_GRADN, nbTbins * sizeof(float));

    // INLR: nbTbins × nbVPDbins
    for (int i = 0; i < nbTbins; ++i)
        out.write((char *)LookUp_INLR[i], nbVPDbins * sizeof(float));

    // Wind LUT
    out.write((char *)LookUp_Wind, nbHbins * sizeof(float));
#endif

    // 4) Flux LUTs: all size 80000
    out.write((char *)LookUp_flux_absorption, 80000 * sizeof(float));
    out.write((char *)LookUp_flux, 80000 * sizeof(float));
    out.write((char *)LookUp_ExtinctLW, 80000 * sizeof(float));
    out.write((char *)LookUp_VPD, 80000 * sizeof(float));
    out.write((char *)LookUp_T, 80000 * sizeof(float));

    // 5) Crown site: 2601 ints
    out.write((char *)LookUp_Crown_site, 2601 * sizeof(int));

    return out.good();
}

// --- Load LUTs from file -----------------------------------------------------

bool LoadLookUpTablesFromCache()
{
    std::ifstream in(LUT_CACHE_FILE, std::ios::binary);
    if (!in)
        return false; // cache does not exist

    // 1) Scalar sizes
    in.read((char *)&nbTbins, sizeof(nbTbins));
    in.read((char *)&nbVPDbins, sizeof(nbVPDbins));
    in.read((char *)&nbHbins, sizeof(nbHbins));
    if (!in.good())
        return false;

    // 2) Allocate raw arrays
    LookUp_KmT = new float[nbTbins];
    LookUp_GammaT = new float[nbTbins];
    LookUp_VcmaxT = new float[nbTbins];
    LookUp_JmaxT = new float[nbTbins];
    LookUp_Rleaf = new float[nbTbins];
    LookUp_Rstem = new float[nbTbins];

#ifdef WATER
    LookUp_SLOPE = new float[nbTbins];
    LookUp_GRADN = new float[nbTbins];

    LookUp_INLR = new float *[nbTbins];
    for (int i = 0; i < nbTbins; i++)
        LookUp_INLR[i] = new float[nbVPDbins];

    LookUp_Wind = new float[nbHbins];
#endif

    LookUp_flux_absorption = new float[80000];
    LookUp_flux = new float[80000];
    LookUp_ExtinctLW = new float[80000];
    LookUp_VPD = new float[80000];
    LookUp_T = new float[80000];
    // LookUp_Crown_site is a static array; no allocation needed.

    // 3) Read back LUT data
    in.read((char *)LookUp_KmT, nbTbins * sizeof(float));
    in.read((char *)LookUp_GammaT, nbTbins * sizeof(float));
    in.read((char *)LookUp_VcmaxT, nbTbins * sizeof(float));
    in.read((char *)LookUp_JmaxT, nbTbins * sizeof(float));
    in.read((char *)LookUp_Rleaf, nbTbins * sizeof(float));
    in.read((char *)LookUp_Rstem, nbTbins * sizeof(float));

#ifdef WATER
    in.read((char *)LookUp_SLOPE, nbTbins * sizeof(float));
    in.read((char *)LookUp_GRADN, nbTbins * sizeof(float));

    for (int i = 0; i < nbTbins; ++i)
        in.read((char *)LookUp_INLR[i], nbVPDbins * sizeof(float));

    in.read((char *)LookUp_Wind, nbHbins * sizeof(float));
#endif

    in.read((char *)LookUp_flux_absorption, 80000 * sizeof(float));
    in.read((char *)LookUp_flux, 80000 * sizeof(float));
    in.read((char *)LookUp_ExtinctLW, 80000 * sizeof(float));
    in.read((char *)LookUp_VPD, 80000 * sizeof(float));
    in.read((char *)LookUp_T, 80000 * sizeof(float));

    in.read((char *)LookUp_Crown_site, 2601 * sizeof(int));

    return in.good();
}