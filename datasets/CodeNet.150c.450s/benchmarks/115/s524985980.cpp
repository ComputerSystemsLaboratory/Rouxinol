#include <iostream>
#include <algorithm>
#include <string>
#define INF 100000

using namespace std;

int dp[1000][1000];
string X, Y;

int lcs(int i,int j){
  if(i < 0 || j < 0) return 0;
  if(dp[i][j] != INF) return dp[i][j];

  if(X[i] == Y[j]){
    dp[i][j] = lcs(i-1, j-1) + 1;
    return dp[i][j];
  } else {
    dp[i][j] =  max(lcs(i-1,j), lcs(i, j-1));
    return dp[i][j];
  }
}

void clear(){
  for(int i = 0;i < X.size();i++){
    for(int j = 0;j < Y.size();j++){
      dp[i][j] = INF;
    }
  }
}

int main(){
  int q;

  cin >> q;

  for(int i = 0;i < q;i++){
    cin >> X >> Y;
    
    clear();
    
    cout << lcs(X.size()-1, Y.size()-1) << endl;
  }

  return 0;
}