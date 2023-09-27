#include <iostream>
#include <algorithm>
#include <numeric>

#include <queue>
#include <vector>
using namespace std;
 
#define numof(array)  (sizeof (array) / sizeof *(array))

const int INF = 1000000007;
const int MAX_V = 1000007;
 
typedef long long ll;
typedef pair<int, int> P; //first: ???????????¢???second: ??????????????? 

struct edge{
    int to;
    int cost;
};

int V=0;
vector<edge > G[MAX_V];
int d[MAX_V];

void dijkstra(int s){
  priority_queue<P, vector<P>, greater<P> > qu;
  fill(d, d + V, INF);
  d[s] = 0;
  qu.push(P(0,s));
  while(!qu.empty()){
    P p = qu.top(); qu.pop();
    int v = p.second;    
    if(d[v] < p.first) continue;
    for(int i = 0; i < G[v].size(); i++){
      edge e = G[v][i];
      if(d[e.to] > d[v] + e.cost){
	d[e.to] = d[v] + e.cost;
	qu.push(P( d[e.to], e.to ));
      }
    }
  }
}


int main(){

  int E,r;
  cin >> V >> E >> r;
  for(int i = 0 ; i < E; i++){
    int s , t , d;
    cin >> s >> t >> d;
    edge e = {t,d};
    //    e.to = t; e.cost = d;
    G[s].push_back(e);
  }
  dijkstra(r);
  for(int i = 0; i < V ; i++){
    if (d[i] == INF) cout << "INF" << endl;
    else cout << d[i] << endl;
  }

  return 0;
}