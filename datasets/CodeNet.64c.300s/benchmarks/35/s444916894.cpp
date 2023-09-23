#include<iostream>

#define MAX 105

int main(){
  int n,u,k;
  int adj[MAX][MAX] = {{0}};
  int A[MAX][MAX] = {{0}};
  std::cin >> n;
  for(int i=1;i<=n;i++){
    std::cin >> u >> k;
    for(int j=1;j<=k;j++){
      std::cin >> adj[u][j];
    }
    adj[u][k+1] = -1;
  }
  //std::cout << "入力\n";

  for(int i=1;i<=n;i++){
    int j=1;
    while(adj[i][j] != -1){
      A[i][adj[i][j]] = 1;
      j++;
    }
    std::cout << A[i][1] ;
    for(j=2;j<=n;j++){
      std::cout << ' ' << A[i][j] ;
    }
    std::cout << '\n';
  }

  return 0;
}


