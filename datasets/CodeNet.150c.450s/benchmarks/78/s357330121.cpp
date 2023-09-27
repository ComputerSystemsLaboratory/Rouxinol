#include <bits/stdc++.h>
using namespace std;

//#define int long long
#define pb push_back 
#define mp make_pair
#define fr first
#define sc second
#define Rep(i, n) for( int i = 0; i < (n); i++ )
#define Rrep(i, a, n) for( int i = (a); i < (n); i++ )
#define All(v) v.begin(), v.end()

typedef pair<int, int> Pii; 
typedef pair<int, Pii> Pip;
//const int INF = 1107110711071107;

int dp[1000001];
int dp_odd[1000001];
int four[300];
int x;

signed main() {
  Rep(i, 210) four[i] = i * (i+1) * (i+2) / 6;
  
  Rep(i, 1000001) dp[i] = i;
  Rrep(i, 2, 300) {
    Rep(j, 1000001) {
      if ( j+four[i] <= 1000000 ) {
	dp[j+four[i]] = min(dp[j+four[i]], dp[j]+1);
      }
    }
  }

  Rep(i, 1000001) dp_odd[i] = i;
  Rrep(i, 2, 50) {
    Rep(j, 1000001) {
      dp_odd[j] = min(dp_odd[j], dp_odd[j]);
      if ( j+four[(i-1)*4+1] <= 1000000 ) {
	dp_odd[j+four[(i-1)*4+1]] = min(dp_odd[j+four[(i-1)*4+1]], dp_odd[j]+1);
      }
    }
  }
 
  while ( cin >> x, x ) {
    cout << dp[x] << " " << dp_odd[x] << endl;
  }
  return 0;
}