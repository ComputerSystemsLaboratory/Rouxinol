# `feature-extractor`

**This software is a LLVM Pass to extract static program features.**

The extracted features are those present in the following article:

[Practical Aggregation of Semantical Program Properties for Machine Learning Based Optimization](https://hal.inria.fr/inria-00551512/document).

Maintainers: [André F. Zanella](https://gitlab.com/andrefz) & [Leonardo H. Neumann](https://gitlab.com/leonardohn).

### Setting up

```
git clone https://gitlab.com/andrefz/feature-extractor.git
cd feature-extractor
mkdir build
cd build
CC=clang CXX=clang++ DLT_OPT_PIPELINE_REG=On cmake .. && make
```

### Running
```
opt -load-pass-plugin=lib/libMilepostStaticFeatures.so -passes="msf" -disable-output <path/to/file.bc>
```

### Using an optimization pipeline

To use a sequence of optimizations, run the pass with the legacy PM as follow:

```
opt -load=lib/libMilepostStaticFeatures.so -O1 -msf -disable-output <path/to/file.bc>
```

### License & copyright

Licensed under the [MIT License](LICENSE).
