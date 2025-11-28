#include <iostream>
#include <fstream>
#include <array>
#include <map>
#include <functional>
#include <string>
#include <cmath>
#include "troll.hpp"

/**
 * @file generate-lut-header.cpp
 * @brief Generates lut.hpp with precomputed lookup tables.
 * This is a build-time tool; not part of the runtime code.
 */

/**
 * @brief Number of bins for temperature lookup tables.
 * Determines the resolution of the LUTs.
 */
constexpr int n_temperature_bins = 500;

/**
 * @brief Temperature accuracy for lookup tables.
 * Defines the temperature step size (in °C) between bins.
 */
constexpr float temperature_accuracy = 0.1f;

/**
 * @brief Generates a lookup table and writes it to the output file.
 * @tparam N Size of the lookup table.
 * @param out Output file stream.
 * @param name Name of the lookup table.
 * @param compute Function to compute the value for a given temperature.
 */
template <size_t N>
void generate_lut(
    std::ofstream& out,
    const std::string& name,
    const std::function<float(float)>& compute  // Use std::function here
) {
    out << "    constexpr std::array<float, " << N << "> " << name << " = {\n";
    for (int i = 0; i < N; ++i) {
        float T = i * temperature_accuracy;
        out << compute(T);
        if (i < N - 1) out << ", ";
        if (i % 10 == 0) out << "\n";
    }
    out << "\n    };\n\n";
}

/**
 * @brief Computes the effective Michaelis-Menten constant for CO₂, \( K_m(T) \).
 * 
 * Taken from von Caemmerer 2000, as in Domingues et al. 2010 (<https://doi.org/10.1111/j.1365-3040.2010.02119.x>), for consistency.
 * 
 * \( K_m(T) = K_c(T) \cdot \left(1 + \frac{O_2}{K_o(T)}\right) \),
 * where \( K_c(T) \) and \( K_o(T) \) are temperature-dependent constants.
 *
 * @param T Temperature in °C.
 * @return \( K_m \) in Pa.
 *
 * 
 * Km <- Kc_Tleaf*(1+O2/Ko_Tleaf)
 * Kc_Tleaf <- Kc * exp((Tleaf+273.15-298.15)*delta_Kc/(298.15*8.314*(Tleaf+273.15)))
 * delta_Kc 	<- 59356 	# activation energy (kJ mol−1) - Badger & Collatz (1977)
 * Ko_Tleaf <- Ko * exp((Tleaf+273.15-298.15)*delta_Ko/(298.15*8.314*(Tleaf+273.15)))
 * Kc <- 40.49 	# Michaelis-Menten constant for CO2 (Pa) - von Caemmerer et al. (1994)
 * Ko <- 24.8 	# Michaelis-Menten constant for CO2 (kPa)- von Caemmerer et al. (1994)
 * O2 <- 21 	# Estimated Oxygen concentration at mesophyll - (kPa)
 * delta_Ko <- 35948 	# activation energy (kJ mol−1) - Badger & Collatz (1977)
 * 
 * @param T Temperature in °C.
 * @return  \( K_m \) value at temperature T.
 */
float compute_KmT(float T) {

#ifdef WATER
    return  404.0 * exp(((T - 25.0) / (298 * 0.00831 * (273 + T))) * 59.36) *
                        (1 + 210 * 1.0 / 248.0 * exp(-(T - 25.0) / (298 * 0.00831 * (273 + T)) * 35.94));
#else
    return 404.0 * exp(((T - 25.0) / (298 * 0.00831 * (273 + T))) * 59.36) *
                        (1 + 210 * 1.0 / 248.0 * exp(-(T - 25.0) / (298 * 0.00831 * (273 + T)) * 35.94)) * iCair;
#endif
}

/**
 * @brief Computes the \( Gamma(T) \) lookup table.
 * 
 * Taken from von Caemmerer 2000, as in Domingues et al. 2010 (<https://doi.org/10.1111/j.1365-3040.2010.02119.x>), for consistency.
 * 
 * @param T Temperature in °C.
 * @return Gamma value at temperature T.
 */
float compute_GammaT(float T) {

#ifdef WATER
    return 37.0 * exp(((T - 25.0) / (298 * 0.00831 * (273 + T))) * 23.4);
#else
    return 37.0 * exp(((T - 25.0) / (298 * 0.00831 * (273 + T))) * 23.4) * iCair; 
#endif
}

int main() {
    std::ofstream out("lut.hpp");
    if (!out) {
        std::cerr << "Failed to open lut.hpp for writing.\n";
        return 1;
    }

    out << "// Auto-generated LUT header. Do not edit!\n";
    out << "#pragma once\n";
    out << "#include <array>\n\n";
    out << "namespace lut {\n";

    // Map LUT names to their computation functions
    std::map<std::string, std::function<float(float)>> lut_functions = {
        {"LookUp_KmT", compute_KmT},
        {"LookUp_GammaT", compute_GammaT}
        // Add other LUTs here
    };

    // Generate all LUTs
    for (const auto& [name, compute] : lut_functions) {
        generate_lut<n_temperature_bins>(out, name, compute);
    }

    out << "}\n";
    return 0;
}
