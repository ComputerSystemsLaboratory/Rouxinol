#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#define F first
#define S second
using namespace std;
typedef pair<int, int> P;
const int INF = 1 << 30;
int main(){
  int n, m;
  int coin[20],  dp[50001]={};
  fill(dp, dp + 50001, INF);
  cin >> n >> m;
  for(int i = 0; i < m; i++){
    cin >> coin[ i ];
    dp[coin[ i ]] = 1;
  }
  for(int i = 1; i <= n; i++){
    for(int j = 0; j < m; j++){
      if( i  - coin[ j ]  > 0 && dp[i - coin[ j ]])
        dp[ i ] = min(dp[ i ], dp[ i - coin[ j ]] + 1);
    }
  }
  cout << dp[ n ] << endl;
  return 0;
}