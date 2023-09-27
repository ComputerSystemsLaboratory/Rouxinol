#include <cstdio>
#include <string.h>
#include <vector>

using namespace std;

namespace {

class Dictionary {
 private:
  struct Node {
    Node* children[4];
    char flags[4];

    Node() {
      children[0] = NULL;
      children[1] = NULL;
      children[2] = NULL;
      children[3] = NULL;
      flags[0] = 0;
      flags[1] = 0;
      flags[2] = 0;
      flags[3] = 0;
    }
  };

 public:
  Dictionary()
      : root_(new Node),
        block_size_(4096),
        pool_index_(0),
        block_index_(0) {
    pool_.push_back(new Node[block_size_]);
  }

  ~Dictionary() {
    for (size_t i = 0; i < pool_.size(); ++i) {
      delete[] pool_[i];
    }
    delete root_;
  }

  void insert(const char* k, size_t n) {
    Node* p = root_;
    int id = 0;
    for (size_t i = 0; i < n; ++i) {
      const char c = k[i];
      id = Id(c);
      if (!p->children[id]) {
        p->children[id] = Alloc();
      }
      p = p->children[id];
    }
    p->flags[id] = 1;
  }

  bool find(const char* k, size_t n) const {
    Node* p = root_;
    int id = 0;
    for (size_t i = 0; i < n; ++i) {
      const char c = k[i];
      id = Id(c);
      p = p->children[id];
      if (!p) {
        return false;
      }
    }
    if (!p) {
      return false;
    }
    return p->flags[id];
  }

 private:
  Node* root_;

  static int Id(char c) {
      switch (c) {
        case 'A':
          return 0;
        case 'C':
          return 1;
          break;
        case 'G':
          return 2;
          break;
        case 'T':
          return 3;
          break;
      }
      // should not reach here.
      return 0;
  }

  Node* Alloc() {
    if (block_index_ >= block_size_) {
      pool_.push_back(new Node[block_size_]);
      pool_index_++;
      block_index_ = 0;
    }
    Node* r = &pool_[pool_index_][block_index_];
    block_index_++;
    return r;
  }

  size_t block_size_;
  size_t pool_index_; // pos in pool
  size_t block_index_; // pos in the block
  vector<Node* > pool_;
};

} // namespace

int main() {
  int n;
  scanf("%d", &n);

  Dictionary d;
  char op[7];
  char str[13];
  for (int i = 0; i < n; ++i) {
    scanf("%s ", op);
    scanf("%s", str);
    const char c = op[0];
    const size_t len = strnlen(str, 13);
    if (c == 'i') {
      d.insert(str, len);
      continue;
    }

    if (d.find(str, len)) {
      printf("yes\n");
    } else {
      printf("no\n");
    }
  }

  return 0;
}