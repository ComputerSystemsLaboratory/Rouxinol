#include <llvm/IR/Module.h>
#include <ostream>

using namespace llvm;

namespace feature_extractor {

class FeatureExtractor {
public:
  FeatureExtractor(Module &);
  friend std::ostream &operator<<(std::ostream &, const FeatureExtractor &);
};

} // namespace feature_extractor
