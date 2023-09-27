#include <bits/stdc++.h>

#define DEBUG(C) cerr << #C << " = " << C << endl

using namespace std;

template<typename T>
class BIT {
private:
  vector<T> bit;
public:
  BIT(const int n) : bit(n + 10) {}
  void add(int idx, T val) {
    ++idx;
    while (idx <= bit.size()) {
      bit[idx] += val;
      idx += idx & -idx;
    }
  }
  T get(int l, int r) {
    return this->get(r) - this->get(l - 1);
  }
  T get(int r) {
    ++r;
    T res = 0;
    while (r > 0) {
      res += bit[r];
      r -= r & -r;
    }
    return res;
  }
};

int main() {
  int n, q;
  scanf("%d%d", &n, &q);
  BIT<int> bit(n);
  while (q--) {
    int c, x, y;
    scanf("%d%d%d", &c, &x, &y);
    if (c) {
      printf("%d\n", bit.get(x - 1, y - 1));
    } else {
      bit.add(x - 1, y);
    }
  }
  return 0;
}