#include <iostream>
using namespace std;
long long dp[101][21];
int main() {
  int n;
  int data[100];
  
  cin >> n;
  for(int i=0; i<n-1; i++) {
    cin >> data[i];
  }

  dp[0][data[0]] = 1;
  for(int i=1; i<n-1; i++) {
    for(int j=0; j<=20; j++) {
      if(j+data[i]<=20) dp[i][j+data[i]] += dp[i-1][j];
      if(j-data[i]>=0)  dp[i][j-data[i]] += dp[i-1][j];
    }
  }

  int s; cin >> s;
  cout << dp[n-2][s] << endl;
  return 0;
}