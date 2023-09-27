#include <cstdio>
#include <algorithm>
#include <vector>
#include <string>
#include <iostream>
using namespace std;
string s,ss;
int dp[1001][1001];

int levenshtein(string s,string ss){
  if(s.length()==0 && ss.length()==0)return 0;
  if(s.length()==0) return ss.length();
  if(ss.length()==0) return s.length();
  
  for(int i=1;i<=s.length();i++)dp[0][i]=dp[0][i-1]+1;
  for(int i=1;i<=ss.length();i++)dp[i][0]=dp[i-1][0]+1;


  for(int i=1;i<=ss.length();i++){
    for(int j=1;j<=s.length();j++){
      
      if(s[j-1]==ss[i-1])dp[i][j]=dp[i-1][j-1];
      else{
	dp[i][j]=min(dp[i-1][j-1],dp[i][j-1]);
	dp[i][j]=min(dp[i][j],dp[i-1][j]);
	dp[i][j]++;
      }
      //printf("%d %d %d\n",i,j,dp[i][j]);
    }
  }
  /*
  for(int i=0;i<=ss.length();i++){
    for(int j=0;j<=s.length();j++){
      printf("%d ",dp[i][j]);
    }
    printf("\n");
  }
  */
  return dp[ss.length()][s.length()];
  
}
int main(){
  cin >> s;
  cin >> ss;
  printf("%d\n",levenshtein(s,ss));
 
  return 0;
}