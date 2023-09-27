#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> p, r;


void makeSet(int x){
  p[x] = x;
  r[x] = 0;
}

int findSet(int x){
  if(x != p[x])p[x] = findSet(p[x]);
  return p[x];
}

void link(int x, int y){
  if(r[x] > r[y]) p[y] = x;
  else {
    p[x] = y;
    if(r[x] == r[y]) r[y] = r[y] + 1;
  }
}



void unite(int x, int y){
  link(findSet(x), findSet(y));
}


struct Edge{
  int a, b, cost;

  bool operator<(const Edge& o) const{
    return cost < o.cost;
  }
};


struct Graph{
  int n;
  vector<Edge> es;

  int kruskal(){
    sort(es.begin(), es.end());

    int min_cost = 0;

    for(int i=0; i<es.size(); i++){
      Edge& e = es[i];
      if(!(findSet(e.a)==findSet(e.b))){
	min_cost += e.cost;
	unite(e.a, e.b);
      }
    }

    return min_cost;
  }
};

Edge e;


int main(){

  int V, E, i;
  Graph g;

  cin >> V >> E;

  p.resize(V);
  r.resize(V);

  for(i=0; i<V; i++) makeSet(i);

  for(i=0; i<E; i++){
    cin >> e.a >> e.b >>e.cost;
    g.es.push_back(e);
  }


  cout << g.kruskal() << endl;

  return 0;
}

