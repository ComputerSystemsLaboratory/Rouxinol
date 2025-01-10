#!/bin/bash  

# RDD == ROUXINOL_DATA_DIRECTORY
# RD == ROUXINOL_DIRECTORY
# CD == CONDA_DIRECTORY

ROUXINOL_DATA_DIRECTORY=
ROUXINOL_DIRECTORY=
CONDA_DIRECTORY=

# Figures 5 - 7
games=3
for (( g=0; g<${#games[@]}; g++ )); do 

	./data_classifier.sh \
	    --data ${ROUXINOL_DATA_DIRECTORY} \
	    --rouxinol ${ROUXINOL_DIRECTORY} \
	    --dataset ${ROUXINOL_DATA_DIRECTORY}/O0/stats/C_500.yml \
	    --game ${g}

done

# Figure 4
./data_classifier.sh \
    --data ${ROUXINOL_DATA_DIRECTORY} \
    --rouxinol ${ROUXINOL_DIRECTORY} \
    --dataset ${ROUXINOL_DATA_DIRECTORY}/O0/stats/C_500.yml \
    --game 0 \
    --problems 32

# Figure 4
./data_classifier.sh \
    --data ${ROUXINOL_DATA_DIRECTORY} \
    --rouxinol ${ROUXINOL_DIRECTORY} \
    --dataset ${ROUXINOL_DATA_DIRECTORY}/O0/stats/C_500.yml \
    --game 0 \
    --problems 32

# Figure 4 - ProGraML
python ${ROUXINOL_DIRECTORY}/examples/openjudge_exploration.py \
    --compiler_dir=${CONDA_DIRECTORY}/envs/rouxinol/bin \
    --representation="programl" \
    --data_directory=${ROUXINOL_DATA_DIRECTORY} \
    --label_dir="O0" \
    --problems=32 \
    --workers=1 \
    --notimestamped