#!/bin/bash  

# Initialize variables 
output_directory=""
rouxinol_directory=""
dataset=""

game=0
rounds=10
problems=100
samples=500
test_ratio=0.2
is_cc2025_artifact=true

# Function to display usage  
usage() {
    echo "CC 2025 Artifact"
    echo "Copyright (C) 2025 Anderson Faustino da Silva"
    echo "" 
    echo "Usage: $0 --dataset <string> --out-dir <directory> --rouxinol <directory> [--problems <integer>] "
    echo "                            [--samples <integer>] [--test-ratio <float> ] [--rounds <integer>] [--game <integer>] "
    echo "                            [--shuffle] [--no-cc2025] [--help]"  
    echo ""  
    echo "Commands:"
    echo "  -d, --dataset           Dataset name"
    echo "  -g, --game              Number of the game (Default=0)"
    echo "  -n, --no-cc2025         It is not the CC2025 artifact"  
    echo "  -o, --out-dir           Path to the output directory"
    echo "  -p, --problems          Number of problems (Default=100)"  
    echo "  -r, --rounds            Number of rounds (Default=10)"    
    echo "  -R, --rouxinol          Path to the Rouxinol directory"
    echo "  -s, --samples           Number of samples (Default=500)"    
    echo "  -S, --shuffle           Shuffle problems and samples (Default=false)"  
    echo "  -t, --test-ratio        Ratio of test samples"
    echo "  -h, --help              Help"       
    exit 1  
}  

# Check if it is the CC2025 artifact
check_game_condition_cc2025() { 
    local game="$1"  
    local representation="$2"  

    if { [ ${game} -eq 1 ] || [ ${game} -eq 2 ]; } &&   
       { [ "${representation}" == "ir2vec" ] || [ "${representation}" == "inst2vecPreprocessed" ]|| [ "${representation}" == "inst2vecEmbeddings" ] || [ "${representation}" == "programl" ]; }; then
        return 0  
    else
        return 1  
    fi  
}

# Check if it is the CC2025 artifact
check_train_condition_cc2025() {  
    local train_label="$1"  
    local representation="$2"  

    if { [ "${train_label}" == "O1" ] || [ "${train_label}" == "O2" ]; } &&   
       { [ "${representation}" == "ir2vec" ] || [ "${representation}" == "inst2vecPreprocessed" ]|| [ "${representation}" == "inst2vecEmbeddings" ] || [ "${representation}" == "programl" ]; }; then  
        return 0  
    else  
        return 1  
    fi  
}

check_cc2025_artifact() {  
    local is_cc2025_artifact="$1"  

    # Local array of valid representations  
    local -a valid_representations=("ir2vec" "inst2vecPreprocessed" "inst2vecEmbeddings" "programl")  

    if [ "$is_cc2025_artifact" = true ]; then  
        # Check if $representation is in valid_representations  
        for rep in "${valid_representations[@]}"; do  
            if [ "$representation" = "$rep" ]; then  
                return 0  # Condition met  
            fi  
        done  
    fi  

    return 1  # Condition not met  
}

check_game_condition() {  
    local game_val="$1"  
    local game_array_name="$2"  
    local representation_val="$3"  
    local rep_array_name="$4"  

    local -n game_array="$game_array_name"  
    local -n rep_array="$rep_array_name"  

    local game_valid=false  
    for g in "${game_array[@]}"; do  
        if [[ "$game_val" == "$g" ]]; then  
            game_valid=true  
            break  
        fi  
    done  

    local rep_valid=false  
    for ra in "${rep_array[@]}"; do  
        if [[ "$representation_val" == "$ra" ]]; then  
            rep_valid=true  
            break  
        fi  
    done  

    if $game_valid && $rep_valid; then  
        return 0  
    else  
        return 1  
    fi  
}  

