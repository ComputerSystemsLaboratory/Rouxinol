#include <bits/stdc++.h>
using namespace std;

typedef long long lli;

const lli INF = 1LL << 59;
const int N = 1000;

int n;
vector<lli> v;

void solve(){
  lli dp[N][N];
  fill(dp[0],dp[N],INF);
  
  for(int i=0;i<=n;i++) dp[i][i] = 0;
  for(int i=2;i<=n;i++){
    for(int j=0;j+i-1<n;j++){
      int next = j + i - 1;
      for(int k=j;k<next;k++){
        dp[j][next] = min(dp[j][next], dp[j][k] + dp[k+1][next] + v[j] * v[k+1] * v[next+1]);
      }
    }
  }

  cout << dp[0][n-1] << endl;
}

int main(){
  while(cin >> n){
    v.clear();
    for(int i=0;i<n;i++) {
      int a,b;
      cin >> a >> b;
      if(i == 0) v.push_back(a);
      v.push_back(b);
    }
    solve();
  }
}