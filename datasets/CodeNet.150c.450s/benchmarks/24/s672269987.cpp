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
  long long m;
  while(cin>>n>>m,n||m) {
    int d[n], p[n];
    vector<pair<int,int> > v;
    REP(i,n) {
      cin >> d[i] >> p[i];
      v.push_back(make_pair(p[i], i));
    }
    sort(ALL(v), greater<pair<int,int> >());
    long long res = 0;
    REP(i,n){
      int c = d[v[i].second];
      if (m>=c)
        m-=c;
      else {
        res += v[i].first*(c-m);
        m = 0;
      }
    }
    cout << res << endl;
  }
}