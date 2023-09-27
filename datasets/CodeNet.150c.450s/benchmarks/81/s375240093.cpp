//----------------------------------------------------
#include<bits/stdc++.h>
using namespace std;
typedef pair<int64_t,int64_t> pii;
typedef int64_t myint;

const myint INF=INT64_MAX;
const double EPS=1e-10;

void init(){cin.tie(0);ios::sync_with_stdio(false);}
//----------------------------------------------------

typedef struct edge{
  myint to;
  myint cost;
}Edge;

int V=10;
vector<vector<Edge>> G(10);
myint d[10][10];

void dijkstra(int s){
  priority_queue<pii,vector<pii>,greater<pii>> que;

  for(int i=0;i<V;i++){
    d[s][i]=INF;
  }

  d[s][s]=0;
  que.push(pii(0,s));

  while(!que.empty()){
    pii p = que.top();
    que.pop();

    int v=p.second;
    if(d[s][v] < p.first) continue;
    for(int i=0;i<G[v].size();i++){
      Edge e = G[v][i];

      if(d[s][e.to]>d[s][v]+e.cost){
        d[s][e.to]=d[s][v]+e.cost;
        que.push(pii(d[s][e.to],e.to));
      }
    }
  }
}

pii solve(myint n){
  for(int i=0;i<V;i++){
    vector<Edge>().swap(G[i]);
  }

  for(int i=0;i<n;i++){
    int a,b,c;
    cin >> a >> b >> c;
    G[a].push_back({b,c});
    G[b].push_back({a,c});
  }

  for(int i=0;i<V;i++){
    dijkstra(i);
  }

  vector<myint> cost(V);
  for(int i=0;i<V;i++){
    cost[i]=INF;
  }

  bool isExist;
  for(int i=0;i<V;i++){
    isExist=false;
    for(int j=0;j<V;j++){
      if(d[i][j]!=INF && i!=j){
        cost[i]-=d[i][j];
          isExist=true;
      }
    }
    if(isExist){
      cost[i]=INF-cost[i];
    }
  }

  pii best = pii(0,cost[0]);
  for(int i=1;i<V;i++){
    if(best.second > cost[i]){
      best = pii(i,cost[i]);
    }
  }
  return best;
}

int main(){
  init();

  myint n;
  while(cin >> n,n!=0){
    pii best = solve(n);
    cout << best.first << " " << best.second << endl;
  }
  return 0;
}