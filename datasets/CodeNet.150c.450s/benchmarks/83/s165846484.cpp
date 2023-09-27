#include <iostream>
using namespace std;

int main(){
  int N,W;
  cin >> N >> W;

  int v[100],w[1000];
  for(int i=0;i<N;i++){
    cin >> v[i] >> w[i];
  }

  int DP[N+1][W+1];
  for(int i=0;i<=W;i++){
    DP[0][i]=0;
  }

  for(int i=1;i<=N;i++){
    for(int j=0;j<=W;j++){
      if(j<w[i-1])
        DP[i][j]=DP[i-1][j];
      else{
        if(DP[i-1][j]>DP[i-1][j-w[i-1]]+v[i-1])
          DP[i][j]=DP[i-1][j];
        else
          DP[i][j]=DP[i-1][j-w[i-1]]+v[i-1];
      }
    }
  }

  cout << DP[N][W] << endl;

  return 0;
}

