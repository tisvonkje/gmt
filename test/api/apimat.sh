#!/bin/bash
#	$Id$
#
# Test the C API for reading and writing matrix

gmt pscoast -R3/9/50/54 -Df -M -N1 > belgium.txt
gmt grdmath -R3/9/50/54 -I30s -r X = topo.nc
testapi_matrix 
