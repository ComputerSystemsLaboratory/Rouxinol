#!/bin/bash  

# RD == ROUXINOL_DIRECTORY
# ROD == ROUXINOL_OUTPUT_DIRECTORY

ROUXINOL_DIRECTORY=
ROUXINOL_OUTPUT_DIRECTORY=

ROUNDS=10
GAMES=3

# Figures 5 - 7
for (( g=0; g<${GAMES}; g++ )); do 

	./data_classifier.sh \
	    --out-dir ${ROUXINOL_OUTPUT_DIRECTORY} \
	    --dataset ${ROUXINOL_OUTPUT_DIRECTORY}/O0/statistics/workload.yml \
	    --rouxinol ${ROUXINOL_DIRECTORY} \
	    --rounds ${ROUNDS} \
	    --game ${g}

done

