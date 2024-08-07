#!/bin/bash

function install_system_packages {
  sudo apt install -y graphviz libgraphviz-dev gawk
}

function install_cfggrind {
  wget -qO - https://sourceware.org/pub/valgrind/valgrind-3.19.0.tar.bz2 | tar jxv
  cd valgrind-3.19.0
  git clone https://github.com/rimsa/CFGgrind.git cfggrind
  patch -p1 < cfggrind/cfggrind.patch
  ./autogen.sh
  ./configure
  sudo make -j 8 install
  cd ..
  rm -rf valgrind-3.19.0*
}

function install_ollvm {
  git clone https://github.com/heroims/obfuscator.git
  cd obfuscator
  git checkout llvm-12.x
  cmake -S llvm -B build -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra;flang;compiler-rt" -DLLVM_TARGETS_TO_BUILD=X86
  cd build
  sudo make -j 8 install
  cd ../..
  rm -rf obfuscator
}

function install_python_packages {
  CUDA=$1
  TORCH=$2
  python3 -m pip install torch==${TORCH}+${CUDA} -f https://download.pytorch.org/whl/torch_stable.html
  python3 -m pip install torch-geometric -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
  python3 -m pip install torch-scatter -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
  python3 -m pip install torch-sparse -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
  python3 -m pip install torch-cluster -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
  python3 -m pip install torch-spline-conv -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
  if [[ "$CUDA" != "cpu" ]]; then
    python3 -m pip install dgl -f https://data.dgl.ai/wheels/$CUDA/repo.html
    python3 -m pip install tensorflow
  else
    python3 -m pip install dgl
    python3 -m pip install tensorflow-cpu
  fi
}

if [ $# -eq 0 ]
  then
    echo "Usage: install_deps {cpu|cu92|cu100|cu101} {torch version}"
    exit 1
fi

install_system_packages
install_cfggrind
install_ollvm
install_python_packages $1 $2
