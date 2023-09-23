#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,lis[100][100]={};
  cin>>n;
  for(int c=0;c<n;c++){
    int u,k,v;
    cin>>u>>k;
    for(int i=0;i<k;i++){
      cin>>v;
      lis[u-1][v-1]=1;
    }
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j)cout<<" ";
      cout<<lis[i][j];
    }
    cout<<endl;
  }
  return 0;
}