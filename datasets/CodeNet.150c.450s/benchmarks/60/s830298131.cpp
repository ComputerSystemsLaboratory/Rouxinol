#include<bits/stdc++.h>
using namespace std;
int M[111][111];
int main(){
  int n,u,k,v;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    u--;
    for(int j=0;j<k;j++){
      cin>>v;
      v--;
      M[u][v]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j) cout<<' ';
      cout<<M[i][j];
    }
    cout<<endl;
  }
  return(0);
}

