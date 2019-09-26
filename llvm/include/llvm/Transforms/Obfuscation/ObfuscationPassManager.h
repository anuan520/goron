#ifndef OBFUSCATION_OBFUSCATIONPASSMANAGER_H
#define OBFUSCATION_OBFUSCATIONPASSMANAGER_H

#include "llvm/Transforms/Obfuscation/IndirectBranch.h"
#include "llvm/Transforms/Obfuscation/IndirectCall.h"
#include "llvm/Transforms/Obfuscation/IndirectGlobalVariable.h"

// Namespace
namespace llvm {
class ModulePass;
class PassRegistry;

ModulePass *createObfuscationPassManager();
void initializeObfuscationPassManagerPass(PassRegistry &Registry);

}

#endif
