#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int Levenstein(string a,string b){
  int dp[a.size()+1][b.size()+1];

  for(int i=0;i<=a.size();i++)dp[i][0]=i;
  for(int i=0;i<=b.size();i++)dp[0][i]=i;

  for(int i=1;i<=a.size();i++){
    for(int j=1;j<=b.size();j++){
      int cost=(a[i-1]==b[j-1])?0:1;
      dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+cost));
    }
  }
  return dp[a.size()][b.size()];
}

int main(void){

  string a,b;
  cin >> a >> b;
  cout << Levenstein(a,b) << endl;

  return 0;
}