C Skeleton
===============================================================================
## Author
* [Alessandro Molari](http://molarialessandro.info)

## Build System
I don't like Make or CMake so I have created a small (and portable between
projects) build system using Rake, with the following main features:
* Compile the code (through cc): rake compile
* Generate the documentation (through doxygen): rake doc
* Run the unit tests (using CUnit): rake run_tests
* Run the software: rake run
* Perform some static analysis (through SPLint): rake static_analysis
* Check for memory leaks (through valgrind): rake mem_leaks_analysis
There are also other rake tasks, but they are already provided by the listed
tasks.

There is no need to configure the build system (0-setup), but if you want
you can modify the configuration variables inside the Rakefile.
To use the build system you always need Rake (and Ruby) to be installed in
your system. For each task there could be additional requirements
(specified above).

If you don't want to use the build system you can always do the job manually.

## Directory Conventions
- out is where the program is built and maybe other artifacts are generated
- tests will hold eventually tests
- src hold the source code
- tmp a temporary directory

## Other informations
- This project has a website: TODO

