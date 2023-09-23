#include <iostream>
#include <sstream>

int main () {
  int n;
  int k;
  int u1,u;
  std::cin>>n;
  int V[n][n];
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      V[i][j]=0;
    }
  }
  for(int i=0;i<n;i++){
    std::cin>>u1>>k;
    for(int j=0;j<k;j++){
      std::cin>>u;
      V[u1-1][u-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      std::cout<<V[i][j]<<" ";
    }
    std::cout<<V[i][n-1]<<"\n";
  }
  return 0;
}
