#!/bin/bash

export CPATH=$1/include:$CPATH

function install_cfggrind {
  wget -qO - https://sourceware.org/pub/valgrind/valgrind-3.24.0.tar.bz2 | tar jxv
  cd valgrind-3.24.0
  git clone https://github.com/rimsa/CFGgrind.git cfggrind
  patch -p1 < cfggrind/cfggrind.patch
  ./autogen.sh
  ./configure --prefix=$1
  make -j $2 install
  cd ..
  rm -rf valgrind-3*
}

function install_ollvm {
  git clone https://github.com/heroims/obfuscator.git
  cd obfuscator
  git checkout llvm-10.x
  cmake -S llvm -B build -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra;compiler-rt" -DLLVM_TARGETS_TO_BUILD=X86 -DCMAKE_INSTALL_PREFIX=$1
  cd build
  make -j $2 install
  cd ../..
  rm -rf obfuscator
}

if [ $# -ne 2 ]; then
    echo "Usage: install_deps.sh {conda directory} {number of workers}"
    exit 1
fi

# Check if the second argument is greater than zero  
if [ $2 -gt 0 ]; then  
    workers=$2  
else  
    workers=1  
fi  

install_cfggrind $1/envs/rouxinol $workers
install_ollvm $1/envs/rouxinol $workers

