#include<iostream>
#define INF 200001
int main(){
  int u,k,C,V,A[1000][1000],D[1000][1000],n;
  std::cin >> n;
  for(int i=0;i<n;i++)for(int j=0;j<n;j++)D[i][j] = INF;
  for(int i=0;i<n;i++){  
    std::cin >> u >> k;
    for(int j=0;j<k;j++){
      std::cin >> V >> C;
      D[u][V] = C;
    }  
  }
  for(int i=0;i<n;i++)D[i][i] = 0;
  for(int k=0;k<n;k++)for(int i=0;i<n;i++)for(int j=0;j<n;j++)D[i][j]= std::min(D[i][j],D[i][k] + D[k][j]);
  for(int i=0;i<n;i++)std::cout << i << " " << D[0][i] << std::endl;
  return 0;
}