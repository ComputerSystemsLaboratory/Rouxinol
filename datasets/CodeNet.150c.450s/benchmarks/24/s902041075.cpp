#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>
using namespace std;

int main(){
  int n,m;
  while(cin>>n>>m&&n|m){
    vector<pair<int, int>> dp; // 期待値,距離
    for(int i=0;i<n;i++){
      int d,p;
      cin>>d>>p;
      dp.push_back(make_pair(p,d));
    }

    sort(dp.begin(), dp.end());
    int ans=0;
    for(int i=n-1;i>=0;i--){
      if(m>0){
        if(dp[i].second<=m){
          m-=dp[i].second;
          dp[i].second=0;
        }else if(dp[i].second>m){
          dp[i].second-=m;
          m=0;
        }
      }
      ans = ans + dp[i].first*dp[i].second;
    }
    cout << ans << endl;
  }

  return 0;
}