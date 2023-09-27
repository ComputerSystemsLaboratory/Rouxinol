#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <queue>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int n,k;
  while(cin >> n >> k,n+k) {
    int a[n];
    REP(i,n) {
      cin >> a[i];
    }
    int s = 0;
    REP(i,k) {
      s += a[i];
    }
    int res = s;
    for(int i=k; i<n; ++i) {
      s -= a[i-k]; s+= a[i];
      res = max(res, s);
    }
    cout <<res << endl;
  }

}