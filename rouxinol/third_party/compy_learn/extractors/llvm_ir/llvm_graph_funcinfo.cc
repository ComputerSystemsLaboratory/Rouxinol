#include "llvm_graph_funcinfo.h"

#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

#include "llvm/IR/Instructions.h"

using namespace ::llvm;

namespace compy {
namespace llvm {
namespace graph {

void trim(std::string& s) {
    // Remove leading whitespace
    s.erase(s.begin(), std::find_if(s.begin(), s.end(),
        [](unsigned char ch) { return !std::isspace(ch); }));

    // Remove trailing whitespace
    s.erase(std::find_if(s.rbegin(), s.rend(),
        [](unsigned char ch) { return !std::isspace(ch); }).base(), s.end());
}

std::string llvmTypeToString(Type *type) {
  std::string typeName;
  raw_string_ostream rso(typeName);
  type->print(rso);
  return rso.str();
}

std::string llvmConstToString(const Constant *con) {
  std::string value;
  if (auto *CI = dyn_cast<ConstantInt>(con)) {
      uint64_t val = CI->getZExtValue();
      value = std::to_string(val);
  } else if (auto *CFP = dyn_cast<ConstantFP>(con)) {
      double val = CFP->getValueAPF().convertToDouble();
      value = std::to_string(val);
  } else {
      // Handle other constant types or print a generic message
      value = std::to_string(std::nan(""));
  }
  return value;
}

// --- helper functions to extract exact constant value as string ---
std::string getAPIntAsString(const APInt &v) {
  // Decimal representation (unsigned). For signed values, adjust as needed.
  return v.toString(10, /*isSigned=*/false);
}

std::string getAPFloatAsString(const APFloat &apf) {
  // Use APFloat::print via raw_string_ostream for an exact decimal representation.
  std::string s;
  raw_string_ostream rso(s);
  apf.print(rso);
  rso.flush();
  return s;
}

std::string formatConstantArrayOrStruct(const Constant &con); // forward

std::string getConstantExactValue(const Constant &con) {
  // Integer constants
  if (auto *CI = dyn_cast<ConstantInt>(&con)) {
    return getAPIntAsString(CI->getValue());
  }

  // Floating point constants
  if (auto *CF = dyn_cast<ConstantFP>(&con)) {
    return getAPFloatAsString(CF->getValueAPF());
  }

  // Null pointer constant
  if (isa<ConstantPointerNull>(con)) {
    return "null";
  }

  // Aggregate zero
  if (isa<ConstantAggregateZero>(con)) {
    return "zeroinitializer";
  }

  // Undef
  if (isa<UndefValue>(con)) {
    return "undef";
  }

  // Global variable with initializer (often string literal)
  if (auto *GV = dyn_cast<GlobalVariable>(&con)) {
    if (GV->hasInitializer()) {
      if (auto *Init = dyn_cast<Constant>(GV->getInitializer()))
        return getConstantExactValue(*Init);
    }
    return GV->getName().str();
  }

  // ConstantDataArray / ConstantDataSequential containing strings
  if (auto *CDA = dyn_cast<ConstantDataArray>(&con)) {
    if (CDA->isString()) {
      StringRef s = CDA->getAsString();
      return std::string("\"") + std::string(s.begin(), s.end()) + "\"";
    }
  }
  if (auto *CDS = dyn_cast<ConstantDataSequential>(&con)) {
    if (CDS->isString()) {
      StringRef s = CDS->getAsString();
      return std::string("\"") + std::string(s.begin(), s.end()) + "\"";
    }
  }

  // Arrays / Structs / Data arrays
  if (isa<ConstantArray>(con) || isa<ConstantStruct>(con) ||
      isa<ConstantDataArray>(con) || isa<ConstantDataSequential>(con)) {
    return formatConstantArrayOrStruct(con);
  }

  // ConstantExpr: try to simplify common casts by returning operand's value
  if (auto *CE = dyn_cast<ConstantExpr>(&con)) {
    switch (CE->getOpcode()) {
      case Instruction::Trunc:
      case Instruction::ZExt:
      case Instruction::SExt:
      case Instruction::FPToUI:
      case Instruction::FPToSI:
      case Instruction::UIToFP:
      case Instruction::SIToFP:
      case Instruction::PtrToInt:
      case Instruction::BitCast:
      case Instruction::IntToPtr:
      case Instruction::AddrSpaceCast:
        if (auto *op = dyn_cast<Constant>(CE->getOperand(0)))
          return getConstantExactValue(*op);
        break;
      default:
        break;
    }
    // fallback: print the expr (should be rare)
    std::string s;
    raw_string_ostream rso(s);
    CE->print(rso);
    rso.flush();
    return rso.str();
  }

  // Last resort: print representation
  {
    std::string s;
    raw_string_ostream rso(s);
    con.print(rso);
    rso.flush();
    return rso.str();
  }
}

std::string formatConstantArrayOrStruct(const Constant &con) {
  using namespace llvm;
  std::string out;
  out.push_back('{');
  bool first = true;

  // ConstantArray / ConstantStruct: iterate operands
  if (auto *CA = dyn_cast<ConstantArray>(&con)) {
    for (unsigned i = 0, e = CA->getNumOperands(); i != e; ++i) {
      if (!first) out += ", ";
      out += getConstantExactValue(*cast<Constant>(CA->getOperand(i)));
      first = false;
    }
  } else if (auto *CS = dyn_cast<ConstantStruct>(&con)) {
    for (unsigned i = 0, e = CS->getNumOperands(); i != e; ++i) {
      if (!first) out += ", ";
      out += getConstantExactValue(*cast<Constant>(CS->getOperand(i)));
      first = false;
    }
  } else if (auto *CDA = dyn_cast<ConstantDataArray>(&con)) {
    if (CDA->isString()) {
      StringRef s = CDA->getAsString();
      out = "\"" + std::string(s.begin(), s.end()) + "\"";
      return out;
    }
    for (unsigned i = 0, e = CDA->getNumElements(); i != e; ++i) {
      if (!first) out += ", ";
      // For integer element types
      if (CDA->getElementType()->isIntegerTy()) {
        out += std::to_string(CDA->getElementAsInteger(i));
      } else {
        // fallback generic print
        std::string tmp;
        raw_string_ostream rso(tmp);
        CDA->getElementAsConstant(i)->print(rso);
        rso.flush();
        out += tmp;
      }
      first = false;
    }
  } else if (auto *CDS = dyn_cast<ConstantDataSequential>(&con)) {
    if (CDS->isString()) {
      StringRef s = CDS->getAsString();
      out = "\"" + std::string(s.begin(), s.end()) + "\"";
      return out;
    }
    for (unsigned i = 0, e = CDS->getNumElements(); i != e; ++i) {
      if (!first) out += ", ";
      if (CDS->getElementType()->isIntegerTy()) {
        out += std::to_string(CDS->getElementAsInteger(i));
      } else {
        // fallback
        std::string tmp;
        raw_string_ostream rso(tmp);
        // there is no direct getElementAsConstant for all CDS; try printing element via index
        // fallback to printing whole CDS (not ideal)
        CDS->print(rso);
        rso.flush();
        out += tmp;
      }
      first = false;
    }
  } else {
    // generic fallback: iterate operands if any
    for (unsigned i = 0, e = con.getNumOperands(); i != e; ++i) {
      if (!first) out += ", ";
      if (auto *op = dyn_cast<Constant>(con.getOperand(i)))
        out += getConstantExactValue(*op);
      else {
        std::string tmp;
        raw_string_ostream rso(tmp);
        con.getOperand(i)->print(rso);
        rso.flush();
        out += tmp;
      }
      first = false;
    }
  }

  out.push_back('}');
  return out;
}
// --- END --- helper functions to extract exact constant value as string ---


/**
 * Get a unique Name for an LLVM value.
 *
 * This function should always be used instead of the values getName()
 * function. If the object has no name yet, a new unique name is generated
 * based on the default name.
 */
std::string FunctionInfoPass::getUniqueName(const Value &v) {
  if (v.hasName()) return v.getName().str();

  auto iter = valueNames.find(&v);
  if (iter != valueNames.end()) return iter->second;

  std::stringstream ss;
  if (isa<Value>(v))
    ss << "val";
  else if (isa<BasicBlock>(v))
    ss << "bb";
  else if (isa<Function>(v))
    ss << "func";
  else
    ss << "v";

  ss << valueNames.size();

  valueNames[&v] = ss.str();
  return ss.str();
}

ArgInfoPtr FunctionInfoPass::getInfo(const Argument &arg) {
  auto it = argInfos.find(&arg);
  if (it != argInfos.end()) return it->second;

  ArgInfoPtr info(new ArgInfo());
  argInfos[&arg] = info;

  info->name = getUniqueName(arg);

  // collect the type
  info->type = llvmTypeToString(arg.getType());

  return info;
}

ConstantInfoPtr FunctionInfoPass::getInfo(const ::llvm::Constant &con) {
  auto it = constantInfos.find(&con);
  if (it != constantInfos.end()) return it->second;

  ConstantInfoPtr info(new ConstantInfo());
  constantInfos[&con] = info;

  // collect the type
  info->type = llvmTypeToString(con.getType());
  
  // collect the constant value
  info->value = getConstantExactValue(con); //llvmConstToString(&con); 
  trim(info->value);
  //std::string subString = "; Function Attrs:";
  //if (info->value.compare(0, subString.length(), subString) == 0)
  //  info->value = info->type;

  return info;
}

InstructionInfoPtr FunctionInfoPass::getInfo(const Instruction &inst) {
  auto it = instructionInfos.find(&inst);
  if (it != instructionInfos.end()) return it->second;

  InstructionInfoPtr info(new InstructionInfo());
  instructionInfos[&inst] = info;

  // collect opcode
  info->opcode = inst.getOpcodeName();

  if (inst.getOpcodeName() == std::string("ret")) {
    info_->exitInstructions.push_back(info);
  }

  // collect type
  std::string typeName;
  raw_string_ostream rso(typeName);
  inst.getType()->print(rso);
  info->type = rso.str();

  // collect code
  std::string code;
  raw_string_ostream cs(code);
  inst.print(cs);
  info->code = cs.str();

  // Remove leading whitespace
  size_t firstChar = info->code.find_first_not_of(" \t\n\r");
  if (std::string::npos != firstChar) {
      info->code = info->code.substr(firstChar);
  } else {
      // The string is all whitespace, so make it empty
      info->code.clear();
  }

  // collect data dependencies
  for (auto &use : inst.operands()) {
    if (isa<Instruction>(use.get())) {
      auto &opInst = *cast<Instruction>(use.get());
      info->operands.push_back(getInfo(opInst));
    }

    if (isa<Argument>(use.get())) {
      auto &opInst = *cast<Argument>(use.get());
      info->operands.push_back(getInfo(opInst));
    }

    if (isa<Constant>(use.get())) {
      auto &opInst = *cast<Constant>(use.get());
      info->operands.push_back(getInfo(opInst));
    }
  }

  // collect called function (if this instruction is a call)
  if (isa<CallInst>(inst)) {
    auto &call = cast<CallInst>(inst);
    Function *calledFunction = call.getCalledFunction();
    if (calledFunction != nullptr) {
      info->callTarget = getUniqueName(*calledFunction);
    }
  }

  // load or store?
  info->isLoadOrStore = false;
  if (isa<LoadInst>(inst)) info->isLoadOrStore = true;
  if (isa<StoreInst>(inst)) info->isLoadOrStore = true;

  // collect function this instruction belongs to
  info->function = info_;

  return info;
}

BasicBlockInfoPtr FunctionInfoPass::getInfo(const BasicBlock &bb) {
  auto it = basicBlockInfos.find(&bb);
  if (it != basicBlockInfos.end()) return it->second;

  BasicBlockInfoPtr info(new BasicBlockInfo());
  basicBlockInfos[&bb] = info;

  info->name = getUniqueName(bb);

  // collect all successors
  auto term = bb.getTerminator();
  for (size_t i = 0; i < term->getNumSuccessors(); i++) {
    BasicBlock *succ = term->getSuccessor(i);
    info->successors.push_back(getInfo(*succ));
  }

  return info;
}

MemoryAccessInfoPtr FunctionInfoPass::getInfo(MemoryAccess &acc) {
  auto it = memoryAccessInfos.find(&acc);
  if (it != memoryAccessInfos.end()) return it->second;

  MemoryAccessInfoPtr info(new MemoryAccessInfo());
  memoryAccessInfos[&acc] = info;

  info->block = getInfo(*acc.getBlock());

  if (isa<MemoryUseOrDef>(acc)) {
    if (isa<MemoryUse>(acc))
      info->type = "use";
    else
      info->type = "def";

    auto inst = cast<MemoryUseOrDef>(acc).getMemoryInst();
    if (inst != nullptr) {
      info->inst = getInfo(*inst);
    } else {
      info->inst = NULL;
      assert(info->type == "def");
      info->type = "live on entry";
    }

    auto dep = cast<MemoryUseOrDef>(acc).getDefiningAccess();
    if (dep != nullptr) {
      info->dependencies.push_back(getInfo(*dep));
    }
  } else {
    info->type = "phi";
    info->inst = NULL;
    auto &phi = cast<MemoryPhi>(acc);
    for (unsigned i = 0; i < phi.getNumIncomingValues(); i++) {
      auto dep = phi.getIncomingValue(i);
      info->dependencies.push_back(getInfo(*dep));
    }
  }

  return info;
}

bool FunctionInfoPass::runOnFunction(::llvm::Function &func) {
  // wipe all data from the previous run
  valueNames.clear();
  argInfos.clear();
  basicBlockInfos.clear();
  instructionInfos.clear();
  memoryAccessInfos.clear();
  valueNames.clear();

  // create a new info object and invalidate the old one
  info_ = FunctionInfoPtr(new FunctionInfo());

  info_->name = getUniqueName(func);
  info_->entryInstruction =
      getInfo(*func.getEntryBlock().getInstList().begin());

  std::string rtypeName;
  raw_string_ostream rso(rtypeName);
  func.getReturnType()->print(rso);
  info_->type = rso.str();

  // collect all basic blocks and their instructions
  for (auto &bb : func.getBasicBlockList()) {
    BasicBlockInfoPtr bbInfo = getInfo(bb);
    for (auto &inst : bb) {
      InstructionInfoPtr instInfo = getInfo(inst);
      instInfo->basicBlock = bbInfo;
      bbInfo->instructions.push_back(instInfo);
    }
    info_->basicBlocks.push_back(bbInfo);
  }

  // collect all arguments
  for (auto &arg : func.args()) {
    info_->args.push_back(getInfo(arg));
  }

  // dump app memory accesses
  auto &mssaPass = getAnalysis<MemorySSAWrapperPass>();
  auto &mssa = mssaPass.getMSSA();
  for (auto &bb : func.getBasicBlockList()) {
    // live on entry
    auto entry = mssa.getLiveOnEntryDef();
    info_->memoryAccesses.push_back(getInfo(*entry));

    // memory phis
    auto phi = mssa.getMemoryAccess(&bb);
    if (phi != nullptr) {
      info_->memoryAccesses.push_back(getInfo(*phi));
    }

    // memory use or defs
    for (auto &inst : bb) {
      auto access = mssa.getMemoryAccess(&inst);
      if (access != nullptr) {
        info_->memoryAccesses.push_back(getInfo(*access));
      }
    }
  }

  // indicate that nothing was changed
  return false;
}

void FunctionInfoPass::getAnalysisUsage(AnalysisUsage &au) const {
  au.addRequired<MemorySSAWrapperPass>();
  au.setPreservesAll();
}

char FunctionInfoPass::ID = 0;

static RegisterPass<FunctionInfoPass> X("funcinfo", "Function Info Extractor",
                                        true /* Only looks at CFG */,
                                        true /* Analysis Pass */);

}  // namespace graph
}  // namespace llvm
}  // namespace compy
