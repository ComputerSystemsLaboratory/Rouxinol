#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m,a[102][102]={0};
  cin>>n>>m;
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
      a[i][m]+=a[i][j];
      a[n][j]+=a[i][j];
      a[n][m]+=a[i][j];
    }
  }
  for(int i=0;i<=n;i++){
    for(int j=0;j<=m;j++){
      cout<<a[i][j];
      if(j!=m)cout<<" ";
    }
    cout<<endl;
  }
  return 0;
}