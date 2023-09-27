#include <iostream>
#include <iomanip> // << fixed << setprecision(xxx)
#include <algorithm> // do { } while ( next_permutation(A, A+xxx) ) ;
#include <vector>
#include <string> // to_string(nnn) // substr(m, n) // stoi(nnn)
#include <complex>
#include <tuple> // get<n>(xxx)
#include <queue>
#include <stack>
#include <map> // if (M.find(key) != M.end()) { }
#include <set> // S.insert(M);
// if (S.find(key) != S.end()) { }
// for (auto it=S.begin(); it != S.end(); it++) { }
// auto it = S.lower_bound(M);
#include <random> // random_device rd; mt19937 mt(rd());
#include <cctype>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <cstdlib> // atoi(xxx)
using namespace std;

#define DEBUG 0 // change 0 -> 1 if we need debug.
// insert #if<tab> by my emacs. #if DEBUG == 1 ... #end

typedef long long ll;

// const int dx[4] = {1, 0, -1, 0};
// const int dy[4] = {0, 1, 0, -1};

// const int C = 1e6+10;
// const ll M = 1000000007;

class UnionFind {
public:
  int N;
  int* root;
  int* rank;

  UnionFind(int n) : N(n) {
    root = new int[N];
    rank = new int[N];
    for (auto i = 0; i < N; ++i) {
      root[i] = i;
      rank[i] = 0;
    }
  }

  ~UnionFind() {
    delete[] root;
    delete[] rank;
  }

  int find(int x) {
    if (root[x] == x) return x;
    return root[x] = find(root[x]);
  }

  void unite(int x, int y) {
    x = find(x);
    y = find(y);
    if (x == y) return;
    if (rank[x] < rank[y]) {
      root[x] = y;
    } else {
      root[y] = x;
      if (rank[x] == rank[y]) ++(rank[x]);
    }
  }

  bool same(int x, int y) {
    return (find(x) == find(y));
  }
};


int main () {
  int n, q;
  cin >> n >> q;
  UnionFind uf(n);
  for (auto i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      uf.unite(x, y);
    } else {
      if (uf.same(x, y)) {
        cout << "1" << endl;
      } else {
        cout << "0" << endl;        
      }
    }
  }
}