# TROLL

TROLL 4.0 is an individual- and trait-based model of forest dynamics. A full description of the model and discussion of the underlying modelling choices can be found in the following manuscript:

“_TROLL 4.0: representing water and carbon fluxes, leaf phenology and intraspecific trait variation in a mixed-species individual-based forest dynamics model – Part 1: Model description. Maréchaux I, Fischer FJ, Schmitt S, Chave J_” currently in an open review process for Geoscientific Model Development.

## Installation

The following command line can be used to compile the code:

```
g++ -O3 -Wall -o TROLLv4_exe main_TROLLv4.cpp -I GSL_PATH/include -L GSL_PATH/lib -lgsl -lgslcblas -lm
```

`GSL_PATH` must point to your local GNU Scientific Library (GSL) installation, see https://www.gnu.org/software/gsl/

## Get started

The code of TROLL 4.0 is written in C++ and requires five input files to run a simulation: (i) global parameters (global_inputs), (ii) species parameters (species), (iii) soil characteristics (soil), and finally, meteorological drivers varying at (iv) half-hour (halfhourly_climate) and (v) daily step (daily_climate).

The following command line can be used to run the code:

```
./TROLLv4_exe -i./example/global_inputs.txt -s./example/species.txt -m./example/daily_climate.txt -d./example/halfhourly_climate.txt -p./example/soil.txt -o./TROLLv4_test
```

## Alternative

TROLL 4.0 can be set-up and run, and its outputs can be analyzed with an updated version of the R package rcontroll (https://github.com/sylvainschmitt/rcontroll/tree/TROLLV4), also available in R through the command:

```
devtools::install_github("sylvainschmitt/rcontroll", ref = "TROLLV4").
```

The package also provide examples of input files and outputs.

## Help wanted?

Please use issues for any question regarding TROLL.

## Core group

* Jérôme Chave, CNRS, jerome.chave@univ-tlse3.fr
* Isabelle Maréchaux, INRAE, isabelle.marechaux@inrae.fr
* Fabian Fischer, TUM, f.j.fischer@tum.de
* Sylvain Schmitt, CIRAD, sylvain.schmitt@cirad.fr

