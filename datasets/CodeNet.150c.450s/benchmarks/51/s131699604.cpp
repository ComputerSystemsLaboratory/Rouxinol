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
  int a[31] = {};
  REP(i,30) {
    int v;
    cin >> v;
    a[v] = 1;
  }
  REP(i,30) {
    if (a[i+1]==0)
      cout << i+1 << endl;
  }
}