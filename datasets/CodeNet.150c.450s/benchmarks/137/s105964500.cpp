#include <cstdio>
#include <string.h>
#include <vector>

using namespace std;

namespace {

class Dictionary {
 private:
  struct Node {
    Node* a;
    Node* c;
    Node* g;
    Node* t;
    char flags[4];

    Node() : a(NULL), c(NULL), g(NULL), t(NULL) {
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
      switch (c) {
        case 'A':
          {
            if (!p->a) {
              p->a = Alloc();
            }
            p = p->a;
            id = 0;
          }
          break;
        case 'C':
          {
            if (!p->c) {
              p->c = Alloc();
            }
            p = p->c;
            id = 1;
          }
          break;
        case 'G':
          {
            if (!p->g) {
              p->g = Alloc();
            }
            p = p->g;
            id = 2;
          }
          break;
        case 'T':
          {
            if (!p->t) {
              p->t = Alloc();
            }
            p = p->t;
            id = 3;
          }
          break;
      }
    }
    p->flags[id] = 1;
  }

  bool find(const char* k, size_t n) {
    Node* p = root_;
    int id = 0;
    for (size_t i = 0; i < n; ++i) {
      const char c = k[i];
      switch (c) {
        case 'A':
          p = p->a;
          id = 0;
          break;
        case 'C':
          p = p->c;
          id = 1;
          break;
        case 'G':
          p = p->g;
          id = 2;
          break;
        case 'T':
          p = p->t;
          id = 3;
          break;
      }
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