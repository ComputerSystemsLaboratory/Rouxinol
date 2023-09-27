#include <cstdio>
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <iomanip>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <set>
#include <map>
#include <bitset>
#include <numeric>
#include <limits>
#include <climits>
#include <cfloat>
#include <functional>
using namespace std;

typedef long long ll;

template <typename T>
class FenwickTree {
 private:
  vector<T> bit;
  int M;

 public:
  FenwickTree(int M) : bit(vector<T>(M + 1, 0)), M(M) {}

  int sum(int i) {
    if (!i) return 0;
    return bit[i] + sum(i - (i & -i));
  }

  void add(int i, T x) {
    if (i > M) return;
    bit[i] += x;
    add(i + (i & -i), x);
  }
};

int main() {
  int N, Q;
  cin >> N >> Q;
  FenwickTree<int> fenwick(N);
  for (int i = 0; i < Q; ++i) {
    int c, x, y;
    cin >> c >> x >> y;
    if (c == 0) {
      fenwick.add(x, y);
    } else {
      if (x > y) swap(x, y);
      cout << (fenwick.sum(y) - fenwick.sum(x - 1)) << endl;
    }
  }
}