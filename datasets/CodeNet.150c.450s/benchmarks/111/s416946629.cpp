#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  vector<int> items(100, 0);
  cin >> n;

  for(int i = 0; i < n; i++) {
    cin >> items[i];
  }

  //vector<vector<int> > dp(n, vector<int>(21, 0));                          
  unsigned long long dp[101][21] = {0};

  dp[0][items[0]] = 1;
  for(int i = 1; i < n-1; i++) {
    //cout << n << endl;                                                     
    //cout << items[i] << endl;                                              
    for(int j = 0; j <= 20; j++) {
      //cout << i-1 << ' ' << j << ' ' << dp[i-1][j] <<endl;                 
      if(dp[i-1][j] > 0) {
	if(j+items[i] >= 0 && j+items[i] <= 20)
          dp[i][j+items[i]] += dp[i-1][j]; //たす                            
        if(j-items[i] >= 0 && j-items[i] <= 20)
          dp[i][j-items[i]] += dp[i-1][j]; //ひく                            
      }
    }
  }

  cout << dp[n-2][items[n-1]] << endl;

  return 0;
}

