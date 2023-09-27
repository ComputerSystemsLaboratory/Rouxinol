#include <iostream>
#include <vector>
#include <climits>
#define INF (LLONG_MAX>>2)
using namespace std;

typedef long long ll;

class edge{
public:
  int to;
  int weight;
  edge(int to, int weight){
    this->to = to;
    this->weight = weight;
  }
};

void bellmanFord(int, int, vector<edge>*);

int main(){
  int v, e, r;
  cin >> v >> e >> r;

  vector<edge> graph[v];

  int from, to, weight;
  for(int i=0; i<e; i++){
    cin >> from >> to >> weight;
    graph[from].push_back(edge(to, weight));
  }

  bellmanFord(r, v, graph);

  return 0;
}

void bellmanFord(int start, int n, vector<edge>* graph){
  ll d[n];
  for(int i=0; i<n; i++) d[i] = INF;
  d[start] = 0;

  bool neg=false;
  for(int i=0; i<n; i++){
    for(int v=0; v<n; v++){
      for(int k=0; k<graph[v].size(); k++){
        edge e = graph[v][k];
        if(d[v]!=INF && d[e.to] > d[v]+e.weight){
          d[e.to] = d[v]+e.weight;
          if(i==n-1) neg=true;
        }
      }
    }
  }

  if(neg) cout << "NEGATIVE CYCLE" << endl;
  else{
    for(int i=0; i<n; i++){
      if(d[i]==INF) cout << "INF" << endl;
      else cout << d[i] << endl;
    }
  }
}

