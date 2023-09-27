#include <iostream>
#include <cstdio>
#define MAX 101
using namespace std;

int n;
int t=1;
int a[MAX][MAX]={};
int d[MAX]={},f[MAX]={};

void track(int p){
  if(d[p]==0){
    d[p]=t;
    t++;
  }
  for(int i=1;i<=n;i++){
    if(a[p][i]==1&&d[i]==0){
      track(i);
    }
  }
  f[p]=t; t++;
}

int main(){

  cin>>n;
  for(int i=1;i<=n;i++){
    int u,k; cin>>u>>k;
    for(int j=0;j<k;j++){
      int v; cin>>v;
      a[i][v]=1;
    }
  }

  for(int i=1;i<=n;i++){
    if(d[i]==0) track(i);
  }

  for(int i=1;i<=n;i++){
    cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
  }
}