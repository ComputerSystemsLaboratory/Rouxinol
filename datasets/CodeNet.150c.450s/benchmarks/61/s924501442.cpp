#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <queue>
#include <map>
#include <set>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int n,a,b,c,x;
  while(cin>>n>>a>>b>>c>>x,n) {
    int h[n];
    REP(i,n) {
      cin >> h[i];
    }
    int cnt =0;
    bool f[n];
    memset(f,0,sizeof(f));
    int i=0;
    for (i=0;i<=10000;++i) {
      if (h[cnt]==x) {
        cnt++;
      }
      if (cnt==n)
        break;
      x = (a*x+b)%c;
    }
    if (cnt==n) {
      cout << i << endl;
    }else
      cout << -1 << endl;
      
  }
}