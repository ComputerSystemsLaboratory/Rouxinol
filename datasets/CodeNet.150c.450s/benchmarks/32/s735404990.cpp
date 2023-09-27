#include<bits/stdc++.h>

#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)

using namespace std;

int m,n_min,n_max, P[210];

int main() {
  while( cin >> m >> n_min >> n_max, m | n_min | n_max ) {
    rep(i,m) cin >> P[i];
    sort(P,P+m,greater<int>());
    int max_diff = -1;
    int n=1;
    --n_min, --n_max;
    REP(i,n_min,n_max+1) {
      int diff = P[i] - P[i+1];
      if( diff >= max_diff ) {
	max_diff = diff;
	n = i+1;
      }
    }
    cout << n << endl;
  }
  return 0;
}