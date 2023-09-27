#include<iostream>
#include<vector>
#include<algorithm>
#include<map>
#include<string>
#include<cmath>
#include<numeric>
using namespace std;


int main(void) {

  int n;
  while(cin >> n){
    if( n == 0 ) break;

    vector<int> a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    vector<int> dp(n+5, 0);
    for(int i=1; i<=n; i++){
      dp[i] = max( a[i-1], dp[i-1] + a[i-1] );
    }
    int ans = dp[1];
    for(int i=1; i<=n; i++){
      ans = max(ans, dp[i]);
    }
    cout << ans << endl;
  }

  return 0;
}