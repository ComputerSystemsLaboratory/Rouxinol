#include<iostream>

int main(){

  int n,a;
  std::cin>>n;

  int Adj[n][n],adj[100][100]={0};
  int u[n],k[n];
  for(int i=0;i<n;i++){
    std::cin>>u[i];
    std::cin>>k[i];
    for(int j=0;j<k[i];j++){
      std::cin>>Adj[i][j];
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<k[i];j++){
      adj[u[i]-1][Adj[i][j]-1]=1;
    }
  }


  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++){
      std::cout<<adj[i][j]<<" ";
    }
     std::cout<<adj[i][n-1]<<"\n";
    //std::cout<<"\n";
  }


  return 0;
}

