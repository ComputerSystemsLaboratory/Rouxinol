#include <algorithm>
#include <bitset>
#include <cmath>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>

// Acknowledgement: Special thanks to kyomukyomupurin, who developed this
// template.
template <class T, class U>
std::ostream& operator<<(std::ostream& os, const std::pair<T, U>& p) {
  return os << '(' << p.first << ", " << p.second << ')';
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& vec) {
  int n = 0;
  for (auto e : vec) os << (n++ ? ", " : "{") << e;
  return os << (n ? "}" : "{}");
}

template <class T>
std::ostream& operator<<(std::ostream& os, const std::set<T>& st) {
  int n = 0;
  for (auto e : st) os << (n++ ? ", " : "{") << e;
  return os << (n ? "}" : "{}");
}

template <class T, class U>
std::ostream& operator<<(std::ostream& os, const std::map<T, U>& mp) {
  int n = 0;
  for (auto e : mp) os << (n++ ? ", " : "{") << e;
  return os << (n ? "}" : "{}");
}

template <class T>
std::istream& operator>>(std::istream& is, std::vector<T>& vec) {
  for (T& e : vec) is >> e;
  return is;
}

#ifdef LOCAL
#define debug(...) \
  std::cerr << "[" << #__VA_ARGS__ << "]: ", debug_out(__VA_ARGS__)
#else
#define debug(...)
#endif

void debug_out() { std::cerr << '\n'; }

template <class Head, class... Tail>
void debug_out(Head&& head, Tail&&... tail) {
  std::cerr << head;
  if (sizeof...(Tail) != 0) std::cerr << ", ";
  debug_out(std::forward<Tail>(tail)...);
}

template <class Monoid, class Function>
class SegmentTree {
 public:
  SegmentTree(const std::vector<Monoid>& data, Monoid identity_element,
              Function function)
      : identity_element_(identity_element), data_(data), function_(function) {
    build();
  }

  void update(int pos, Monoid new_value) {
    // assert(0 <= pos && pos < n_);
    pos += n_;
    node_[pos] = new_value;
    while (pos > 0) {
      pos >>= 1;
      node_[pos] = function_(node_[2 * pos], node_[2 * pos + 1]);
    }
  }

  // return function_[l, r)
  Monoid query(int l, int r) {
    // assert(0 <= l && l < n_ && 0 <= r - 1 && r - 1 < n_);
    Monoid vl = identity_element_, vr = identity_element_;
    for (l += n_, r += n_; l < r; l >>= 1, r >>= 1) {
      if (l & 1) vl = function_(vl, node_[l++]);
      if (r & 1) vr = function_(node_[--r], vr);
    }
    return function_(vl, vr);
  }

  Monoid operator[](int pos) const {
    // assert(0 <= pos && pos < n_);
    return node_[n_ + pos];
  }

 private:
  int n_;
  Monoid identity_element_;
  std::vector<Monoid> data_;
  std::vector<Monoid> node_;
  Function function_;

  void build() {
    int SIZE = data_.size();
    n_ = 1;
    while (n_ < SIZE) {
      n_ <<= 1;
    }
    node_.assign(2 * n_, identity_element_);
    for (int i = 0; i < SIZE; ++i) {
      node_[i + n_] = data_[i];
    }
    for (int i = n_ - 1; i > 0; --i) {
      node_[i] = function_(node_[2 * i], node_[2 * i + 1]);
    }
  }
};

using namespace std;
using int64 = long long;

int main() {
  int n;
  cin >> n;
  vector<int64> a(n);
  cin >> a;
  vector<int64> b = a;
  sort(b.begin(), b.end());
  b.erase(unique(b.begin(), b.end()), b.end());
  debug(b);
  auto f = [](int x, int y) { return max(x, y); };
  SegmentTree<int, decltype(f)> seg(vector<int>(n, 0), 0, f);
  for (int i = 0; i < n; i++) {
    int pos = distance(b.begin(), lower_bound(b.begin(), b.end(), a[i]));
    debug(pos);
    int tmp = seg.query(0, pos);
    debug(tmp);
    seg.update(pos, tmp + 1);
    debug(seg.query(0, pos + 1));
  }
  cout << seg.query(0, n) << endl;
  return 0;
}
