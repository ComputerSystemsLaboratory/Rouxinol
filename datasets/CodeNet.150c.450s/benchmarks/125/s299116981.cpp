#include<bits/stdc++.h>
using namespace std;

int a[100][100],n;
int d[100],f[100],c[100],tt;
int nt[100];

int next(int u){
  for(int i=nt[u];i<n;i++){
    nt[u]=i+1;
    if(a[u][i]) return i;
  }
  return -1;
}

void dfs_v(int r){
  for(int i=0;i<n;i++) nt[i]=0;
  stack<int> s;
  s.push(r);
  c[r]=1;
  d[r]=++tt;
  while(!s.empty()){
    int u=s.top();
    int v=next(u);
    if(v!=-1){
      if(c[v]==0){
	c[v]=1;
	d[v]=++tt;
	s.push(v);
      }
    }else{
      s.pop();
      c[u]=2;
      f[u]=++tt;
    }
  }
}

void dfs(){
  for(int i=0;i<n;i++){
    c[i]=0;
    nt[i]=0;
  }
  tt=0;
  for(int i=0;i<n;i++){
    if(c[i]==0) dfs_v(i);
  }
  for(int i=0;i<n;i++){
    cout<<i+1<<" "<<d[i]<<" "<<f[i]<<endl;
  }
}


  
int main(){
  int u,k,v;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<n;j++) a[i][j]=0;
  }
  for(int i=0;i<n;i++){
    cin>>u>>k;
    u--;
    for(int j=0;j<k;j++){
      cin>>v;
      v--;
      a[u][v]=1;
    }
  }
  dfs();
  return 0;
}

