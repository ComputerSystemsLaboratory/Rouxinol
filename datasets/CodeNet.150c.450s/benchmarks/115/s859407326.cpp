#include <iostream>
#include <string>
using namespace	std;
int main(){

  int n;
  string s1,s2;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>s1>>s2;
    int dp[1001][1001]={};
    for(int j=1;j<=s2.size();j++){
      for(int k=1;k<=s1.size();k++){
        if(s1[k-1]==s2[j-1]) dp[j][k]=dp[j-1][k-1]+1;
        else dp[j][k]=max(dp[j-1][k],dp[j][k-1]);
      }
    }
    cout<<dp[s2.size()][s1.size()]<<endl;
  }
  return 0;

}