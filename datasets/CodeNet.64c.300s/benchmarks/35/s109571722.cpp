#include<iostream>
using namespace std;
int M[101][101];

int main(){
  int n,u,k,v;
  cin>>n;

  for(int i=1;i<=n;i++){
    cin>>u>>k;
    for(int j=1;j<=k;j++){
      cin>>v;
      M[u][v]=1;
    }
  }

  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(j-1) cout<<" ";
      cout<<M[i][j];
    }
    cout<<endl;
  }
  return 0;
}

