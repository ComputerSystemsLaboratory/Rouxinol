#include<iostream>
#include<vector>
#include<stack>
using namespace std;
#define NIL -1
int n,m;
int color[1000100];
vector<int>G[100100];

void dfs(int r, int c){
  stack<int> S;
  S.push(r);
  color[r]=c;
  while(!S.empty()){
    int u=S.top();S.pop();
    for(int i=0;i<G[u].size();i++){
      int v=G[u][i];
      if(color[v]==NIL){
        color[v]=c;
        S.push(v);
      }
    }
  }
}

void assignColor(){
  int id=1;
  for(int i=0;i<n;i++)color[i]=NIL;
  for(int u=0;u<n;u++){
    if(color[u]==NIL)dfs(u,id++);
  }
}

int main(){
  int t,s,p,q,k,l;
  cin>>n>>m;
  for(int i=0;i<m;i++){
    cin>>t>>s;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  assignColor();

  cin>>p;
  for(int i=0;i<p;i++){
    cin>>k>>l;
    if(color[k]==color[l]){
      cout<<"yes"<<endl;
    }else{
      cout<<"no"<<endl;
    }
  }
}

