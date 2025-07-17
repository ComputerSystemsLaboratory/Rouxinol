#!/bin/bash  

# Generate X86 Histogram
generate_histogram() {  
  # Ensure exactly two parameters are provided  
  if [ "$#" -ne 2 ]; then  
    echo "Usage: generate_histogram_yaml <binary_file> <output_file>"  
    return 1  
  fi  

  # Input parameters  
  local binary_file=$1  
  local output_file=$2  

  # Check if the binary file exists  
  if [ ! -f "${binary_file}" ]; then  
    echo "Error: File ${binary_file} not found!"  
    return 1  
  fi  

  # Generate objdump disassembly and process it  
  llvm-objdump -d "${binary_file}" | \
  # Extract only instruction mnemonics (ignore addresses and opcodes)  
  awk '/^[0-9a-f]+:/ { $1=$2=""; print $10 }' | \
  # Filter non-empty lines and valid instruction mnemonics (alphabetic mnemonics only)  
  grep -E "^[a-z]+" | \
  # Sort instructions and count the frequency of each  
  sort | uniq -c | \
  # Format the results as YAML by transforming "count instruction" into "instruction: count"  
  awk '{ print $2": "$1 }' > "${output_file}"   
}  

# Function to display usage  
usage() { 
    echo "SAMOS 2025 Artifact"
    echo "Copyright (C) 2025 Anderson Faustino da Silva"
    echo "" 
    echo "Usage: $0 -b LIST -d LIST -l DIR -p DIR -P STR -t LIST -u LIST [-f] [-h]"  
    echo ""  
    echo "Commands:"
    echo "  -b, --benchmarks         Coma-separared list of benchmarks (e.g., BS,GEMV,HST-L)"    
    echo "  -d, --dpus               Comma-separated list of DPUs (e.g., 1,2,4,8)"      
    echo "  -f, --force              Generate the x86Histogram even if it exits (default=False)"     
    echo "  -l, --log                Log files directory (use absolute path)" 
    echo "  -p, --package            Package (benchmark) directory"       
    echo "  -P, --passes             Filename containing optimization sequences, one per line"     
    echo "  -t, --tasklets           Comma-separated list of tasklets (e.g., 1,2,4,8)"  
    echo "  -u, --upmem              UPMEM SDK directory (use absolute path)" 
    echo "  -h, --help               Help"      
    exit 1  
}  

# Initialize variables 
log_directory=""  
upmem_directory=""
package_directory=""
benchmarks=""  
num_tasklets=""  
num_dpus=""  
passes_file=""
force=0 

# Parse command-line arguments using getopt  
OPTIONS=$(getopt -o p:b:t:d:P:l:u:fh --long package:,benchmarks:,tasklets:,dpus:,passes:,log:,upmem:,force,help -- "$@")  
if [ $? -ne 0 ]; then  
    usage  
fi  

eval set -- "$OPTIONS"  

# Extract options  
while true; do  
    case "$1" in  
        -p|--package)  
            package_directory="$2"  
            shift 2  
            ;;    
        -b|--benchmarks)  
            benchmarks="$2"  
            shift 2  
            ;;             
        -t|--tasklets)  
            num_tasklets="$2"  
            shift 2  
            ;;  
        -d|--dpus)  
            num_dpus="$2"  
            shift 2  
            ;;  
        -P|--passes)  
            passes_file="$2"  
            shift 2  
            ;;   
        -l|--log)  
            log_directory="$2"  
            shift 2  
            ;;  
        -u|--upmem)  
            upmem_directory="$2"  
            shift 2  
            ;; 
        -f|--force)  
            force=1  
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
            echo "Invalid option: $1"  
            usage  
            ;;  
    esac  
done  

# Check if all required arguments are provided  
if [[ -z "${package_directory}" || -z "${benchmarks}" || -z "${num_tasklets}" || -z "${num_dpus}" || -z "${passes_file}" || -z "${log_directory}" || -z "${upmem_directory}" ]]; then  
    usage  
fi  

# Check if the package directory exists
if [[ ! -d "${package_directory}" ]]; then  
    echo "Error: Package directory ${package_directory} does not exist."   
    exit 1  
fi 

# Check if the passes file exists and is not empty  
if [[ ! -f "${passes_file}" || ! -s "${passes_file}" ]]; then  
    echo "Error: Passes file ${passes_file} does not exist or is empty."   
    exit 1  
