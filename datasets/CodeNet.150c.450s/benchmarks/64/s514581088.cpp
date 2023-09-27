#include <iostream>
using namespace std;
 
#define N 1000000
#define INF 1000000

int main(void){
  int n, q, m, ans;
  int a[21];
  int dp[21][2001];
  
  cin >> n;
  for (int i=1; i<=n; i++){
    cin >> a[i];
  }
  // DPで殴る
  for (int j=1; j<=2000; j++) dp[0][j] = 0;
  for (int i=0; i<=n; i++) dp[i][0] = 1;
  for (int i=1; i<=n; i++){
    for (int j=0; j<=2000; j++){
      dp[i][j] = dp[i-1][j];
      if (j-a[i]>=0){
        dp[i][j] += dp[i-1][j-a[i]];
      }
    }
  }
/*  for (int i=0; i<=n; i++){
    for (int j=0; j<=20; j++){
      cout << dp[i][j] << " ";
    } cout << endl;
  }*/
  
  cin >> q;
  for (int i=0; i<q; i++){
    cin >> m;
    cout << (dp[n][m]?"yes":"no") << endl;
  }
  return 0;
}
