#include <bits/stdc++.h>
using namespace std;

#define PI 4*atan(1)
#define INF 1e8

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
  int N, M, P;
  while(cin >> N >> M >> P, N||M||P){
    vector<int> X(N);
    int X_sum = 0;
    for(int i = 0; i < N; i++){
      cin >> X[i];
      X_sum += X[i];
    }
    int ans = X_sum * (100-P);
    if(X[M-1]==0) cout << 0 << endl;
    else cout << ans / X[M - 1] << endl;
  }
}