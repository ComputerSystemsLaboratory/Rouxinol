#include<bits/stdc++.h>
using namespace std;
int main(){
  int a[101][101]={};
  int n,u,k,v;
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int j=0;j<k;j++){
      cin>>v;
      a[u][v]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n-1;j++)
      cout<<a[i+1][j+1]<<' ';
    cout<<a[i+1][n]<<endl;
  }
  return 0;
}