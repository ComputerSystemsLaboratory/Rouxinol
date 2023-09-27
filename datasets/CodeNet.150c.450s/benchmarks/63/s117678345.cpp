#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
#define MV 100000
#define INF 1e9

struct edge{int to,cost; };
vector <edge> G[MV];
bool used[MV];
int V,E;
int d[MV+1];

void bellmanford(int s){
  fill(d,d+MV,INF);
  d[s] = 0;
  int c = 0;
  bool upd = false;
  while(true){
    upd = false;
    for(int i = 0;i < V;i++){
      for(int j = 0;j < G[i].size();j++){
	edge e = G[i][j];
	if(d[i] != INF && d[e.to] > d[i] + e.cost){
	  d[e.to] = d[i] + e.cost;
	  upd = true;
	}
      }
    }
    if(!upd)
      break;
    if(c == V-1)
      return;
    c++;
  }
}

int main(){
  d[MV] = INF+10;
  int first;
  
  cin >> V >> E >> first;
  for(int i = 0;i < E;i++){
    int f,t;
    edge e;
    cin >> f >> e.to >> e.cost;
    G[f].push_back(e);
    t = e.to;
    
    //e.to = f;
    //G[t].push_back(e);
  }

  
  bellmanford(first);

  for(int i = 0;i < V;i++){
    if(d[i] == INF){
      cout << "INF" << endl;
    }
    else{
      cout << d[i] << endl;
    }
  }
  
}