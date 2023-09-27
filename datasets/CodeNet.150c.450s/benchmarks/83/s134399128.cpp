#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>
#include <math.h>
#include <set>
using namespace std;
#define rep(i,n) for(int i = 0; i < n ; i++)
#define pb push_back
static const int INF = (1 << 21);


int main(void){
  int N,W; cin >> N >> W;
  int v[N+1],w[N+1];
  for(int i = 1; i < N+1; i++){
    cin >> v[i] >> w[i];
  }

  int T[N+1][W+1];
  rep(i,W+1){
    T[0][i] = 0;
  }
  rep(i,N+1){
    T[i][0] = 0;
  }

  for(int i = 1; i < N+1; i ++){
    for(int j = 1; j< W + 1 ; j++){
      //????????????0???????°??????????????????¨???????????????
      if(j - w[i] >= 0){
        T[i][j] = max(T[i-1][j],T[i-1][j-w[i]]+v[i]);
      }else{
        T[i][j] = T[i-1][j];
      }
    }
  }

  cout << T[N][W] << endl;

  return 0;
}