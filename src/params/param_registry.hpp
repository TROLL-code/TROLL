#ifndef PARAM_REGISTRY_HPP
#define PARAM_REGISTRY_HPP

#include <string>
#include <unordered_map>

// ==========================
// SetParameter declarations
// ==========================

// Numeric template (int, float)
template <typename N>
void SetParameter(std::string &parameter_name,
                  std::string &parameter_value,
                  N &parameter,
                  N parameter_min,
                  N parameter_max,
                  N parameter_default,
                  bool quiet);

// String overload
void SetParameter(std::string &parameter_name,
                  std::string &parameter_value,
                  std::string &parameter,
                  std::string parameter_default,
                  bool quiet);

// Boolean overload
void SetParameter(std::string &parameter_name,
                  std::string &parameter_value,
                  bool &parameter,
                  bool parameter_min,
                  bool parameter_max,
                  bool parameter_default,
                  bool quiet);

// ==========================
// Registry system
// ==========================

struct ParamSpec
{
    enum Type
    {
        INT,
        FLOAT,
        BOOL
    } type;
    void *target;
    double minv, maxv, def;

    ParamSpec(Type t, void *tgt, double mn, double mx, double df)
        : type(t), target(tgt), minv(mn), maxv(mx), def(df) {}
};

extern std::unordered_map<std::string, ParamSpec> parameter_registry;

void RegisterParameters();

void AssignParamFromRegistry(const std::string &name,
                             const std::string &value);

#endif