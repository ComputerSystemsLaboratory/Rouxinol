#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;
#define MV 10000
#define INF 1e9

struct edge{int to,cost;};
vector <edge> G[MV];
bool used[MV];
int V,E;
int d[MV];
int prim(){
  
  for(int i = 0;i < V;i++){
    d[i] = INF;
    used[i] = false;
  }
  d[0] = 0;
  used[0] = true;
  
  for(int i = 0;i < G[0].size();i++)
    d[G[0][i].to] = G[0][i].cost;

  int num = 0;

  while(true){
    int m = -1;
    for(int i = 0;i < V;i++){
      if(used[i] == false && (m == -1 || d[m] > d[i]))
	m = i;
    }
    if (m == -1)
      break;
    used[m] = true;
    num += d[m];
    for(int i = 0;i < G[m].size();i++)
      d[G[m][i].to] = min(d[G[m][i].to],G[m][i].cost);
  }
  return num;
}

int main(){
  int first;
  cin >> V >> E;
  for(int i = 0;i < E;i++){
    int f,t;
    edge e;
    cin >> f >> e.to >> e.cost;
    G[f].push_back(e);
    /*
      G[f]??????f????????§????????????????´???????????????????
     */
    t = e.to;
    
    e.to = f;
    G[t].push_back(e);
  }

  int fl = prim();
  cout << fl << endl;
  
  
}