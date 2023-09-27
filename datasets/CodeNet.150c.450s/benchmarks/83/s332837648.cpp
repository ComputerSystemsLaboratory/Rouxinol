#include<iostream>
#include<algorithm>
#include<functional>
using namespace std;

#if 0
所用時間: 1h

感想: 変数が多く飲み込むのにかなり時間がかかった。紙で手を動かしてみてようやく仕組みを理解できた。

#endif

int N, W, v[101], w[101], Val[101][100001], ans = 0;//Val[y=i][x=c]

int solve(){

  for(int i = 0; i <= N; ++i){
    for(int c = 0; c <= W; ++c){
      if((i == 0) || (c == 0)) Val[i][c] = 0;
      else if(c - w[i] < 0) Val[i][c] = Val[i-1][c];
      else Val[i][c] = max(Val[i-1][c], Val[i-1][c-w[i]]+v[i]);
    }
  }

  return ans = Val[N][W];

}

int main(){
  cin >> N >> W;
  for(int i = 1; i <= N; ++i){
    cin >> v[i] >> w[i];
    //printf("v[%d]: %d, w[%d]: %d\n",i, v[i], i, w[i]);
  }
  cout << solve() << endl;
}

