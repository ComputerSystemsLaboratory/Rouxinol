#include<bits/stdc++.h>
using ll=long long;
using namespace std;
#define rep(i, n) for(ll i=0; i<n; i++)
#define Rep(i, j, n) for(ll i=j; i<n; i++)
#define all(vec) vec.begin(), vec.end()
template<class T> inline bool chmin(T& a, T b) {if(a > b) {a = b; return true;} return false;}
template<class T> inline bool chmax(T& a, T b) {if(a < b) {a = b; return true;} return false;}

int main(){
  //input
  string x,y;
  cin>>x>>y;
  
  //prepare
  x=" "+x;
  y=" "+y;
  int xlen,ylen;
  xlen=x.size();
  ylen=y.size();
  int mlen=max(xlen,ylen);
  int dp[1002][1002];//dp[i][j]:=xのi文字目までとyのj文字目までを使って一致させるのに必要な最低作業回数
  rep(i,mlen)dp[i][0]=dp[0][i]=i;//i文字まで一致であれば最大でもi回の操作でいける

  
  rep(i,xlen){
    rep(j,ylen){
      if(x[i+1]==y[j+1])dp[i+1][j+1]=min(dp[i][j],min(dp[i+1][j]+1,dp[i][j+1]+1));
      else dp[i+1][j+1]=min(dp[i][j]+1,min(dp[i+1][j]+1,dp[i][j+1]+1));
      //xのi文字目とｙのｊ文字目までを使って一致させるまでの作業＝
      //xのi-1(i)文字目までとyのj(j-1)文字目までの文字列にする作業に対し、x(y)の最後に位置文字挿入する
      //or　i文字目とj文字目を一致させるように置換する
      
      //cout<<dp[i][j];//dptable用
    }//cout<<endl;//dptable用    
  }
  //output
  cout<<dp[xlen-1][ylen-1]<<endl;   
    
  return 0;
}
