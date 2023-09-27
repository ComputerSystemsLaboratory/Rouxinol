#include<bits/stdc++.h>
using namespace std;

vector<int> g[100000];
int c[100000],n;


void dfs(int r,int a){
  stack<int> s;
  s.push(r);
  c[r]=a;
  while(!s.empty()){
    int u=s.top();
    s.pop();
    for(int i=0;i<g[u].size();i++){
      int v=g[u][i];
      if(c[v]==-1){
	c[v]=a;
	s.push(v);
      }
    }
  }
}

void color(){
  int id=1;
  for(int i=0;i<n;i++) c[i]=-1;
  for(int i=0;i<n;i++){
    if(c[i]==-1) dfs(i,id++);
  }
}
    
int main(){
  int s,t,m,q;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>s>>t;
    g[s].push_back(t);
    g[t].push_back(s);
  }
  color();
  cin>>q;
  for(int i=0;i<q;i++){
    cin>>s>>t;
    if(c[s]==c[t]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  return 0;
}

