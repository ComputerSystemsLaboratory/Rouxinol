#include <iostream>
#include <vector>

using namespace std;

template<typename T> class fenwick {
  public:
  vector<T> fenw;
  int n;  
  fenwick(int _n) : n(_n) {
    fenw.resize(n);
  }
  void modify(int x, T v) {
    while (x < n) {
      fenw[x] += v;
      x |= (1 + x);
    }
  }
  T get(int x) {
    T v{};
    while (x >= 0) {
      v += fenw[x];
      x = (x & (x + 1)) - 1;
    }
    return v;
  }
  T get(int a, int b) {
    if (a > 0) {
      return get(b) - get(a - 1);
    } else {
      return get(b);
    }
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  int n, q;
  cin >> n >> q;
  fenwick<long long> ft(n);
  while (q--) {
    long long com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      ft.modify(x - 1, y);
    } else {
      cout << ft.get(x - 1, y - 1) << '\n';
    }    
  }
  return 0;
}
