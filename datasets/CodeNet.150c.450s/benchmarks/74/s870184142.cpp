#include<bits/stdc++.h>
using namespace std;
int main(){
  int n, m, d[20], dp[50001];
  fill_n( dp, 50001, 1 << 30);
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    cin >> d[i];
  }
  sort( d, d + m);

  dp[0] = 0;
  for(int i = 0; i < n; i++){
    for(int j = 0; j < m; j++){
      if(i + d[j] > n) break;
      dp[i + d[j]] = min( dp[i + d[j]], dp[i] + 1);
    }
  }
  cout << dp[n] << endl;
}