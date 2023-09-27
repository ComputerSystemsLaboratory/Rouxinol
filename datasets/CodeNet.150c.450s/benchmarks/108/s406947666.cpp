#include <iostream>
#include <cstdio>
#define MAX 101
using namespace std;

int n;
int a[MAX][MAX]={};
int d[MAX];

void track(int v,int depth){
  if(d[v]>depth||d[v]==-1){
    d[v]=depth;
  }else if(d[v]<depth){
    return;
  }
  for(int i=1;i<=n;i++){
    if(a[v][i]==1){
      track(i,depth+1);
    }
  }
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
    d[i]=-1;
  }

  track(1,0);

  for(int i=1;i<=n;i++){
    cout<<i<<" "<<d[i]<<endl;
  }
}