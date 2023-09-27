#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <complex>
#include <cstring>
#include <cstdlib>
#include <string>
#include <cmath>
#include <map>
using namespace std;

#define REP(i,n) for(int i=0;i<(int)n;++i)
#define FOR(i,c) for(__typeof((c).begin())i=(c).begin();i!=(c).end();++i)
#define ALL(c) (c).begin(), (c).end()
const int INF = 1<<29;

int main() {
  int n,m;
  while(cin >> n>>m, n||m) {
    int h[n+1];
    int hoge = 0;
    h[0] = 0;
    REP(i,n) {
      int tmp;
      cin >> tmp;
      hoge += tmp;
      h[i+1] = hoge;
    }

    vector<int> aa(1600000);
    REP(i,n+1) {
      REP(j,i) {
//        cout << h[i]-h[j] << endl;
        aa[h[i]-h[j]]++;
      }
    }
    int w[m+1];
    w[0] = 0;
    hoge = 0;
    REP(i,m) {
      int tmp;
      cin >> tmp;
      hoge += tmp;
      w[i+1] = hoge;
    }

    vector<int> bb(1600000);
    REP(i,m+1) {
      REP(j,i) {
        bb[w[i]-w[j]]++;
      }
    }
    long long res = 0;
    REP(i,1600000) {
      res += aa[i]*bb[i];
    }
    cout << res << endl;
  }
}