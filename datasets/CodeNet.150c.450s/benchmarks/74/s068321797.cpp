#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

  int n,m;
  vector <int> dp;

  cin >> n >> m;
  int a[21];
  
  for(int i=0;i<m;i++) cin >> a[i];
  
  dp.resize(n+1);
  for(int i=0;i<=n;i++) dp[i] = i;
  
  for(int j=0;j<m;j++){
    for(int i=1;i<=n;i++) {
      // cout << dp[i] <<" "<< dp[i-a[j]]+1<<endl;
      if(i / a[j] != 0)
      dp[i] = min(dp[i],dp[i-a[j]]+1);
    }
  }
  
  cout << dp[n] << endl;
  
  return 0;
  
}