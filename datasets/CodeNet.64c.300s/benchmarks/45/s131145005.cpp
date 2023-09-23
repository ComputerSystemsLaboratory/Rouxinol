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
  int n,m,p;
  while(cin>>n>>m>>p,n||m||p) {
    long long s = 0;
    int x[n];
    REP(i,n) {
      cin >> x[i];
      s+=x[i];
    }
    s *= 100;
    s = s *(100-p) / 100;
    if (x[m-1] == 0)
      cout << 0 << endl;
    else
      cout << s / x[m-1] << endl;
  }
}