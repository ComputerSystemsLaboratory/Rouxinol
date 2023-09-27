#include<iostream>
int main(){
  int n;
  std::cin>>n;
  int i,j;
  int u[n],k;
  int a[n][n];
  //行列の初期化
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      a[i][j]=0;
    }
  }
  
  for(i=0; i<n; i++){
    std::cin>>u[i];
    std::cin>>k;
    for(j=0; j<k; j++){
      int v;
      std::cin>>v;
      a[i][v-1]=1;
    }
  }
  for(i=0; i<n; i++){
    for(j=0; j<n-1; j++){
      std::cout<<a[i][j]<<" ";
    }
    std::cout<<a[i][n-1]<<"\n";
  }
}
      

