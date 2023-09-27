#include<iostream>
#include<algorithm>
using namespace std;
#define INF (99999999)
int main(){

  //-------データの入力------------
  int n;
  cin >> n;
  int row[n];
  int column[n];
  for(int i = 0; i < n; i++){
    cin >> row[i] >> column[i];
  }
  //-----------------------------

  //[始点][終点（始点+幅）]の最小コスト
  int dp[n][n];

  //INFで初期化
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      dp[i][j] = INF;
    }
  }

  //幅0はコスト0
  //dp[i][i+0] = 0
  for(int i = 0; i < n; i++){
    dp[i][i] = 0;
  }

  //幅:j = 0 から探索開始
  for(int j = 0; j < n; j++){
    //始点: i
    for(int i = 0; i < n - j; i++){
      //仕切りを置く位置: k
      // (M_0, M_1, M_2, M_3) | (M_4, M_5)
      for(int k = i + 1; k <= i + j; k++){
        //現在のdp[i][i+j]より小さければ更新
        dp[i][i+j] = min(dp[i][i+j], dp[i][k-1] + dp[k][i+j] + row[i] * column[k-1] * column[i+j]);
      }
    }
  }
  /*
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }
  */
  //始点０、幅n-1の最小コスト=> n個の行列の連鎖の計算に最低限必要な乗算の回数　を出力
  cout << dp[0][n-1] << endl;
  return 0;
}