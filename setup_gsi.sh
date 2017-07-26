#!/bin/bash

# Setup file to set the correct environment to run ROOT
# in the IT computing room

source /usr/share/modules/init/bash 
module use /cvmfs/it.gsi.de/modulefiles/ 
module load compiler/gcc/4.8.4
source /cvmfs/it.gsi.de/root/v6-06-06/bin/thisroot.sh
