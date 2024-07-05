#include <iomanip>
#include <iostream>
#include <llvm/IR/Module.h>
#include <llvm/Passes/PassBuilder.h>
#include <llvm/Passes/PassPlugin.h>

#include "Extractor.hpp"

using namespace feature_extractor;
using namespace llvm;

namespace {

void visitor(Module &M) {
  FeatureExtractor msf(M);
}

struct FeatureExtractorPass : PassInfoMixin<FeatureExtractorPass> {
  PreservedAnalyses run(Module &M, ModuleAnalysisManager &) {
    visitor(M);
    return PreservedAnalyses::all();
  }
};

struct LegacyFeatureExtractorPass : public ModulePass {
  static char ID;
  LegacyFeatureExtractorPass() : ModulePass(ID) {}
  bool runOnModule(Module &M) override {
    visitor(M);
    return false;
  }
};

} // namespace

extern "C" LLVM_ATTRIBUTE_WEAK PassPluginLibraryInfo llvmGetPassPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "FeatureExtractor", LLVM_VERSION_STRING,
          [](PassBuilder &PB) {
            PB.registerPipelineParsingCallback(
                [](StringRef Name, ModulePassManager &MPM,
                   ArrayRef<PassBuilder::PipelineElement>) {
                  if (Name == "msf") {
                    MPM.addPass(FeatureExtractorPass());
                    return true;
                  }
                  return false;
                });
          }};
}

char LegacyFeatureExtractorPass::ID = 0;
static RegisterPass<LegacyFeatureExtractorPass> X(/*PassArg=*/"msf",
                                           /*Name=*/"feature-extractor Pass",
                                           /*CFGOnly=*/true,
                                           /*is_analysis=*/false);

#ifdef LT_OPT_PIPELINE_REG

static llvm::RegisterStandardPasses
    RegisterFeatureExtractorPass(llvm::PassManagerBuilder::EP_EarlyAsPossible,
                          [](const llvm::PassManagerBuilder &Builder,
                             llvm::legacy::PassManagerBase &PM) {
                            PM.add(new LegacyFeatureExtractorPass());
                          });
#endif
