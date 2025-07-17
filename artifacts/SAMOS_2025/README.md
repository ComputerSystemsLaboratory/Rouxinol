# SAMOS 2025

Anderson Faustino da Silva, Hamid Farzaned, Joao Paulo Cardoso De Lima, Asif Ali Khan, Jeronimo Castrillon, "**LearnCNM2Predict: Transfer Learning-based Performance Model for CNM Systems**", Proceedings of the 25st IEEE International Conference on Embedded Computer Systems: Architectures Modeling and Simulation (SAMOS), Springer-Verlag, Berlin, Heidelberg, Jul 2025.

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

1. Activate Rouxinol conda environment
```bash
conda activate rouxinol
```

2. Generate UPMEM data (runtime)
```bash
cd Rouxinol/artifacts/SAMOS_2025
./upmem_data_generator.sh -h
```

3. Generate x86 Histograms
```bash
cd Rouxinol/artifacts/SAMOS_2025
./x86_embeddings_generator.sh -h
```

4. Train L2P Model
```bash
cd Rouxinol/artifacts/SAMOS_2025
python offline_trainer --help
```

5. Test L2P Model
```bash
cd Rouxinol/artifacts/SAMOS_2025
python infer --help
```
