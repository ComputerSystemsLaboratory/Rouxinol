#include<bits/stdc++.h>

using namespace std;

int main(){
  int N,W;
  cin >> N >> W;
  vector< pair<int,int> > vec(N);
  for(int i = 0; i < N; i++) cin >> vec[i].first >> vec[i].second;
  vector<int> dp(W+1, 0);
  for(int i = 0; i < N; i++)
    for(int j = W; j >= 0; j--)
      if(j+vec[i].second <= W)
        dp[j+vec[i].second] = max(dp[j+vec[i].second], dp[j]+vec[i].first);
  int ans = 0;
  for(int i = 0; i <= W; i++) ans = max(ans, dp[i]);
  cout << ans << endl;
  return 0;
}