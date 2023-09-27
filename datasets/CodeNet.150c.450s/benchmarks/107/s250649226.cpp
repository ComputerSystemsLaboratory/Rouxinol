
#include<iostream>
#include<string>
#include<algorithm>

using namespace std;
static const int N = 1000;

int Edit_Distance(string s1,string s2){
  int dp[N + 1][N + 1] = {};
  int m,n;
  
  m = s1.size();
  n = s2.size();
  
  for(int i = 0;i <= m;i++){
    dp[i][0] = i;
  }
  
  for(int i = 0;i <= n;i++){
    dp[0][i] = i;
  }
  
  for(int i = 1;i <= m;i++){
    for(int j = 1;j <= n;j++){
      int c;
      if(s1[i - 1] == s2[j - 1]) c = 0;
      else c = 1;
      
      int m = min(dp[i - 1][j] + 1,dp[i - 1][j - 1] + c);
      
      dp[i][j] = min(m,dp[i][j - 1] + 1);
    }
  }
  
  return dp[m][n];
}
      
int main(){
  string s1,s2;
  
  cin >> s1 >> s2;
  
  cout << Edit_Distance(s1,s2) << '\n';
  
  return 0;
}

