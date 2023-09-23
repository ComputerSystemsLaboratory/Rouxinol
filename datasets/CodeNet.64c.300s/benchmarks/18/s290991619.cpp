#include <iostream>
using namespace std;

#define NMAX 30

int n;
int dp[NMAX+1];

int main()
{
  while(cin >> n && n > 0){
    for(int i = 1; i <= n; i++){
      dp[i] = 0;
    }
    dp[0] = 1;
    for(int i = 1; i <= n; i++){
      for(int j = 1; j <= 3 && j <= i; j++){
        dp[i] += dp[i - j];
      }
    }
    cout << dp[n] / 3650 + 1 << endl;
  }
  return 0;
}