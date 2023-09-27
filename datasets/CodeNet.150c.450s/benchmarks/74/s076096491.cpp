#include <bits/stdc++.h>
using namespace std;

#define INF (1<<29)
int dp[50001];
int n, m;



int main(){

  cin >> n >> m;
  vector<int> d(m);

  for(int i = 0; i < m; i++){
    cin >> d[i];
    dp[d[i]] = 1;
  }

  for(int i = 2; i <= n; i++){
    if(dp[i] == 0) dp[i] = INF;
    for(int j = 0; j < m; j++){
      if(i<d[j]) continue;
      if(dp[i-d[j]] != 0) dp[i] = min(dp[i], dp[i-d[j]] + 1);
    }
  }

  cout << dp[n] << endl;

}