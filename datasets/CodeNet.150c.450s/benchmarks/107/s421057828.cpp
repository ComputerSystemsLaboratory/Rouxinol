#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

//先ほどのプログラムと同様に共通部分文字列がわかれば、その他の部分を変えればいいだけでもない
//先ほどのプログラムにとらわれすぎた
//以下を参照した
//https://muttan1203.hatenablog.com/entry/2016/10/30/005158
//https://imulan.hatenablog.jp/entry/2015/10/31/181942
//https://takuti.me/note/levenshtein-distance/

//動的計画法
//部分問題でも同じ最適化問題が成立している
//部分問題間が独立している
//メモ化をするのか、部分問題を順に解いていくのか
//この問題ではメモ化

//編集距離dp[i][j]としてdp[i][j]=min(dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+?)
//前半二つは削除と挿入(形的には変わらない)、置換は同じかどうかで違う
//どちらの要素に作用させるかだけなので
//?はiとjにあたる文字が同じなら0違うなら1


int main(){
  string s1,s2;
  int ls1,ls2;
  cin >> s1 >> s2;
  ls1=(int)(s1.size());ls2=(int)(s2.size());
  vector<vector<int>> dp(ls1,vector<int>(ls2,0));
  int k=0;
  for(int i=0;i<ls1;i++){
    if(s2[0]==s1[i]){
      k=1;
      dp[i][0]=i;
    }else if(k==1){
      dp[i][0]=i;
    }else{
      dp[i][0]=i+1;
    }
  }
  k=0;
  for(int i=0;i<ls2;i++){
    if(s1[0]==s2[i]){
      k=1;
      dp[0][i]=i;
    }else if(k==1){
      dp[0][i]=i;
    }else{
      dp[0][i]=i+1;
    }
  }
  for(int i=1;i<ls1;i++){
    for(int j=1;j<ls2;j++){
      int cost=1;
      if(s1[i]==s2[j]){cost=0;}
      dp[i][j]=min({dp[i-1][j]+1,dp[i][j-1]+1,dp[i-1][j-1]+cost});
    }
  }

  cout << dp[ls1-1][ls2-1] << endl;
}

