#include<iostream>
#include<cstring>
using namespace std;

//メモ用配列
int dp[16][16];

int main(){
  int a,b,n;
  while(cin>>a>>b,a||b){
    cin>>n;
    
    //メモ初期化
    memset(dp,-1,sizeof(dp));
    
    for(int i = 0; i < n; i++){
      int x,y;
      cin>>x>>y;
      //工事中のところに0
      dp[x-1][y-1] = 0;
    }
    
    //スタート地点に1代入
    dp[0][0] = 1;
    for(int i = 1; i < a; i++){
      //もし工事中だったら一個戻る
      if(dp[i][0]){
	dp[i][0] = dp[i-1][0];
      }
    }
    for(int i = 1; i < b; i++){
      //もし工事中だったら一個戻る
      if(dp[0][i]){
	dp[0][i] = dp[0][i-1];
      }
    }
    
    for(int i = 1; i < a; i++){
      for(int j = 1; j < b; j++){
	if(dp[i][j]){
	  dp[i][j] = dp[i][j-1]+dp[i-1][j];
	}
      }
    }
    
    cout<<dp[a-1][b-1]<<endl;
  }
  return 0;
}