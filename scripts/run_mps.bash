#!/bin/bash

# get input

usage(){
	echo "usage -- $0 <MPS dir>" 
}
if [ -z "$1" ]; then
	usage()
	exit 1
fi

PATHNAME=$1
BASENAME=$(basename "$PATHNAME")


TMP="/tmp/mps_run"
mkdir $TMP

TRAJ="${PATHNAME}/${BASENAME}_Trajectory"
unzip "${TRAJ}.zip" -d $TMP 



viewer_mps --vrs $PATHNAME/$BASENAME.vrs \
       	--trajectory  $TMP/"${BASENAME}_Trajectory"/closed_loop_trajectory.csv \
	--points $TMP/"${BASENAME}_Trajectory"/semidense_points.csv.gz \

