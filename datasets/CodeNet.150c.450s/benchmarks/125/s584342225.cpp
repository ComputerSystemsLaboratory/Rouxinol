#include <iostream>
#include <sstream>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <vector>
#include<stack>
#include <algorithm>
using namespace std;
#define max 101
#define WHITE 0
#define BLACK 1
#define GRAY -1
int color[max],d[max],f[max];
int t,varry[max][max];
stack<int> s;
int next(int u){
  int nv=-1;
  for(int i=0;i<varry[u][0];i++){
    if(color[varry[u][i+1]]==WHITE){
      nv=varry[u][i+1];
      break;
    }
  }
  
  return nv;
}
void visit(int r){
  int u,v;
  s.push(r);
  color[r]=GRAY;
  d[r]=++t;
  while(!s.empty()){
    u=s.top();
    v=next(u);
    if(v!=-1){
      if(color[v]==WHITE){
	s.push(v);
	color[v]=GRAY;
	d[v]=++t;
      }
    }
    else{
      s.pop();
      color[u]=BLACK;
      f[u]=++t;
      
    }
  }
}
void dfs(int u){
  for(int i=1;i<=u;i++)
    if(color[i]==WHITE)visit(i);
}
int main(){
  int n,u;
  cin>>n;
  for(int k=0;k<n;k++){
    cin>>u;
    cin>>varry[u][0];
    for(int i=0;i<varry[u][0];i++)
      cin>>varry[u][i+1];

  }
  dfs(n);
  for(int i=1;i<=n;i++){
    cout<<i<<" "<<d[i]<<" "<<f[i]<<endl;
  }


  return 0;
}

