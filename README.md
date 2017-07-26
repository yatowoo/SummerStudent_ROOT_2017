# ROOT Tutorial

This tutorial is an introduction to the program package ROOT
(https://root.cern.ch). It covers the basic features of the program package
from starting up ROOT, doing some simple calculations up to complex examples
like writing data to file as a TTree.
This tutorial is used for the GSI Summer Student Program 2017.

If you don't have ROOT installed on your computer the easiest way to try
it yourself is to use a virtual machine with all necessary programs
installed. 

## Get *VirtualBox*

VirtualBox is a powerful virtualization product for PCs. If not already
installed please install *VirtualBox* on your machine: [https://www.virtualbox.org](https://www.virtualbox.org)

## Setup a virtual machine
- Download the prepared appliance from [here](http://fairroot.gsi.de/downloads/ROOT_Tutorial.ova)
   - The download can take some time since the size of the image is 1.5GB
- Import the appliance into *VirtualBox*
   - From the menu "File” select “Import Appliance” and select the just downloaded file
   - Boot the machine by double clinking on the available images
- Login to the virtual machine using the username/password combination: fairroot/FairRoot 

## Instructions within in the virtual machine
- Get the all the files and material to your work area
   - Open a terminal using the terminal desktop icon
   - Execute the following command on the terminal

    `git clone https://github.com/fuhlig1/SummerStudent_ROOT_2017.git`

## Start ROOT
- Set the correct environment by typing `source /opt/root/bin/thisroot.sh`
- Start ROOT by typing `root` in a terminal

