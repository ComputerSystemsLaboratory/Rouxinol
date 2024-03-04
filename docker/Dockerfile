# 
# From
#
FROM nvidia/cuda:11.8.0-runtime-ubuntu22.04

#
# Arguments
#
ARG CUDA=cu118
ARG TORCH=2.1.2
ARG USERNAME=rouxinol
ARG THREADS=1

#
# Zone
#
ENV TZ="America/Sao_Paulo"
RUN ln -snf /usr/share/zoneinfo/$TZ /etc/localtime && echo $TZ > /etc/timezone

#
# Packages
#
RUN apt-get update && apt-get install -y \
    autoconf \
    automake \
    bc \
    cmake \
    curl \
    dc \
    git \
    gcc \
    g++ \
    gawk \
    google-perftools \
    libeigen3-dev \
    locales \
    nano \
    python-is-python3 \
    python3-dev \
    python3-pip \
    python3-yaml \
    sudo \
    tar \
    unzip \
    vim \
    wget \
    zip \
    graphviz \
    libgraphviz-dev \
    libssl-dev \
    && rm -rf /var/lib/apt/lists/* \
    && localedef -i en_US -c -f UTF-8 -A /usr/share/locale/locale.alias en_US.UTF-8

#
# CFGgrind
#
RUN wget -qO - https://sourceware.org/pub/valgrind/valgrind-3.19.0.tar.bz2 | tar jxv \
    && cd valgrind-3.19.0 \
    && git clone https://github.com/rimsa/CFGgrind.git cfggrind \
    && patch -p1 < cfggrind/cfggrind.patch \
    && ./autogen.sh \
    && ./configure \
    && sudo make -j ${THREADS} install \
    && cd .. \
    && rm -rf valgrind-3.19.0*

#
# OLLVM 12
#
RUN ln -s /lib/x86_64-linux-gnu/libtic.so.6.2 /lib/x86_64-linux-gnu/libtinfow.so.6
RUN git clone https://github.com/heroims/obfuscator.git \
    && cd obfuscator \
    && git checkout llvm-12.x \
    && cmake -S llvm -B build -DLLVM_ENABLE_PROJECTS="clang;clang-tools-extra;compiler-rt" -DLLVM_TARGETS_TO_BUILD=X86 \
    && cd build \
    && sudo make -j ${THREADS} install \
    && cd ../.. \
    && rm -rf obfuscator

#
# Creating a non-root user
#
RUN useradd --create-home --gid sudo --shell /bin/bash --system ${USERNAME} \
    && echo "${USERNAME} ALL=(ALL) NOPASSWD:ALL" | tee -a /etc/sudoers

#
# Switching to a non-root user
#
USER ${USERNAME}
WORKDIR /home/${USERNAME}
ENV LANG en_US.utf8

#
# Python packages
#
RUN python3 -m pip install torch==${TORCH}+${CUDA} -f https://download.pytorch.org/whl/torch_stable.html
RUN python3 -m pip install torch-geometric -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
RUN python3 -m pip install torch-scatter -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
RUN python3 -m pip install torch-sparse -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
RUN python3 -m pip install torch-cluster -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html
RUN python3 -m pip install torch-spline-conv -f https://pytorch-geometric.com/whl/torch-${TORCH}+${CUDA}.html

RUN python3 -m pip install dgl -f https://data.dgl.ai/wheels/${CUDA}/repo.html
RUN python3 -m pip install tensorflow

#
# Rouxinol
#
RUN wget http://www.csl.uem.br/repository/rouxinol/Rouxinol-1.0.0.tar.gz
RUN tar -xzf Rouxinol-1.0.0.tar.gz
RUN cd Rouxinol-1.0.0 \
    && pip3 install . \
    && mv task ../rouxinol.task \
    && cd .. \
    && rm -rf Rouxinol*
