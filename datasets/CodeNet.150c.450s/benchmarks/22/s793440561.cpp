#include <bits/stdc++.h>

using namespace std;

#define MAX_V 1000
#define MAX_E 2000
#define INF 1e9

struct edge{
  int from,to,cost;
};

int V,E,d[MAX_V];
edge es[MAX_E];

bool find_negative_loop(int s){
  for(int i = 0 ; i < V ; i++){
    d[i] = INF;
  }
  d[s] = 0;
  for(int v = 0 ; v < V ; v++){
    bool update = false;
    for(int i = 0 ; i < E ; i++){
      edge e = es[i];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
        d[e.to] = d[e.from] + e.cost;
        if(v == V-1){ return true; }
        update = true;
      }
    }
    if(!update){ break; }
  }
  return false;
}

int main(){
  int r;
  cin >> V >> E >> r;
  for(int i = 0 ; i < E ; i++){
    cin >> es[i].from >> es[i].to >> es[i].cost;
  }
  if(find_negative_loop(r)){
    cout << "NEGATIVE CYCLE" << endl;
  }else{
    for(int i = 0 ; i < V ; i++){
      if(d[i] == INF){
        cout << "INF" << endl;
      }else{
        cout << d[i] << endl;
      }
    }
  }
  return 0;
}