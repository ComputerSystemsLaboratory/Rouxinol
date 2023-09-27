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
  const int N = 1000000;
  int table[N+1];
  REP(i,N+1)
    table[i] = INF;
  REP(i,1001) {
    for (int j=0; i*i+j*j*j<=N; ++j) {
      table[i*i+j*j*j] = min(table[i*i+j*j*j], i+j);
    }
  }
  int n;
  while(cin>>n,n) {
    int res = INF;
    REP(i,n+1) {
      if (table[n-i] != INF) {
        res = min(res,  table[n-i] + i);
      }
    }
    cout << res << endl;
  }
}