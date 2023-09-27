#include <iostream>
#include <string>

using namespace std;

class Slice {
 public:
  Slice(const char* p, size_t len) : p_(p), len_(len) {}

  Slice substr(size_t pos, size_t len) const {
    // for simplicity, intentionally omit check the values of pos and
    // len
    return Slice(p_ + pos, len);
  }

  const char* data() const { return p_; }
  size_t length() const { return len_; }

  std::string to_string() const {
    return std::string(p_, len_);
  }

 private:
  const char* p_;
  size_t len_;
};

inline std::string merge(const Slice& lhs, const Slice& rhs) {
  std::string r = rhs.to_string();
  r.append(lhs.data(), lhs.length());
  return r;
}

int main() {
  for (;;) {
    std::string s;
    cin >> s;
    if (s[0] == '-')
      break;

    int m;
    cin >> m;
    int h;

    const size_t len = s.length();
    for (int i = 0; i < m; ++i) {
      cin >> h;
      const Slice slice(s.data(), len);
      const Slice lhs = slice.substr(0, h);
      const Slice rhs = slice.substr(h, len-h);
      s = merge(lhs, rhs);
    }
    cout << s << endl;
  }
  return 0;
}