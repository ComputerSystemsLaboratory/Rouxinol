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
  int n;
  while(scanf("%d",&n), n) {
    vector<pair<int,int> > v;
    REP(i,n) {
      REP(k,2) {
        int h,m,s;
        scanf("%d:%d:%d ", &h,&m,&s);
        v.push_back(make_pair(h*3600+m*60+s, 1-k));
      }
    }
    sort(ALL(v));
    int res = 0;
    int cnt = 0;
    REP(i,v.size()) {
      int t = v[i].first;
      int k = v[i].second;

      if (k) {
        cnt++;
      } else
        cnt--;
      res = max(res, cnt);
    }
    cout << res << endl;
  }
}