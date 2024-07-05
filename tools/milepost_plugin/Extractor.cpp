#include <llvm/ADT/GraphTraits.h>
#include <llvm/ADT/SCCIterator.h>
#include <llvm/ADT/StringRef.h>
#include <llvm/Analysis/CFG.h>
#include <llvm/Analysis/LoopInfo.h>
#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/CFG.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Instruction.h>
#include <llvm/IR/Instructions.h>
#include <llvm/IR/LegacyPassManager.h>
#include <llvm/IR/Module.h>
#include <llvm/IR/Operator.h>
#include <llvm/IR/PassManager.h>
#include <llvm/IR/Value.h>
#include <llvm/Pass.h>
#include <llvm/Support/Casting.h>
#include <llvm/Support/raw_ostream.h>
#include <llvm/Transforms/IPO/PassManagerBuilder.h>
#include <math.h>
#include <ostream>
#include <set>

#include "Extractor.hpp"

using namespace llvm;

namespace feature_extractor {

FeatureExtractor::FeatureExtractor(Module &module) {

  for (Function &function : module) {

    StringRef fname = function.getName();
    if (function.isDeclaration() == 0) {

      // Basic Block Predecessors/Successors;
      unsigned totalBasicBlocks = 0, onePredecessor = 0, twoPredecessor = 0,
               greaterTwoPredecessor = 0, oneSuccessor = 0, twoSuccessor = 0,
               greaterTwoSuccessor = 0, onePredSuc = 0, onePred_twoSuc = 0,
               twoPred_oneSuc = 0, twoPredSuc = 0, greaterTwoPredSuc = 0;

      // Function Instructions;
      unsigned assigmentInstructions = 0, numOfIntOperations = 0,
               numOfFloatOperations = 0, numInstructions = 0,
               numOfSwitchInstruction = 0, numOfUnaryOperations = 0,
               ptrArithmetic = 0, oneOperandConst = 0, leftOpIntConst = 0;

      // Basic Block Instructions;
      float instructionAverage = 0.0;
      unsigned instructionLess15 = 0, instructionInterval = 0,
               instructionGreater500 = 0;

      // Calls;
      unsigned ptrRetCallType = 0, call4args = 0, intRetCallType = 0,
               directCalls = 0, callArgPtrType = 0, indirectCalls = 0;

      // Branchs;
      unsigned condBranch = 0, uncondBranch = 0;

      // Phi-nodes;
      float averagePhi = 0.0, averagePhiArgs = 0.0;
      unsigned blockWithoutPhi = 0, blockPhiIntervalNodes = 0,
               blockPhiGreater3Nodes = 0, blocksPhiGreater5Arg = 0,
               blocksPhiIntervalArg = 0;

      //  Variables;
      unsigned constInt0 = 0, constInt32bits = 0, constInt1 = 0,
               constInt64bits = 0, refLocalVariable, localPtrVar = 0,
               numRefeOfLocalVar = 0, defUseCounter = 0, refExterVariable = 0,
               staticPtrVar = 0, addresVar = 0;

      // Control Flow Graph;
      unsigned numOfCriticalEdges = 0, abnormalEdge = 0, numOfEdges = 0;

      // References and Functions;
      unsigned indirectRefs = 0, addressFunction = 0;

      // Auxiliary variables (not counters)
      unsigned blockWithPhi = 0, totalPhiArgs = 0, totalPhi = 0;

      std::set<Value *> varRefTemp;
      std::set<GlobalVariable *> ExterRefVarTemp;

      /*~~~~*/
      for (BasicBlock &block : function) {

        const Instruction *terminalInstruction = block.getTerminator();
        unsigned numOfSuccessors = terminalInstruction->getNumSuccessors();

        if (numOfSuccessors == 1)
          ++oneSuccessor;
        else if (numOfSuccessors == 2)
          ++twoSuccessor;
        else if (numOfSuccessors > 2)
          ++greaterTwoSuccessor;

        unsigned localPredecessorBlocks = 0;
        for (BasicBlock *predecessor : predecessors(&block)) {
          ++localPredecessorBlocks;
        }

        if (localPredecessorBlocks == 1)
          ++onePredecessor;
        else if (localPredecessorBlocks == 2)
          ++twoPredecessor;
        else if (localPredecessorBlocks > 2)
          ++greaterTwoPredecessor;

        for (BasicBlock *successor : successors(&block)) {
          ++numOfEdges;
        }

        if ((localPredecessorBlocks == 1) && (numOfSuccessors == 1))
          ++onePredSuc;
        else if ((localPredecessorBlocks == 1) && (numOfSuccessors == 2))
          ++onePred_twoSuc;
        else if ((localPredecessorBlocks == 2) && (numOfSuccessors == 1))
          ++twoPred_oneSuc;
        else if ((localPredecessorBlocks == 2) && (numOfSuccessors == 2))
          ++twoPredSuc;
        else if ((localPredecessorBlocks > 2) && (numOfSuccessors > 2))
          ++greaterTwoPredSuc;

        if (numOfSuccessors != 0) {
          for (int m = 0; m < numOfSuccessors; m++) {
            if (isCriticalEdge(terminalInstruction, m)) {
              ++numOfCriticalEdges;
            }
          }
        }
        ++totalBasicBlocks;
        unsigned phiCounterBlock = 0, localPhiArgs = 0;

        /*~~~~*/
        for (Instruction &instruction : block) {

          unsigned numOperands = instruction.getNumOperands();
          unsigned tempIndirecCount = 0;
          Type *instructionTy = instruction.getType();

          if (auto *SI = dyn_cast<StoreInst>(&instruction)) {
            /* There are two arguments to the store instruction:
               a value to store and an address at which to store it
            */
            Value *isInstValue = instruction.getOperand(0);
            Type *getTypeBits = isInstValue->getType();

            if (getTypeBits->isPointerTy())
              ++indirectRefs;
            if (isa<Function>(isInstValue))
              ++addressFunction;
            if ((getTypeBits->isPointerTy()) && (isa<Instruction>(isInstValue)))
              ++addresVar;

          } else if (auto *BI = dyn_cast<BranchInst>(&instruction)) {
            if (BI->isConditional())
              ++condBranch;
            else if (BI->isUnconditional())
              ++uncondBranch;
          } else if (auto *SI = dyn_cast<SwitchInst>(&instruction)) {
            ++numOfSwitchInstruction;
          } else if (auto *CI = dyn_cast<CallInst>(&instruction)) {
            Function *callFunction = CI->getCalledFunction();
            Type *callType = CI->getType();

            if (callType->isIntegerTy())
              ++intRetCallType;
            else if (callType->isPointerTy())
              ++ptrRetCallType;
            /*  if calledFunction is nullptr and stripped value is a
                function, then, it's a direct call in the generate assembly.
                (Ref:
                https://lists.llvm.org/pipermail/llvm-dev/2018-August/125098.html)
            */
            if (callFunction == nullptr) {
	      // LLVM 10.0.0
              //Value *calledValue = CI->getCalledValue()->stripPointerCasts();
              //if (isa<Function>(calledValue))
              //  ++directCalls;
              //else
              //  ++indirectCalls;

	      // LLVM 12.0.0
	      if (CI->isIndirectCall())
		++indirectCalls;
	      else
		++directCalls;
            } else
              ++directCalls;

            unsigned argsCount = 0;
            if (callFunction != nullptr) {
              unsigned numArgOp = CI->getNumArgOperands();

              for (int arg = 0; arg < numArgOp; arg++) {
                Type *argTy = CI->getArgOperand(arg)->getType();
                if (argTy->isPointerTy())
                  ++tempIndirecCount;
                ++argsCount;
              }
            }
            if (tempIndirecCount != 0)
              ++callArgPtrType;
            if (argsCount > 4)
              ++call4args;
          }
          /*  The ‘invoke’ instruction causes control to transfer to a specified
             function, with the possibility of control flow transfer to either
             the ‘normal’ label or the ‘exception’ label. If the callee function
             returns with the “ret” instruction, control flow will return to the
             “normal” label. If the callee (or any indirect callees) returns via
             the “resume” instruction or other exception handling mechanism,
             control is interrupted and continued at the dynamically nearest
             “exception” label. (Ref:
             http://llvm.org/docs/LangRef.html#invoke-instruction)
          */
          else if (auto *II = dyn_cast<InvokeInst>(&instruction))
            ++abnormalEdge;

          if (UnaryOperator *UN = dyn_cast<UnaryOperator>(&instruction))
            ++numOfUnaryOperations;
          else if (BinaryOperator *BIO =
                       dyn_cast<BinaryOperator>(&instruction)) {

            Value *firstBinOp = BIO->getOperand(0);
            Value *secondBinOp = BIO->getOperand(1);
            Type *firstBinOpTy = BIO->getOperand(0)->getType();
            Type *secondBinOpTy = BIO->getOperand(1)->getType();

            if ((firstBinOpTy->isIntegerTy()) && (secondBinOpTy->isIntegerTy()))
              ++numOfIntOperations;
            else if ((firstBinOpTy->isFloatingPointTy()) &&
                     (secondBinOpTy->isFloatingPointTy()))
              ++numOfFloatOperations;
            else if ((firstBinOpTy->isPointerTy()) ||
                     (secondBinOpTy->isPointerTy()))
              ++ptrArithmetic;

            if ((isa<ConstantInt>(firstBinOp)) ||
                (isa<ConstantInt>(secondBinOp)))
              ++oneOperandConst;
          }

          if (isa<PHINode>(&instruction)) {
            /* The num of operands is the num of arguments for a phi node*/
            unsigned phiOperands = instruction.getNumOperands();
            localPhiArgs += phiOperands;
            totalPhiArgs += phiOperands;
            ++phiCounterBlock;
            ++totalPhi;
          }

          if ((instructionTy->isVoidTy()) == 0) {
            ++assigmentInstructions;
            /* Number of assignment instructions with the left operand
             an integer constant in the method. Here, a left operand is
             being considered as the first operand in instruction with
             two operands. */
            if (numOperands == 2) {
              if (ConstantInt *intConst =
                      dyn_cast<ConstantInt>(instruction.getOperand(0))) {
                ++leftOpIntConst;
              }
            }

            if (instructionTy->isPointerTy())
              ++localPtrVar;
          }

          if (isa<AllocaInst>(&instruction) == 0) {
            for (Use &U : instruction.operands()) {
              if (isa<Instruction>(U)) {
                varRefTemp.insert(U);
                ++numRefeOfLocalVar;
              }

              if (ConstantInt *zeroOne = dyn_cast<ConstantInt>(U)) {
                Type *getTypeBits = zeroOne->getType();

                if (getTypeBits->isIntegerTy(32))
                  ++constInt32bits;
                else if (getTypeBits->isIntegerTy(64))
                  ++constInt64bits;
                if ((zeroOne->getSExtValue()) == 0 &&
                    (getTypeBits->isIntegerTy()))
                  ++constInt0;
                else if ((zeroOne->getSExtValue() == 1) &&
                         (getTypeBits->isIntegerTy()))
                  ++constInt1;
              }

              if (GlobalVariable *GV = dyn_cast<GlobalVariable>(U)) {
                ExterRefVarTemp.insert(GV);
                if (GV->getNumOperands()) {
                  Type *getType = GV->getOperand(0)->getType();
                  if (getType->isPointerTy()) {
                    ++staticPtrVar;
                  }
                }
                /* getInitializer() it's illegal if the GV is external.
                if (Constant* constValeu = GV->getInitializer()) {
                  errs() << "const: " << *constValeu << "\n";
                }*/
                ++defUseCounter;
              }
            }
          }

          if (GEPOperator *gepo = dyn_cast<GEPOperator>(&instruction)) {
            for (auto it = gepo->idx_begin(), et = gepo->idx_end(); it != et;
                 it++) {
              if (GlobalVariable *gv = dyn_cast<GlobalVariable>(*it)) {
                //++defUseCounter;
              }
            }
          }
          ++numInstructions;
        }

        if (phiCounterBlock > 3) {
          ++blockPhiGreater3Nodes;
        } else if ((phiCounterBlock >= 0) && (phiCounterBlock <= 3)) {
          ++blockPhiIntervalNodes;
        }

        if (localPhiArgs > 5) {
          ++blocksPhiGreater5Arg;
        } else if ((localPhiArgs > 0) && (localPhiArgs < 6)) {
          ++blocksPhiIntervalArg;
        }

        if (phiCounterBlock != 0)
          ++blockWithPhi;

        unsigned instPerBB = block.size();
        if (instPerBB < 15)
          ++instructionLess15;
        else if ((instPerBB >= 15) && (instPerBB <= 500))
          ++instructionInterval;
        else if (instPerBB > 500)
          ++instructionGreater500;
      }

      if (totalPhiArgs == 0)
        averagePhiArgs = 0.0;
      else {
        averagePhiArgs = (float)totalPhiArgs / totalPhi;
      }

      /* In case of functions like printf*/
      if (totalBasicBlocks == 0) {
        instructionAverage = 0;
        averagePhi = 0;
      } else {
        averagePhi = (float)totalPhi / totalBasicBlocks;
        instructionAverage = (float)numInstructions / totalBasicBlocks;
      }

      refLocalVariable = varRefTemp.size();
      refExterVariable = ExterRefVarTemp.size();
      blockWithoutPhi = totalBasicBlocks - blockWithPhi;

      errs() << fname << ":" <<
       "\n  f01_totalBasicBlocks: " << totalBasicBlocks << 
       "\n  f02_oneSuccessor: " << oneSuccessor << 
       "\n  f03_twoSuccessor: " << twoSuccessor << 
       "\n  f04_greaterTwoSuccessor: " << greaterTwoSuccessor << 
       "\n  f05_onePredecessor: " << onePredecessor << 
       "\n  f06_twoPredecessor: " << twoPredecessor << 
       "\n  f07_greaterTwoPredecessor: " << greaterTwoPredecessor << 
       "\n  f08_onePredSuc: " << onePredSuc << 
       "\n  f09_onePred_twoSuc: " << onePred_twoSuc << 
       "\n  f10_twoPred_oneSuc: " << twoPred_oneSuc << 
       "\n  f11_twoPredSuc: " << twoPredSuc << 
       "\n  f12_greaterTwoPredSuc: " << greaterTwoPredSuc << 
       "\n  f13_instructionLess15: " << instructionLess15 << 
       "\n  f14_instructionInterval: " << instructionInterval << 
       "\n  f15_instructionGreater500: " << instructionGreater500 << 
       "\n  f16_numOfEdges: " << numOfEdges << 
       "\n  f17_numOfCriticalEdges: " << numOfCriticalEdges << 
       "\n  f18_abnormalEdge: " << abnormalEdge << 
       "\n  f19_directCalls: " << directCalls << 
       "\n  f20_condBranch: " << condBranch << 
       "\n  f21_assigmentInstructions: " << assigmentInstructions << 
       "\n  f22_uncondBranch: " << uncondBranch << 
       "\n  f23_numOfIntOperations: " << numOfIntOperations << 
       "\n  f24_numOfFloatOperations: " << numOfFloatOperations << 
       "\n  f25_numInstructions: " << numInstructions << 
       "\n  f26_instructionAverage: " << instructionAverage << 
       "\n  f27_averagePhi: " << averagePhi << 
       "\n  f28_averagePhiArgs: " << averagePhiArgs << 
       "\n  f29_blockWithoutPhi: " << blockWithoutPhi << 
       "\n  f30_blockPhiIntervalNodes: " << blockPhiIntervalNodes << 
       "\n  f31_blockPhiGreater3Nodes: " << blockPhiGreater3Nodes << 
       "\n  f32_blocksPhiGreater5Arg: " << blocksPhiGreater5Arg << 
       "\n  f33_blocksPhiIntervalArg: " << blocksPhiIntervalArg << 
       "\n  f34_numOfSwitchInstruction: " << numOfSwitchInstruction << 
       "\n  f35_numOfUnaryOperations: " << numOfUnaryOperations << 
       "\n  f36_ptrArithmetic: " << ptrArithmetic <<  
       "\n  f37_indirectRefs: " << indirectRefs << 
       "\n  f38_addresVar: " << addresVar << 
       "\n  f39_addressFunction: " << addressFunction << 
       "\n  f40_indirectCalls: " << indirectCalls << 
       "\n  f41_leftOpIntConst: " << leftOpIntConst << 
       "\n  f42_oneOperandConst: " << oneOperandConst << 
       "\n  f43_callArgPtrType: " << callArgPtrType << 
       "\n  f44_call4args: " << call4args << 
       "\n  f45_ptrRetCallType: " << ptrRetCallType << 
       "\n  f46_intRetCallType: " << intRetCallType << 
       "\n  f47_constInt0: " << constInt0 << 
       "\n  f48_constInt32bits: " << constInt32bits << 
       "\n  f49_constInt1: " << constInt1 << 
       "\n  f50_constInt64bits: " << constInt64bits << 
       "\n  f51_numRefeOfLocalVar: " << numRefeOfLocalVar << 
       "\n  f52_defUseCounter: " << defUseCounter << 
       "\n  f53_refLocalVariable: " << refLocalVariable << 
       "\n  f54_refExterVariable: " << refExterVariable << 
       "\n  f55_localPtrVar: " << localPtrVar << 
       "\n  f56_staticPtrVar: " << staticPtrVar << "\n";
    }
  }
}

} // namespace feature_extractor
