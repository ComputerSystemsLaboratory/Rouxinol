#include <iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(void){
  string s1,s2;
  cin>>s1;
  cin>>s2; 
  int dp[1001][1001];
  for(int i=0;i<1001;i++){
    dp[i][0]=i;
    dp[0][i]=i;
  }
  for(int i=1;i<s1.length()+1;i++){
    for(int j=1;j<s2.length()+1;j++){
      if(s1[i-1]==s2[j-1]){
	dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]});
      }
      else{
	dp[i][j]=min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]})+1;
      }
    }
  }
  cout<<dp[s1.length()][s2.length()]<<"\n";
  return 0;
}
