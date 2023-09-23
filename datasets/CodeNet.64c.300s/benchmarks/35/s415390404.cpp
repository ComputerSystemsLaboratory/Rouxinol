#include<bits/stdc++.h>
using namespace std;

int main(){
  int m[101][101]={},n,k,v,i,j,u;
  cin>>n;
  for(i=1;i<=n;i++){
    cin>>u>>k;
    for(j=0;j<k;j++)cin>>v,m[u][v]=1;
  }
  for(i=1;i<=n;i++){
    for(j=1;j<n;j++)cout<<m[i][j]<<" ";
    cout<<m[i][j]<<endl;
  }
    return 0;
}