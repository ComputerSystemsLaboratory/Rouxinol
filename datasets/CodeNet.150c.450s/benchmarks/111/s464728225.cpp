#include <iostream>
using namespace std;

int n;
int x[100];
long long int dp[101][21];

int main()
{
  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> x[i];
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j <= 20; j++){
      dp[i][j] = 0;
    }
  }
  dp[1][x[0]] = 1;

  for(int i = 1; i < n - 1; i++){
    for(int j = 0; j <= 20; j++){
      int minus = j - x[i];
      int plus = j + x[i];
      if (minus >= 0){
        dp[i + 1][j] += dp[i][minus];
      }
      if (plus <= 20){
        dp[i + 1][j] += dp[i][plus];
      }
    }
  }

  cout << dp[n - 1][x[n - 1]] << endl;
  return 0;
}