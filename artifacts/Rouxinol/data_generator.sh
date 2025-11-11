#!/bin/bash  

# Initialize variables 
output_directory=""
conda_directory="" 
rouxinol_directory=""  
rouxinol_app_directory=""

dataset="openjudge"

problems=100
workers=1
samples=500
entry=1
events="branch-load-misses,L1-icache-load-misses,iTLB-loads,branch-loads,branch-instructions,branch-misses,faults,dTLB-stores,cycles,dTLB-loads,instructions,dTLB-load-misses,cache-references,LLC-stores,LLC-store-misses,L1-dcache-stores,iTLB-load-misses,LLC-loads,L1-dcache-loads,L1-dcache-load-misses,dTLB-store-misses,LLC-load-misses,cache-misses"
representations=""
flags="O0,O1,O2"
do_not_extract_representation=false
add_command=""

#
# events="branch-load-misses,L1-icache-load-misses,iTLB-loads,branch-loads,branch-instructions,branch-misses,faults,dTLB-stores,cycles,dTLB-loads,instructions,dTLB-load-misses,cache-references,LLC-stores,LLC-store-misses,L1-dcache-stores,iTLB-load-misses,LLC-loads,L1-dcache-loads,L1-dcache-load-misses,dTLB-store-misses,LLC-load-misses,cache-misses"
# 
# Shakespeare
# Intel(R) Xeon(R) CPU E5-2630 v2 @ 2.60GHz
# events = all supported
#

#
# Zig
# AMD Ryzen 9 7900X3D 12-Core Processor
# events = dTLB-stores,LLC-stores,LLC-store-misses,L1-dcache-stores,LLC-loads,dTLB-store-misses,LLC-load-misses (not supported)
#

#
# Halide
# AMD Ryzen Threadripper 3960X 24-Core Processor
# events=
#

# Function to display usage  
usage() {  
    echo "Rouxinol Artifact"
    echo "Copyright (C) 2025 Anderson Faustino da Silva"
    echo ""     
    echo "Usage: $0 --out-dir <directory> --rouxinol <directory> --conda <directory> "
    echo "                                --representations <R1,R2,...> --flags <F1,F2,...>"
    echo "                                [--dataset <string>] [--problems <integer>] [--workers <integer>]"
    echo "                                [--samples <integer>][--entry <integer>] [--events <list,>] "
    echo "                                [--app-dir <directory>] [--no-repr] [--force]"  
    echo ""  
    echo "Commands:"
    echo "  -a, --app-dir           Path to the ROUXINOL_APP_DIR."  
    echo "  -c, --conda             Path to the Conda directory."
    echo "  -d, --dataset           Dataset name. (Default=openjudge)"
    echo "  -e, --entry             Number of CSES workload (Default=1)."
    echo "  -E, --events            Coma-separared list of events (Default=[branch-load-misses,L1-icache-load-misses,iTLB-loads,"
    echo "                                                                  branch-loads,branch-instructions,branch-misses,"
    echo "                                                                  faults,dTLB-stores,cycles,dTLB-loads,instructions,"
    echo "                                                                  dTLB-load-misses,cache-references,LLC-stores,"
    echo "                                                                  LLC-store-misses,L1-dcache-stores,iTLB-load-misses,"
    echo "                                                                  LLC-loads,L1-dcache-loads,L1-dcache-load-misses,"
    echo "                                                                  dTLB-store-misses,LLC-load-misses,cache-misses])."
    echo "  -f, --force             Always compile."
    echo "  -F, --flags             Coma-separared list of flags (e.g., O0,O1,O2,...)"
    echo "  -n, --no-repr           Do not extract representation (Default=false)."
    echo "  -o, --out-dir           Path to the output directory."
    echo "  -p, --problems          Number of problems (Default=100)."  
    echo "  -r, --rouxinol          Path to the Rouxinol directory."
    echo "  -R, --representations   Coma-separared list of representations (e.g., llvmHistogram,ir2vec,...)"
    echo "  -s, --samples           Number of samples (Default=500)."  
    echo "  -w, --workers           Number of workers (Default=1)."  
    echo "  -h, --hep               Help"
    exit 1  
}  

# Check if no arguments are provided  
if [ $# -eq 0 ]; then  
    usage  
fi

# Parse command-line options using getopt  
OPTIONS=$(getopt -o o:r:R:c:a:d:p:w:s:e:E:F:nfh --long out-dir:,rouxinol:,representations:,conda:,app-dir:,dataset:,problems:,workers:,samples:,entry:,events:,flags:,no-repr,force,help -- "$@")  
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
        -r|--rouxinol)  
            rouxinol_directory="$2"  
            shift 2  
            ;;   
        -R|--representations)  
            representations="$2"  
            shift 2  
            ;;                          
        -c|--conda)  
            conda_directory="$2"  
            shift 2  
            ;;  
        -a|--app-dir)  
            rouxinol_app_directory="$2"
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
        -w|--workers)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                workers="$2"  
            else  
                echo "Error: --workers must be an integer greater than 0."  
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
        -e|--entry)  
            if [[ "$2" =~ ^[0-9]+$ ]] && [ "$2" -gt 0 ]; then  
                rounds="$2"  
            else  
                echo "Error: --rounds must be an integer greater than 0."  
                exit 1  
            fi  
            shift 2  
            ;;
        -E|--events)  
            events="$2"
            shift 2
            ;;
        -F|--flags)  
            flags="$2"
            shift 2
            ;;            
        -n|--no-repr)  
            do_not_extract_representation=true
            add_command="$add_command --no_repr "
            shift
            ;; 
        -f|--force)
            add_command+="$add_command --force=True "
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


