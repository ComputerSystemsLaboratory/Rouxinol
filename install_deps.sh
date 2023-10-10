#!/bin/bash

function install_system_packages {
  wget https://apt.llvm.org/llvm.sh
  chmod +x llvm.sh
  sudo ./llvm.sh 12
  rm llvm.sh
  sudo apt update
  sudo apt install -y graphviz libgraphviz-dev
  sudo apt install -y gcc-7 g++-7
  sudo apt install -y python3-pip
}

function install_cfggrind {
  wget -qO - https://sourceware.org/pub/valgrind/valgrind-3.19.0.tar.bz2 | tar jxv
  cd valgrind-3.19.0
  git clone https://github.com/rimsa/CFGgrind.git cfggrind
  patch -p1 < cfggrind/cfggrind.patch
  ./autogen.sh
  ./configure
  make -j8
  sudo make install
  cd ..
  rm -rf valgrind-3.19.0*
}

function install_ollvm {
  wget --quiet https://github.com/Kitware/CMake/releases/download/v3.5.1/cmake-3.5.1.tar.gz
  tar xzf cmake-3.5.1.tar.gz
  cd cmake-3.5.1
  ./configure --prefix=/opt/cmake-3.5.1
  make -j 8
  make install
  cd ..
  rm -rf cmake-3.5.1*

  git clone -b llvm-4.0 https://github.com/obfuscator-llvm/obfuscator.git
  mkdir ollvm
  cd ollvm
  /opt/cmake-3.5.1/bin/cmake -DCMAKE_C_COMPILER=gcc-7 -DCMAKE_CXX_COMPILER=g++-7 -DCMAKE_INSTALL_PREFIX=/opt/ollvm -DLLVM_INCLUDE_TESTS=OFF \
        -DLLVM_INCLUDE_EXAMPLES=OFF -DLLVM_INCLUDE_DOCS=OFF -DCMAKE_BUILD_TYPE=Release ../obfuscator
  make -j 8
  make install
  cd ..
  rm -rf obfuscator ollvm
}

function install_compy_learn {
  git clone https://github.com/AndersonFaustino/compy-learn.git
  cd compy-learn
  git checkout development

  ./install_deps.sh
  python3 -m pip install .

  rm -rf compy-learn
}

function install_python_packages {
  python3 -m pip install dict-to-dataclass
}

install_system_packages
install_cfggrind
install_ollvm
install_compy_learn
install_python_packages