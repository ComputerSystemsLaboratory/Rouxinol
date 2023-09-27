

#include <iostream>
#include <string>
using namespace std;

int main(){
  string s1,s2;
  int dp[1001][1001];
  cin >> s1 >> s2;
  for(int i=0;i<=s1.size();i++) dp[i][0]=i;
  for(int i=0;i<=s2.size();i++) dp[0][i]=i;
  for(int i=1;i<=s1.size();i++){
    for(int j=1;j<=s2.size();j++){
      int key=1;
      if(s2[j-1]==s1[i-1]) key=0;
      dp[i][j]=min(min(dp[i-1][j-1]+key,dp[i][j-1]+1),dp[i-1][j]+1);
    }
  }
  cout << dp[s1.size()][s2.size()] << endl;
}

