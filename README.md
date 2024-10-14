# TROLL

TROLL 4.0 is an individual- and trait-based model of forest dynamics. A full description of the
model and discussion of the underlying modelling choices can be found in the following
manuscript:

“TROLL 4.0: representing water and carbon fluxes, leaf phenology and intraspecific trait
variation in a mixed-species individual-based forest dynamics model – Part 1: Model
description. Maréchaux I, Fischer FJ, Schmitt S, Chave J”
currently in an open review process for Geoscientific Model Development.

The code of TROLL 4.0 is written in C++ and requires five input files to run a simulation: (i)
global parameters (global_inputs), (ii) species parameters (species), (iii) soil characteristics
(soil), and finally, meteorological drivers varying at (iv) half-hour (halfhourly_climate) and (v)
daily step (daily_climate).

There are two alternative ways to run the model:

1. using command lines:
The following command line can be used to compile the code:

g++ -O3 -Wall -o TROLLv4_exe main_TROLLv4.cpp -I
/trinity/shared/apps/local/gsl/2.7.1/include -L /trinity/shared/apps/local/gsl/2.7.1/lib -lgsl -
lgslcblas -lm

The following command line can be used to run the code:

./ TROLLv4_exe -i./global_inputs.txt -s./species.txt -m./daily_climate.txt -
d./halfhourly_climate.txt -p./soil.txt -o./TROLLv4_output_name

2. using the rcontroll R package.

TROLL 4.0 can be set-up and run, and its outputs can be analyzed with an updated version of
the R package rcontroll: https://github.com/sylvainschmitt/rcontroll/tree/TROLLV4, also
available in R through the command devtools::install_github(&quot;sylvainschmitt/rcontroll&quot;, ref =
&quot;TROLLV4&quot;).

The package also provide examples of input files and outputs.