fi   

# Check if the upmem directory exists
if [[ ! -d "${upmem_directory}" ]]; then  
    echo "Error: UPMEM directory ${upmem_directory} does not exist."   
    exit 1  
fi  

if [[ ! -f "${upmem_directory}/upmem_env.sh" ]]; then  
    echo "Error: UPMEM env ${upmem_directory}/upmem_env.sh does not exist."   
    exit 1  
fi

# Validate benchmark  
IFS=',' read -r -a benchmarks_array <<< "${benchmarks}"  
valid_benchmarks=("BFS" "BS" "GEMV" "HST-L" "HST-S" "LiRnQ" "LiRQ" "LoRnQ" "LoRQ" "MLP" "NW" "RED" "SCAN-RSS" "SCAN-SSA" "SEL" "SpMV" "TRNS" "TS" "UNI" "VA")  

for bm in "${benchmarks_array[@]}"; do  
    if [[ ! " ${valid_benchmarks[@]} " =~ " ${bm} " ]]; then  
        echo "Error: Invalid benchmark ${bm}. Allowed values are: ${valid_benchmarks[*]}"  
        exit 1 
    fi
    if [[ ! -d "${package_directory}/${bm}" ]]; then  
        echo "Error: Benchmark directory ${package_directory}/${bm} does not exist."   
        exit 1  
    fi 
done   

# Create log directory if it doesn't exist  
mkdir -p "${log_directory}"  

# Initiate UPMEM environment
source "${upmem_directory}/upmem_env.sh"

# Get the absolute path of the script directory  
current_dir="${PWD}"  

# Convert comma-separated lists into arrays  
IFS=',' read -r -a tasklet_array <<< "${num_tasklets}"  
IFS=',' read -r -a dpu_array <<< "${num_dpus}"

# Read passes from the file into an array, skipping comments and blank lines  
mapfile -t passes_array < <(grep -v '^\s*#' "${passes_file}" | grep -v '^\s*$')  

# Check if the array is empty  
if [ ${#passes_array[@]} -eq 0 ]; then  
    echo "There are no compiler optimization sequences. Exiting."  
    exit 1  
fi   

# Log the start of the process  
for bm in "${benchmarks_array[@]}"; do

    # Create benchmark dir
    mkdir -p "${log_directory}/${bm}"
    
    # Remove previous log
    rm -f ${bm}.out

    # Start
    echo "" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
    echo "================================================================================" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
    echo "Starting benchmark process for ${bm} at $(date)" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null   
    echo "================================================================================" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
    
    # Iterate over tasklets
    for T in "${tasklet_array[@]}"; do  
        
        # Iterate over DPUS
        for D in "${dpu_array[@]}"; do  

            # Check if T < D  
            if [[ "${T}" -lt "${D}" ]]; then  
                # Skip this iteration  
                continue  
            fi  

            # Iterate over each pass  
            for P_index in "${!passes_array[@]}"; do  
                P="${passes_array[$P_index]}"  

                histogram_filename="${log_directory}/${bm}/cos_${P_index}_tasklets_${T}_dpus_${D}.yml"
                
                # Check if the file exists  
                if [[ ${force} -eq 0 ]] && [[ -f "${histogram_filename}" ]]; then 
                    continue
                fi

                # Compile and link if log does not exist or is invalid  
                echo "Running: make NR_TASKLETS=${T} NR_DPUS=${D} PASSES=${P}" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null
                cd ${package_directory}/${bm}
                make clean
                make NR_TASKLETS=${T} NR_DPUS=${D} PASSES="${P}"
                
                # Check if compilation OK
                if [[ ! -f "bin/host_code" ]] || [[ ! -f "bin/dpu_code" ]]; then   
                    continue
                fi

                # Generate X86 Histogram
                echo -e "Disassembling and generating histogram in YAML format...\n" | tee -a "${log_directory}/${bm}/log.out" &> /dev/null

                generate_histogram bin/dpu_code "${histogram_filename}"

                make clean

            done
  
        done
        
    done  

    # Log the end of the process
    echo "================================================================================" | tee -a "$log_directory/$bm/log.out" &> /dev/null  
    echo "Benchmark process for $bm completed at $(date)" | tee -a "$log_directory/$bm/log.out" &> /dev/null  
    echo "================================================================================" | tee -a "$log_directory/$bm/log.out" &> /dev/null
done

cd "$current_dir"