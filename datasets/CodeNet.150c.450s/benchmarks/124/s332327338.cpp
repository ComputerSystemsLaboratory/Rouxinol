#include<bits/stdc++.h>
#include<string>
#include<cctype>
#include<cmath>
#include<queue>
#include<stack> 
#define rep(i,n) for(int i=0;i<(n);i++)
using namespace std;
const int MAX_V=105;
int INF = 1000000000;
struct edge{int to,cost;};
typedef pair <int,int> P;

int V;
vector <edge> G[MAX_V];
int d[MAX_V];

void dijkstra(int s){
  priority_queue<P,vector<P>,greater<P> > que;
  fill(d,d+V,INF);
  d[s]=0;
  que.push(P(0,s));
  
  while(!que.empty()){
    P p = que.top(); que.pop();
    int v= p.second;
    if(d[v]<p.first)continue;
    for(int i=0 ;i<G[v].size();i++){
      edge e =G[v][i];
      if(d[e.to]>d[v]+e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to],e.to));
      }
    }
  }
} 
  
int main(){
  int n;
  cin >> n; V=n;
  rep(i,n){
    int u,k;
    cin >> u >> k;
    rep(j,k){
      int to,cost;
      cin >> to >> cost;
      G[u].push_back(edge{to,cost});
    }
  }     

  dijkstra(0);
  rep(i,n){
    cout << i << ' ' << d[i] << endl;
  }
  return 0;
}
 