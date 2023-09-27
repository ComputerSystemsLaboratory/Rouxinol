#include <algorithm>
#include <bitset>
#include <iomanip>
#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

using ll = long long;

constexpr int INF = (1 << 30) - 1;
constexpr int MOD = 1000000000 + 7;

int n, m;
vector<int> c;
int dp[50001];

int main(){
  cin >> n >> m;
  c.resize(m);
  for(int i=0; i<m; i++) cin >> c[i];
  
  for(int i=0; i<=n; i++) dp[i]=INF;

  dp[0]=0;
  for(int i=1; i<=n; i++){
    for(int j=0; j<m; j++){
      if(c[j]>i) continue;
      else{
        dp[i]=min(dp[i-1]+1, min(dp[i], dp[i-c[j]]+1));
      }
    }
  }

  cout << dp[n] << endl;
}
