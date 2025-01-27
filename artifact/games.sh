#!/bin/bash  

# RDD == ROUXINOL_DATA_DIRECTORY
# RD == ROUXINOL_DIRECTORY

ROUXINOL_DIRECTORY=
ROUXINOL_DATA_DIRECTORY=

WORKLOAD="workload.yml"
ROUNDS=10
GAMES=3

# Figures 5 - 7
for (( g=0; g<${GAMES}; g++ )); do 

	./data_classifier.sh \
	    --data ${ROUXINOL_DATA_DIRECTORY} \
	    --rouxinol ${ROUXINOL_DIRECTORY} \
	    --dataset ${ROUXINOL_DATA_DIRECTORY}/O0/stats/${WORKLOAD} \
	    --rounds ${ROUNDS} \
	    --game ${g}

done

