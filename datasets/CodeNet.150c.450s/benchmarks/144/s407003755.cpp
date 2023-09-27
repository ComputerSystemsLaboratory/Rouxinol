#include <bits/stdc++.h>

#define MAX 100
#define rep(i,n) for(int i = 0 ; i < n ; i++)
typedef long long ll;

int main(){
  ll N, M, L, a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];

  std::cin >> N >> M >> L;
  rep(i,N){
    rep(j,M){
      std::cin >> a[i][j];
    }
  }
  rep(i,M){
    rep(j,L){
      std::cin >> b[i][j];
    }
  }

  memset(c,0,sizeof(c));
  rep(i,N){
    rep(j,M){
      rep(k,L){
        c[i][k] += a[i][j]*b[j][k];
      }
    }
  }
  rep(i,N){
    rep(j,L){
      if(j != L-1){
        std::cout << c[i][j] << " ";
      }else{
        std::cout << c[i][j] << std::endl;
      }
    }
  }

  return 0;
}