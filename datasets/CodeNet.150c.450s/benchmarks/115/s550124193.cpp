#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;


int main(){
  string X, Y;
  int q;
  cin >> q;
  for(int i = 0; i < q; i++){
    cin >> X >> Y;
    vector<vector<int> > dp(X.size(), vector<int>(Y.size(), 0));
    for(int i = 0; i < X.size(); i++){
      for(int j = 0; j < Y.size(); j++){
        if(X[i] == Y[j]){
          if(i == 0 || j == 0)dp[i][j] = 1;
          else dp[i][j] = dp[i - 1][j - 1] + 1;
        }else {
          if(i == 0 && j == 0)dp[i][j] = 0;
          else if(i == 0 && j != 0)dp[i][j] = dp[i][j - 1];
          else if(i != 0 && j == 0)dp[i][j] = dp[i - 1][j];
          else dp[i][j] = max(dp[i][j - 1], dp[i - 1][j]);
        }
      }
    }
    cout << dp[X.size() - 1][Y.size() - 1] << endl;
  }
}