#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#define INF 1e9

int main(void){
  int n;
  cin >> n;

  int unwanted;
  vector<int> c(n + 1);
  cin >> c[0] >> c[1];
  for(int i = 2; i <= n; i++){ cin >> unwanted >> c[i]; }

  vector<vector<int> > dp(n, vector<int>(n + 1, INF));
  for(int i = 0; i < n; i++){ dp[i][i + 1] = 0; }

  for(int k = 2; k <= n; k++){
    for(int i = 0; i < n; i++){
      for(int j = 1; j < k; j++){
        if(i + k <= n){
          dp[i][i + k] = min(dp[i][i + k], dp[i][i + j] + dp[i + j][i + k] + c[i] * c[i + j] * c[i + k]);
        }
      }
    }
  }


  // ??????
  cout << dp[0][n] << endl;


  return 0;
}