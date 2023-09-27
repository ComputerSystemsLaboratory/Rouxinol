#include<iostream>
#include<string>
using namespace std;

#if 0
所用時間:0.5h

感想:

#endif

int solve(string X, string Y){
  int rows = Y.size();
  int cols = X.size();
  int L[1001][1001] = {}; //L[y][x]の初期化

  //テーブルLの更新
  for(int r = 1; r <= rows; ++r){
    for(int c = 1; c <= cols; ++c){
      if(X[c-1] == Y[r-1]) L[r][c] = 1 + L[r-1][c-1];
      else L[r][c] = max(L[r][c-1], L[r-1][c]);
    }
  }

  // //テーブルの表示
  // cout << "Ltable:" << endl;
  // for(int row=0; row <= rows; ++row){
  //   for(int col = 0; col <= cols; ++col){
  //     cout << L[row][col];
  //   }
  //   cout << endl;
  // }

  return L[rows][cols];
}

int main(){
  int q;
  string X, Y;
  cin >> q;

  for(int i = 0; i < q; ++i){
    cin >> X >> Y;

    int ans = solve(X, Y);

    cout << ans << endl;
  }
}

