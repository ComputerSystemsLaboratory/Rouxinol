#include <iostream>
#include <queue>
using namespace std;
const int MAX_V=10000;
typedef pair<int,int> P;
vector<P> G[MAX_V];
bool f[MAX_V];
int v;
int prim(){
  int r=0;
  priority_queue<P,vector<P>,greater<P> > q;
  q.push(P(0,0));
  fill(f,f+v,0);
  for(;!q.empty();){
    P p=q.top();q.pop();
    int b=p.second,d=p.first;
    if(f[b]) continue;
    f[b]=1;
    r+=d;
    for(int i=0;i<(int)G[b].size();i++) q.push(G[b][i]);
  }
  return r;
}
int main(){
  int e;
  cin>>v>>e;
  for(int i=0,a,b,c;i<e&&cin>>a>>b>>c;i++) G[a].push_back(P(c,b)),G[b].push_back(P(c,a));
  cout<<prim()<<endl;
  return 0;
}