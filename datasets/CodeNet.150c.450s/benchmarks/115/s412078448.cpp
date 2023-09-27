#include<iostream>
#include<string>
#include<algorithm>

static const int N = 1000;
using namespace std;

int LCS(string X,string Y){
  int m,n;
  
  m = X.size();
  n = Y.size();
  
  int dp[N + 1][N + 1] = {0};
  
  X = ' ' + X;
  Y = ' ' + Y;

  for(int i = 1;i <= m;i++){
    for(int j = 1;j <= n;j++){
      if(X[i] == Y[j]){
	dp[i][j] = dp[i - 1][j - 1] + 1;
      }else{
	dp[i][j] = max(dp[i - 1][j],dp[i][j - 1]);
      }
    }
  }
  
  /*for(int i = 0;i < ax;i++){
    for(int j = 0;j < ay;j++){
      cout << dp[i][j] << " ";
    }
    cout << '\n';
    }*/
  
  return dp[m][n];
}

int main(){
  int q;
  string X,Y;
  
  cin >> q;
  
  for(int i = 0;i < q;i++){
    cin >> X >> Y;
    //cout << X.size() << " " << Y.size() << '\n';
    cout << LCS(X,Y) << '\n';
  }
  
  return 0;
}
  

