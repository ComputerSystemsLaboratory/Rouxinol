#!/bin/bash  

# Initialize variables 
data_directory=""
rouxinol_directory=""
dataset=""

game=0
rounds=10
problems=100
samples=500
test_ratio=0.2


# Function to display usage  
usage() {  
    echo "Usage: $0 --data <directory> --rouxinol <directory> --dataset <string> [--problems <integer>] [--samples <integer>] [--rounds <integer>] [--game <integer>]"  
    echo "  --data: Path to the data directory."
    echo "  --rouxinol: Path to the Rouxinol directory."
    echo "  --dataset: Dataset name."
    echo "  --problems: Number of problems (Default is 100)."  
    echo "  --samples: Number of samples (Default is 500)."
    echo "  --rounds: Number of rounds (Default is 10)."
    echo "  --game: Number of the game (Default is 0)."
    exit 1  
}  

# Check if no arguments are provided  
if [ $# -eq 0 ]; then  
    usage  
fi

# Parse command-line options using getopt  
OPTIONS=$(getopt -o "" --long data:,rouxinol:,dataset:,problems:,samples:,rounds:,game: -- "$@")  
if [ $? -ne 0 ]; then  
    usage  
fi  

eval set -- "$OPTIONS"  

# Process options  
while true; do  
    case "$1" in  
        --data)  
            data_directory="$2"  
            shift 2  
            ;;
        --rouxinol)  
            rouxinol_directory="$2"  
            shift 2  
            ;;
        --dataset)  
            dataset="$2"  
            shift 2  
            ;;               
        --problems)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                problems="$2"  
            else  
                echo "Error: --problems must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;; 
        --samples)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                samples="$2"  
            else  
                echo "Error: --samples must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;; 
        --test-ratio)
            if [[ "$2" =~ ^[0-9]+\.[0-9]+$ ]] && (( $(echo "$2 >= 0.1 && $2 <= 0.9" |bc -l) )); then  
                test_ratio="$2"  
            else  
                echo "Error: --test-ratio must be a float between 0.1 and 0.9."  
                exit 1  
            fi
            shift 2
            ;;
        --rounds)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                rounds="$2"  
            else  
                echo "Error: --rounds must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;   
        --game)  
            if [[ "$2" =~ ^[0-9]+$ ]]; then  
                game="$2"  
            else  
                echo "Error: --samples must be an integer."  
                exit 1  
            fi  
            shift 2  
            ;;                                       
        --)  
            shift  
            break  
            ;;  
        *)  
            usage  
            ;;  
    esac  
done   

# Check if dataset is set and if it is valid
if [ -z "${dataset}" ]; then  
    echo "Error: --dataset is not set."  
    exit 1  
fi
if [ ! -f "${dataset}" ]; then  
    echo "Error: '${dataset}' not found."  
    exit 1  
fi

# Check if directories exist  
dirs=("${data_directory}" "${rouxinol_directory}")
for (( d=0; d<${#dirs[@]}; d++ )); do
    dir=${dirs[d]}
    case "${d}" in  
        0)  
            name="--data"
            ;;
        1)  
            name="--rouxinol"  
            ;;
    esac
    if [ -z "${dir}" ]; then  
        echo "Error: '${name}' is required."  
        exit 1  
    fi
    if [ ! -d "${dir}" ]; then  
        echo "Error: Directory '${name}' does not exist."  
        exit 1  
    fi  
done 

export PYTHONPATH=${rouxinol_directory}

case "${game}" in  
    0)  
        train=("O0" "O1" "O2" "O3")
        test=("O0" "O1" "O2" "O3")        
        ;;  
    1)  
        train=("O0")
        test=("fla" "sub" "bcf" "ollvm")  
        ;;  
    2)  
        train=("fla" "sub" "bcf" "ollvm")
        test=("fla" "sub" "bcf" "ollvm")  
        ;;
    *)  
        echo "Invalid game '${game}'."  
        exit 1  
        ;;  
esac  

representations=("llvmHistogram" "x86Histogram" "cfggrindHistogram" "ir2vec")

for (( r=0; r<${#rounds[@]}; r++ )); do 

    for (( re=0; re<${#representations[@]}; re++ )); do 
        representation=${representations[re]}
        
        echo "Classifing ${representation} ..."

        if { [ "${game}" -eq 1 ] || [ "${game}" -eq 2 ]; } && [ "${representation}" == "ir2vec" ]; then  
            continue  
        fi 

        for (( tr=0; tr<${#train[@]}; tr++ )); do  
            train_label=${train[tr]}

            if { [ "${train_label}" == "O1" ] || [ "${train_label}" == "O2" ]; } && [ "${representation}" == "ir2vec" ]; then  
                continue  
            fi 

            for (( te=0; te<${#test[@]}; te++ )); do  
                test_label=${test[te]}

                if { [ "${game}" -eq 0 ] || [ "${game}" -eq 2 ]; } && [ "${train_label}" != "${test_label}" ]; then  
                    continue  
                fi 

                if [ "${representation}" == "cfggrindHistogram" ]; then  
                    python ${rouxinol_directory}/examples/openjudge_classification.py \
                        --data_directory=${data_directory} \
                        --dataset_name=${dataset} \
                        --train=${train_label} \
                        --test=${test_label} \
                        --problems=${problems} \
                        --samples=${samples} \
                        --test_ratio=${test_ratio} \
                        --representation=${representation} \
                        --static
                fi

                python ${rouxinol_directory}/examples/openjudge_classification.py \
                    --data_directory=${data_directory} \
                    --dataset_name=${dataset} \
                    --train=${train_label} \
                    --test=${test_label} \
                    --problems=${problems} \
                    --samples=${samples} \
                    --test_ratio=${test_ratio} \
                    --representation=${representation}

            done

        done  

    done 

done


