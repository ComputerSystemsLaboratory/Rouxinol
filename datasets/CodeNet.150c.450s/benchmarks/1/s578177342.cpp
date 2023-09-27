#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;
const ll INF = 1e9;
 
int main(){
  int n;
 
  cin >> n;
  int a[n];
  for(int i = 0 ; i < n ; i++){
    cin >> a[i];
  }
 
  ll dp[n];
  fill(dp,dp+n,INF);
 
  for(int i = 0 ; i < n ; i++){
    *lower_bound(dp,dp+n,a[i]) = a[i];
  }
  cout << lower_bound(dp,dp+n,INF) - dp << endl;
 
  return 0;
}