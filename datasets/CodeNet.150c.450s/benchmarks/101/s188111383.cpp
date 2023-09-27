#include<iostream>
#include<vector>
#include<stack>
using namespace std;

const int N=100001;

int n;
vector<int> G[N];
int color[N];

void dfs(int x,int y){
  stack<int> S;
  
  S.push(x);
  color[x]=y;
  
  while(!S.empty()){
    int u=S.top();
    S.pop();
    for(int i=0;i<G[u].size();i++){
      int v=G[u][i];
      if(color[v]==-1){
	color[v]=y;
	S.push(v);
      }
    }
  }
}

void assignColor(){
  int id=1;
  for(int i=0;i<n;i++) color[i]=-1;
  for(int i=0;i<n;i++){
    if(color[i]==-1) dfs(i,id++);
  }
}

int main(){
  int m,q,s,t;

  cin>>n>>m;

  for(int i=0;i<m;i++){
    cin>>s>>t;
    G[s].push_back(t);
    G[t].push_back(s);
  }

  assignColor();

  cin>>q;

  for(int i=0;i<q;i++){
    cin>>s>>t;
    if(color[s]==color[t]) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
  }
  
  return 0;
}