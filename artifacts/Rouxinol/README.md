# Compiler Construction 2025

Anderson Faustino da Silva, Jeronimo Castrillon, Fernando Magno Quintão Pereira, "**A Comparative Study on the Accuracy and the Speed of Static and Dynamic Program Classifiers**", Proceedings of the 34th ACM SIGPLAN International Conference on Compiler Construction (CC 2025), Association for Computing Machinery, New York, NY, USA, Mar 2025.

---
## **Prepare the Workflow**

1. Download and install Anaconda

2. Clone Rouxinol
```bash
git clone https://github.com/ComputerSystemsLaboratory/Rouxinol.git
```

3. Create a Rouxinol conda environment
```bash
cd Rouxinol
conda env create -f rouxinol_<cpu|gpu>.yml
```

4. Install the dependencies
```bash
./install.sh <CONDA DIRECTORY> <NUMBER OF WORKERS> 
```

5. Install Rouxinol
```bash
conda activate rouxinol
cd Rouxinol
pip install .
```

OR

5. Build Rouxinol
```bash
conda activate rouxinol
cd Rouxinol
cd ./setup.py build
export PYTHONPATH=<ROUXINOL DIRECTORY>
```
---
## **Reproduce the Results**

You need to set the following variables. *ROUXINOL OUTPUT DIRECTORY* is the directory where the data (LLVM IR, executable, representations, and statistics) will be stored. *ROUXINOL DIRECTORY* is the installation directory of Rouxinol. *CONDA DIRECTORY* is the installation directory of Anaconda. *ROUXINOL_APP_DIR* is the directory that contains the benchmarks; it is an optional variable, and if it is not set, Rouxinol will use the default directory (see Rouxinol/rouxinol/dataset.py). Always use absolute path.

1. Activate Rouxinol conda environment
```bash
conda activate rouxinol
```

2. Generate the figures' data
```bash
cd Rouxinol/artifacts/CC_2025
./data_generator.sh 
    --out-dir <ROUXINOL OUTPUT DIRECTORY>
    --rouxinol <ROUXINOL DIRECTORY> 
    --conda <CONDA DIRECTORY> 
    --app-dir <ROUXINOL_APP_DIR>
```

3. Generate classification results for Game X
```bash
cd Rouxinol/artifacts/CC_2025
./data_classifier.sh 
    --out-dir <ROUXINOL OUTPUT DIRECTORY>
    --dataset <ROUXINOL OUTPUT DIRECTORY>/statistics/workload.yml
    --rouxinol <ROUXINOL DIRECTORY>
    --rounds <ROUNDS>
    --game X
```

4. Edit plot_figures.sh
```bash
cd Rouxinol/artifacts/CC_2025
vim plot_figures.sh
```

5. Plot the figures
```bash
cd Rouxinol/artifacts/CC_2025
./plot_figures.sh
```
