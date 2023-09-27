#include<iostream>
#include<string>
int min(int a,int b){
  return (a>b)?b:a;
}
using namespace std;
int main(){
  int dp[1001][1001]={};
  string s1,s2;
  cin >> s1>>s2;
  for(int i=0;i<=s1.size();i++){
    dp[i][0]=i;
  }
  for(int i=0;i<=s2.size();i++){
    dp[0][i]=i;
  }
  for(int i=1;i<=s1.size();i++){
    for(int j=1;j<=s2.size();j++){
      int add,rm,repr;
      add=dp[i-1][j]+1;
      rm=dp[i][j-1]+1;
      repr=dp[i-1][j-1];
      if(s1[i-1]!=s2[j-1]){
         repr++;
      } 
      dp[i][j]=min(add,min(rm,repr));
    }
  }
  cout << dp[s1.size()][s2.size()]<<endl;;
}

