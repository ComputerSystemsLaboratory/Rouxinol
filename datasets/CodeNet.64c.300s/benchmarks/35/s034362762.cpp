#include<iostream>
int main()
{
  int n;
  int u,k,v;
  int V[100][100]={0};
  std::cin>>n;
  for(int i=0;i<n;i++){
    std::cin>>u>>k;
    for(int j=0;j<k;j++){
      std::cin>>v;
      V[u-1][v-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      std::cout<<V[i][j]<<" ";
    }
    std::cout<<V[i][n-1]<<'\n';
  }
  return 0;
}

