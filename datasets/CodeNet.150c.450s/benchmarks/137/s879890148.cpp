#include <cstdio>
#include <string.h>

using namespace std;

namespace {

const size_t kHashSize = 244140624;

class Dictionary {
 public:
  Dictionary() : table_(new int[kHashSize]) {
    ps_[0] = 1;
    for (int i = 1; i < 12; ++i) {
      ps_[i] = 5 * ps_[i - 1];
    }
  }

  ~Dictionary() { delete[] table_; }

  void insert(const char* k, size_t n) {
    const size_t i = Encode(k, n);
    table_[i] = 1;
  }

  bool find(const char* k, size_t n) const {
    return table_[Encode(k, n)] > 0;
  }

 private:
  static int Id(char c) {
      switch (c) {
        case 'A':
          return 1;
        case 'C':
          return 2;
        case 'G':
          return 3;
        case 'T':
          return 4;
      }
      // should not reach here.
      return 0;
  }

  size_t Encode(const char* k, size_t n) const {
    size_t h = 0;
    for (size_t i = 0; i < n; ++i) {
      h += ps_[i] * Id(k[i]);
    }
    return h;
  }

  int ps_[12];
  int* table_;
};

} // namespace

int main() {
  int n;
  scanf("%d", &n);

  Dictionary d;
  char op[7];
  char str[13];
  for (int i = 0; i < n; ++i) {
    scanf("%s %s", op, str);
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