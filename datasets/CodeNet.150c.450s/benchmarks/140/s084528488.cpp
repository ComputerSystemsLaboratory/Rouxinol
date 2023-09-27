#include<bits/stdc++.h>
using namespace std;
#define MAX_V 11111
typedef pair<int,int> P;
vector<P> G[MAX_V];
bool used[MAX_V];
int prim(){
  int res=0;
  priority_queue<P,vector<P>,greater<P> > q;
  q.push(P(0,0));
  memset(used,0,sizeof(used));
  while(!q.empty()){
    P p=q.top();q.pop();
    int v=p.second,d=p.first;
    if(used[v]) continue;
    used[v]=1;
    res+=d;
    for(int i=0;i<(int)G[v].size();i++){
      q.push(G[v][i]);
    }
  }
  return res;
}
int main(){
  int V,E;
  cin>>V>>E;
  for(int i=0;i<E;i++){
    int s,t,u;
    cin>>s>>t>>u;
    G[s].push_back(P(u,t));
    G[t].push_back(P(u,s));
  }
  cout<<prim()<<endl;
  return 0;
}