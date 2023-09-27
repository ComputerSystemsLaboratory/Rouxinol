#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int dp[50001];
  int c[20];
  int n;
  int m;

  cin >> n >>m;
  for(int i=0;i<m;i++) cin>> c[i];
  sort(c,c+m);
  for(int j=0;j<=n;j++) dp[j] = j;

  for(int i=1;i<m;i++)
    for(int j=1;j<=n;j++)
      if(j>=c[i]) dp[j] = min(dp[j],dp[j-c[i]]+1);

  cout << dp[n]<<endl;
  return 0;
}