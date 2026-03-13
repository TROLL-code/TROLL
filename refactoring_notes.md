# Refactoring Notes

> Assessed from git history and source files. Supersedes notes.md and .claude/final-plan.md.

## Current state: Phase 5 complete

The monolith has been split, all globals migrated into `Context`, and the class declarations extracted into their own headers. `src/troll.cpp` is now **pure orchestration** (~310 lines).

---

## What is done

### Phase 1 — Extractions (complete)
- `include/troll_defines.hpp` — compile-time flags
- `include/constants.hpp` — physical constants
- `include/troll.hpp` — global declarations extracted from monolith
- `src/params/param_registry.cpp` — data-driven registry replaces old 300-line `AssignValueGlobal` if/else chain; **93 parameters registered**; `AssignValueGlobal` deleted

### Phase 2 — Context migration (complete)
`include/context.hpp` defines `Context` with **17 sub-structs** plus the `S` and `T` vectors:

| Field | Contents |
|---|---|
| `FileIO` | Input/output file path buffers |
| `InputBuffers` | Temporary read buffers |
| `OutputConfig` | Output file streams |
| `ModelOptions` | All `_FLAG` booleans and mode ints |
| `Grid` | `sites`, `cols`, `rows`, `HEIGHT`, `SBORD`, `nbspp`, spatial arrays |
| `TimeState` | `iter`, `nbiter`, `nbout`, `freqout`, `iterperyear`, `timestep`, etc. |
| `Climate` | Daily vectors, per-step scalars, yearly means |
| `LookupTables` | All `LookUp_*` pointers and bin counts |
| `Soil` | ~25 soil/water vars, 3D field arrays |
| `Diagnostics` | `nblivetrees`, `nbdead_*`, `nbTreefall*`, etc. |
| `PointCloud` | LiDAR simulation parameters |
| `RNGState` | `gslrand`, covariance matrix/vectors |
| `SpeciesState` | `SPECIES_SEEDS`, `p_seed`, `n_seed`, `p_species`, `PROB_S` |
| `Intraspecific` | 10×[10000] trait deviation arrays + sigmas + correlations |
| `CrownGeometry` | `crown_gap_fraction`, `shape_crown`, `deltaR`, `deltaD`, `BAtot`, visual extents |
| `SimParams` | Light, CO2, phenology, allometry, mortality, seed parameters |
| `SimFields` | `LAI3D`, `Thurt[3]` dynamic field arrays |
| `vector<Species> S` | All species (direct field, not a sub-struct) |
| `vector<Tree> T` | All tree sites (direct field, not a sub-struct) |

### Phase 3 — troll.cpp split (complete)
`troll.cpp` is now pure orchestration (~310 lines). Functions distributed into:

| File | Contents |
|---|---|
| `src/species.cpp` | `Species::Species()`, `Species::Init()` |
| `src/tree.cpp` | All `Tree::*` methods |
| `src/crown.cpp` | Crown geometry, light calculations |
| `src/lookup_tables.cpp` | `InitialiseLookUpTables`, `InitialiseLookUpLAImax`, `InitialiseIntraspecific` |
| `src/input.cpp` | All `ReadInput*` functions, `AssignValueSpecies` / `AssignValuePointcloud` |
| `src/memory.cpp` | `AllocMem`, `FreeMem`, `Initialise`, `InitialiseOutputStreams`, `InitialiseABC` |
| `src/output.cpp` | `Average`, `OutputField`, `OutputSnapshot`, all `OutputABC_*`, close functions |
| `src/simulation.cpp` | `Evolution`, `UpdateSeeds`, `UpdateField`, `FillSeed`, `RecruitTree`, `TriggerTreefall*` |

### Phase 4 — Context threading (complete)
- `Context ctx` is **local to `main()`** and passed **by reference** to every function
- `RegisterParameters(Context&)` — registry binds directly to `ctx.*` fields; no extern globals remain in param_registry
- The file-scope global approach from the plan was skipped — `ctx` is passed by reference throughout instead

### Phase 5 — Class declaration extraction + S/T migration (complete)
- `include/species.hpp` — `Species` class declaration extracted from `troll.hpp`; `leafFluxes` struct moved to `include/tree.hpp`
- `include/tree.hpp` — `Tree` class declaration extracted from `troll.hpp`
- `include/context.hpp` includes both new headers and gains `vector<Species> S` and `vector<Tree> T` as direct `Context` fields
- `include/troll.hpp` reduced to includes, free-function declarations, and utility templates
- All `S[...]` / `T[...]` call sites replaced with `ctx.S[...]` / `ctx.T[...]` across all `.cpp` files
- No more file-scope `S` or `T` globals anywhere

---

## What remains (file-scope globals not in Context)

| Global | Location | Note |
|---|---|---|
| `mpi_rank`, `mpi_size`, `easympi_rank` | `troll.cpp` file scope | MPI support; currently `#undef MPI` — low priority |
| ABC diagnostics | conditional `#ifdef Output_ABC` | `chm_field_*`, `transmittance_*`, moving averages — `#undef Output_ABC` by default |
| Carbon diagnostics | conditional `#ifdef CHECK_CARBON` | 5 carbon budget floats — disabled by default |

---

## Remaining work

1. ~~**Species param registry**~~ — **done**: `AssignSpeciesParam` registry implemented in `src/input.cpp`; `ReadInputSpecies` wired to it; old `AssignValueSpecies` deleted.
2. ~~**`OutputConfig` cleanup**~~ — **done**: all 6 `#ifdef Output_ABC` output functions (`OutputABC`, `OutputABCConservationTraits`, `OutputABC_ground`, `OutputABC_species`, `OutputABC_CHM`, `OutputABC_transmittance`) now take `Context &ctx`; `gslrng` bug fixed to `ctx.rng.gslrand`; call site in `troll.cpp` updated.
3. **LUT caching** — `#define CACHE_LUT` works but is not committed by convention (do not enable before `make sanity`)
