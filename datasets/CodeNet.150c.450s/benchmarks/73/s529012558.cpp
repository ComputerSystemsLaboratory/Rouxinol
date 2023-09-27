#include <cstdio>
#include <cmath>
#include <cstring>
#include <ctime>
#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <sstream>
#include <typeinfo>
#include <fstream>
#include <climits>
#include <functional>

#define REP(i,n) for(int i = 0;i < n;i++)

using namespace std;
typedef long long ll;
const int INF = INT_MAX / 4;

const int max_n = 1e3;


class BinaryIndexedTree
{
public:
  int n;
  int * tree;

  BinaryIndexedTree(int N)
    : n(N)
  {
    tree = new int[n + 1];
    for (int i = 0;i < n + 1;i++) {
      tree[i] = 0;
    }
  }

  void add(int a, int w) {
    for (int x = a; x <= n; x += (x & -x)) {
      tree[x] += w;
    }
  }

  int sum(int a) {
    int s = 0;
    for (int x = a; x > 0; x -= (x & -x)) {
      s += tree[x];
    }
    return s;
  }
};


int main(void)
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int N, Q;
  cin >> N >> Q;

  BinaryIndexedTree bit(N);
  int c, x, y;
  REP(i, Q) {
    cin >> c >> x >> y;
    if (c == 0) {
      bit.add(x, y);
    } else if (c == 1) {
      cout << bit.sum(y) - bit.sum(x-1) << "\n";
    }
  }

  return 0;
}