#include<bits/stdc++.h>
using namespace std;

int n;
vector<int>g[100002];
int color[100002];

void dfs(int r,int c);
void assigncolor();//割り当てる

int main(){
  int s,t,m,q;

  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>s>>t;
    g[s].push_back(t);
    g[t].push_back(s);
  }
  
  assigncolor();

  cin>>q;
  
  for(int i=0;i<q;i++){
    cin>>s>>t;
    if(color[s]==color[t])cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }

  return(0);
}

void assigncolor(){
  int id=1;
  for(int i=0;i<n;i++)color[i]=-1;
  for(int i=0;i<n;i++){
    if(color[i] == -1)dfs(i,id);
    id++;
  }
}

void dfs(int r,int c){
  stack<int>st;
  st.push(r);
  color[r]=c;
  while(!st.empty()){
    int u=st.top();
    st.pop();
    for(int i=0;i<g[u].size();i++){
      int v=g[u][i];
      if(color[v]==-1){
	color[v]=c;
	st.push(v);
      }
    }
  }
}