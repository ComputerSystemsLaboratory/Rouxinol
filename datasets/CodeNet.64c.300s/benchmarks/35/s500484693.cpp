#include<bits/stdc++.h>
#define N 105
using namespace std;
int n,u,k,v,e[N][N];

int main(){
  cin>>n;
  for(int i=0;i<n;i++){
    cin>>u>>k;
    for(int i=0;i<k;i++)
      cin>>v,e[u-1][v-1]=1;
  }
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      if(j)cout<<' ';
      cout<<e[i][j];
    }
    cout<<endl;
  }
  return 0;
}