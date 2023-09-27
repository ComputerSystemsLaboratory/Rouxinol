/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_10_C&lang=jp
*/
#include<iostream>
#include<string>
using namespace std;

//最長共通部分列
int LCS(string x , string y){
  int x_len=x.size();
  int y_len=y.size();
  int dp[x_len+1][y_len+1];
  //初期化
  for(int i=0;i<=x_len;i++){
    for(int j=0;j<=y_len;j++){
      dp[i][j]=0;
    }
  }
  for(int i=0;i<x_len;i++){
    for(int j=0;j<y_len;j++){
      if(x[i]==y[j]){
        dp[i+1][j+1]=dp[i][j]+1;
      }else{
        dp[i+1][j+1]=max(dp[i+1][j],dp[i][j+1]);
      }
    }
  }
  return dp[x_len][y_len];
}
int main(){
  int q;
  cin>>q;
  for(int i=0;i<q;i++){
    string str1,str2;
    cin>>str1>>str2;
    cout<<LCS(str1,str2)<<"\n";
  }
}