# Check if no arguments are provided  
if [ $# -eq 0 ]; then  
    usage  
fi

# Parse command-line options using getopt  
OPTIONS=$(getopt -o o:R:d:p:s:r:g:S:t:nh --long out-dir:,rouxinol:,dataset:,problems:,samples:,rounds:,game:,shuffle,test-ratio,no-cc2025,help -- "$@")  
if [ $? -ne 0 ]; then  
    usage  
fi  

eval set -- "$OPTIONS"  

# Process options  
while true; do  
    case "$1" in  
        -o|--out-dir)  
            output_directory="$2"  
            shift 2  
            ;;
        -R|--rouxinol)  
            rouxinol_directory="$2"  
            shift 2  
            ;;
        -d|--dataset)  
            dataset="$2"  
            shift 2  
            ;;               
        -p|--problems)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                problems="$2"  
            else  
                echo "Error: --problems must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;; 
        -s|--samples)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                samples="$2"  
            else  
                echo "Error: --samples must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;; 
        -t|--test-ratio)
            if [[ "$2" =~ ^[0-9]+\.[0-9]+$ ]] && (( $(echo "$2 >= 0.1 && $2 <= 0.9" |bc -l) )); then  
                test_ratio="$2"  
            else  
                echo "Error: --test-ratio must be a float between 0.1 and 0.9."  
                exit 1  
            fi
            shift 2
            ;;
        -r|--rounds)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                rounds="$2"  
            else  
                echo "Error: --rounds must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;   
        -g|--game)  
            if [[ "$2" =~ ^[0-9]+$ ]]; then  
                game="$2"  
            else  
                echo "Error: --samples must be an integer."  
                exit 1  
            fi  
            shift 2  
            ;; 
        -S|--shuffle)  
            add_command=" --shuffle "
            shift
            ;;   
        -n|--no-cc2025)  
            is_cc2025_artifact=false
            shift
            ;;                                                 
        -h|--help)  
            usage  
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
dirs=("${output_directory}" "${rouxinol_directory}")
for (( d=0; d<${#dirs[@]}; d++ )); do
    dir=${dirs[d]}
    case "${d}" in  
        0)  
            name="--out-dir"
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

if [ "${is_cc2025_artifact}" = true ]; then
    representations=("llvmHistogram" "x86Histogram" "cfggrindDynamicHistogram" "cfggrindHybridHistogram" "ir2vec" "inst2vecEmbeddings" "programl")
    EXCLUDE_GAMES=(1 2)
    EXCLUDE_LABELS=("O1" "O2") 
    EXCLUDE_REPRESENTATIONS=("inst2vecEmbeddings" "ir2vec" "programl")
else 
    representations=("llvmHistogram" "x86Histogram" "cfggrindDynamicHistogram" "cfggrindHybridHistogram" "performanceCounterHistogram" "ir2vec" "inst2vecPreprocessed" "inst2vecEmbeddings" "programl")
fi

for (( r=0; r<${rounds}; r++ )); do 

    echo -e "\nRound ${r} ..."

    for (( re=0; re<${#representations[@]}; re++ )); do 
        representation=${representations[re]}
        
        #if check_game_condition_cc2025 "${game}" "${representation}"; then 
        #    continue
        #fi
        if check_game_condition "${game}" EXCLUDE_GAMES "${representation}" EXCLUDE_REPRESENTATIONS; then
            continue
        fi
        
        echo -e "\tClassify ${representation} ..."

        for (( tr=0; tr<${#train[@]}; tr++ )); do  
            train_label=${train[tr]}

            if check_game_condition "${train_label}" EXCLUDE_LABELS "${representation}" EXCLUDE_REPRESENTATIONS; then
                continue
            fi

            for (( te=0; te<${#test[@]}; te++ )); do  
                test_label=${test[te]}

                if { [ "${game}" -eq 0 ] || [ "${game}" -eq 2 ]; } && [ "${train_label}" != "${test_label}" ]; then 
                    continue  
                fi 

                if check_cc2025_artifact $is_cc2025_artifact; then
                    n_problems=32
                else 
                    n_problems=${problems}
                fi

                if [ "${representation}" == "programl" ]; then
                    python ${rouxinol_directory}/examples/exploration_ggnn.py \
                        --output_directory=${output_directory} \
                        --dataset_name=${dataset} \
                        --train=${train_label} \
                        --test=${test_label} \
                        --problems=${n_problems} \
                        --samples=${samples} \
                        --test_ratio=${test_ratio} \
                        ${add_command}
                else
                    python ${rouxinol_directory}/examples/classification_preprocessed.py \
                        --output_directory=${output_directory} \
                        --dataset_name=${dataset} \
                        --train=${train_label} \
                        --test=${test_label} \
                        --problems=${n_problems} \
                        --samples=${samples} \
                        --test_ratio=${test_ratio} \
                        --representation=${representation} \
                        ${add_command}
                fi

            done

        done  

    done 

done


