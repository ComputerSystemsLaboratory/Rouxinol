#include <iostream>
using namespace std;
const int INF = 1000000001;

int main() {
  int n; cin >> n;
  int dp[100001];
  fill(dp,dp+n,INF);
  int a[100001];
  for ( int i = 0; i < n; i++ ) cin >> a[i];
  for ( int i = 0; i < n; i++ ) {
    *lower_bound(dp,dp+n,a[i]) = a[i];
  }
   cout << lower_bound(dp,dp+n,INF)-dp << endl;
  return 0;
}