# Check if dataset is set and if it is in the valid_datasets array
valid_datasets=("cses" "openjudge")  

if [ -z "${dataset}" ]; then  
    echo "Error: --dataset is not set."  
    exit 1  
else  
    # Initialize a flag to check if the dataset is valid  
    valid=false  

    # Loop through the valid_datasets array  
    for valid_dataset in "${valid_datasets[@]}"; do  
        if [ "${dataset}" == "${valid_dataset}" ]; then  
            valid=true  
            break  
        fi  
    done  

    # Check if the dataset is valid  
    if [ "${valid}" = false ]; then  
        echo "Error: '${dataset}' is not a valid dataset."  
        exit 1  
    fi  
fi

# Check if directories exist  
dirs=("${output_directory}" "${rouxinol_directory}" "${conda_directory}")
for (( d=0; d<${#dirs[@]}; d++ )); do
    dir=${dirs[d]}
    case "${d}" in  
        0)  
            name="--out-dir"
            ;;
        1)  
            name="--rouxinol"  
            ;;  
        2)  
            name="--conda"  
            ;;
    esac
    if [ -z "${dir}" ]; then  
        echo "Error: '${name}' is required."  
        exit 1  
    fi
    if [ ${d} -eq 0 ]; then
        continue
    fi     
    if [ ! -d "${dir}" ]; then  
        echo "Error: Directory '${name}' does not exist."  
        exit 1  
    fi  
done 

# Validate representations
IFS=',' read -r -a representation_array <<< "${representations}"
valid_representations=("programl" "llvmHistogram" "x86Histogram" "cfggrindHybridHistogram" "cfggrindDynamicHistogram"  "performanceCounterHistogram" "ir2vec" "inst2vecEmbeddings" "inst2vecPreprocessed")

for repr in "${representation_array[@]}"; do
    if [[ ! " ${valid_representations[@]} " =~ " ${repr} " ]]; then
        echo "Error: Invalid benchmark ${repr}. Allowed values are: ${valid_representations[*]}"
        exit 1
    fi
done

# Validate flags
IFS=',' read -r -a flag_array <<< "${flags}"
valid_flags=("O0" "O1" "O2" "O3" "fla" "sub" "bcf" "ollvm")

for flag in "${flag_array[@]}"; do
    if [[ ! " ${valid_flags[@]} " =~ " ${flag} " ]]; then
        echo "Error: Invalid benchmark ${flag}. Allowed values are: ${valid_flags[*]}"
        exit 1
    fi
done

export VALGRIND_LIB=${conda_directory}/envs/rouxinol/libexec/valgrind
export PYTHONPATH=${rouxinol_directory}

if [ -n "${rouxinol_app_directory}" ]; then
    if [ ! -d "${rouxinol_app_directory}" ]; then
        mkdir -p "${rouxinol_app_directory}" || {
            echo "Failed to create directory: ${rouxinol_app_directory}" >&2
            exit 1
        }
    fi
    export ROUXINOL_APP_DIR="${rouxinol_app_directory}"
fi

for (( r=0; r<${#representation_array[@]}; r++ )); do 
    representation=${representation_array[r]}
    
    echo -e "\nProcessing ${representation} ..."

    for (( f=0; f<${#flag_array[@]}; f++ )); do  
        flag=${flag_array[f]}

        echo -e "\t${flag} ..."

        # Set the variable x based on the current flag  
        case "${flag}" in  
            "O0")  
                c_flags="-O0 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O0 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "O1") 
                c_flags="-O1 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O1 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "O2")  
                c_flags="-O2 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O2 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "O3")  
                c_flags="-O3 -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-O3 -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "fla")  
                c_flags="-mllvm -fla -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -fla -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "sub")  
                c_flags="-mllvm -sub -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -sub -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;
            "bcf")  
                c_flags="-mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            "ollvm")
                c_flags="-mllvm -fla -mllvm -sub -mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie"
                cxx_flags="-mllvm -fla -mllvm -sub -mllvm -bcf -w -g -ggdb -fno-stack-protector -no-pie -DONLINE_JUDGE --std=c++17"
                ;;  
            *)  
                c_flags=""
                cxx_flags=""
                ;;  
        esac  

        case "${dataset}" in  
            "cses")
                python ${rouxinol_directory}/examples/cses_representation_extractor.py \
                    --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                    --cxx_flags="${cxx_flags}" \
                    --representation=${representation} \
                    --output_directory="${output_directory}/${flag}" \
                    --problems=${problems} \
                    --samples=${samples} \
                    --notimestamped \
                    --entry=${entry} \
                    --events=${events} \
                    ${add_command}
                ;;
            "openjudge")
                python ${rouxinol_directory}/examples/openjudge_representation_extractor.py \
                    --compiler_dir=${conda_directory}/envs/rouxinol/bin \
                    --c_flags="${c_flags}" \
                    --cxx_flags="${cxx_flags}" \
                    --representation=${representation} \
                    --output_directory="${output_directory}/${flag}" \
                    --problems=${problems} \
                    --samples=${samples} \
                    --notimestamped \
                    --events=${events} \
                    ${add_command}
                ;;
            *)
                ;;  
        esac 

    done  

done 



