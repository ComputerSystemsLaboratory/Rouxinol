#include<bits/stdc++.h>
#define REP(i,n) for(int i = 0;i < (n);i++)
#define P pair<int,int>
#define pb push_back
#define mk make_pair
using namespace std;
const int INF = 1e9;

typedef long long ll;

#define MAX_V 10000

struct edge {
    int to;
    int cost;
};


int V;
vector<edge> G[MAX_V];
int d[MAX_V];
int f[MAX_V];
bool mem[MAX_V];
int DFS(int u,int time){
  mem[u] = true;
  d[u] = time;
  REP(i,G[u].size()){
    
    if(!mem[G[u][i].to]){
      time++;
      time = DFS(G[u][i].to,time);
    }
  }
  time++;
  f[u] = time;
  return time;
}


int main(){
  int E,r;
  cin >> V;
 
  REP(i,MAX_V){
    mem[i] = false;
  }
  REP(i,V){
    int k,u;
    cin >> u;
    cin >> k;
    for(int j = 1;j <= k;j++){
      int f,t,c;
      cin >> t;
      c = 1;
      edge e = {t,c};
      G[u].pb(e);
    }
  }
  int t = 1;
  for(int i = 1;i <= V;i++){
    if(!mem[i]){
      t = DFS(i,t);
      t++;
    }
  }
  for(int i = 1;i <= V;i++){
    cout << i << " " << d[i] << " " << f[i] << endl;;
  }
  
  return 0;
}

