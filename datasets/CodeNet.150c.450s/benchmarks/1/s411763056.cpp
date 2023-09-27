#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

int main(){

  int n;
  cin >> n;
  long long a[n];
  for(int i=0;i<n;i++)cin >>a[i];

  vector<long long> dp(n,10000000007);

  dp[0]=a[0];

  for(int i=1;i<n;i++){
    if(a[i]>dp[i-1])dp[i]=a[i];
    else{
      dp[lower_bound(dp.begin(),dp.end(),a[i])-dp.begin()]=a[i];
    }
  }

  for(int i=n-1;i>=0;i--){
    if(dp[i]!=10000000007){
      cout << i+1 << endl;
      break;
    }
  }

}
