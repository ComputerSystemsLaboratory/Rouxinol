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

class BIT { // index starts at 1.
public:
  int N;
  ll* data;

  BIT(int n) : N(n) {
    data = new ll[N+1];
  }

  ~BIT() {
    delete[] data;
  }

  ll sum(int i) { // [1, i]
    ll s = 0;
    while (i > 0) {
      s += data[i];
      i -= i & -i;
    }
    return s;
  }

  ll sum(int a, int b) { // [a, b)
    return sum(b - 1) - sum(a - 1);
  }

  void add(int i, int x) {
    while (i <= N) {
      data[i] += x;
      i += i & -i;
    }
  }
  
};

int main () {
  int n, q;
  cin >> n >> q;
  BIT bit(n);
  for (auto i = 0; i < q; ++i) {
    int com, x, y;
    cin >> com >> x >> y;
    if (com == 0) {
      bit.add(x, y);
    } else {
      cout << bit.sum(x, y+1) << endl;
    }
  }
}