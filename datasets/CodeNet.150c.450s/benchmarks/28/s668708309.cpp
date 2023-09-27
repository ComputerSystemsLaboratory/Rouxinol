#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9 + 1;

bool check(vector<int> w, int n, int k, int x) {
  int sum = 0;
  int cnt = 1;
  for ( int i = 0; i < n; i++ ) {
    if ( w[i] > x ) return false;
    if ( sum+w[i] > x ) {
      cnt++;
      sum = w[i];
    } else {
      sum += w[i];
    }
  }

  if ( cnt <= k ) return true;
  else return false;
}

signed main() {
  int n, k;
  cin >> n >> k;

  vector<int> w(n);
  for ( int i = 0; i < n; i++ ) cin >> w[i];

  int l = -1, r = INF;
  while ( r-l > 1 ) {
    int mid = (l+r)/2;
    if ( check(w, n, k, mid) ) r = mid;
    else l = mid;
  }

  cout << r << endl;
  
  return 0;
}

