#include<iostream>
#include<algorithm>
#include<string>
 
using namespace std;
 
int dp[1001][1001];
 
int main(){
 
  string s1,s2;
  cin>>s1>>s2;
  for(int i=0;i<=s1.length();i++){
    dp[i][0] = i;
  }
  for(int j=0;j<=s2.length();j++){
    dp[0][j] = j;
  }
 
  for(int i=1;i<=s1.length();i++){
    for(int j=1;j<=s2.length();j++){
      int k=0;
      if(s1[i-1]==s2[j-1]){
	k=0;
      }else{
	k=1;
      }
      dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+k));
    }
  }
  cout<<dp[s1.length()][s2.length()]<<endl;
  return 0;
}

