# Welcome to Rouxinol

<p align="center">
  <img alt="logo" src="./doc/rouxinol_logo.jpg" width="150" height="150" align="left"/>
</p>

*The house wren (Troglodytes aedon) belongs to the wren family, Troglodytidae, and is a very small bird. 
Its habitat ranges from Canada to South America, making it the most extensively distributed native
bird throughout the Americas. In Brazil, this petite avian species is colloquially referred to as 
corruíra, corruíra, garrincha, cutipuruí, cambaxirra, carriça, garriça, carricinha, garricha, or rouxinal.*

<br clear="left"/>

---
# **Table of Contents**

- [Introduction](#introduction)
- [Getting Started](#getting-started)
    - [Prerequisites](#prerequisites)
    - [Setup](#setup)
- [Structure](#structure)

<a id="introduction"></a>
# **Introduction**

The application of machine learning has been instrumental in the progress of compilers. The efficacy of 
machine learning algorithms for compilers rely on the precision and expressiveness of code representation, 
which influences the model's learning capacity and performance. This repository introduces **Rouxinol**, 
providing developers with an infrastructure that enables exploration and innovation in this domain.

<a id="getting-started"></a>
# **Getting Started**

<a id="prerequisites"></a>
### **Prerequisites**

You need the following packages.

- <a href="https://www.python.org/"> Python 3 </a>
- <a href="https://llvm.org/"> LLVM </a>
- <a href="https://github.com/rimsa/CFGgrind"> CFGgrind </a>

<a id="setup"></a>
####  **Setup**

```bash
./install_deps.sh
```
```bash
./setup.py install
```

<a id="structure"></a>
# **Structure**

The repository has the following organization.
```bash
|-- code4ml "Samples folder"
    |-- OpenJudge.Sample "A sample"
|-- doc "Rouxinol documentation"
|-- docker "Dockerfile"
|-- rouxinol "The source code of Rouxinol"
    |-- code4ml "Benchmarks"
    |-- dataset "Pre-trained data"
    |-- environment "Compilation environments"
    |-- learning "Machine Learning models"
        |-- reinforcement "RL models"
        |-- supervised "Supervised models"
    |-- third_party "Third party software"
    |-- transformer "Code representations"
    |-- utility "Some utilities"
|-- task "Examples"
```
