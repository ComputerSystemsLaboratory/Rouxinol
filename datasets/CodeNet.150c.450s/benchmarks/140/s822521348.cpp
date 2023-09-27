#include <iostream>
#include <algorithm>
#include <vector>
#define MAX 10000
#define INFTY 1 << 29
 
using namespace std;
vector<int> par,rank1;

struct Edge{
  int source, target, cost;

  Edge(int source, int target, int cost) : source(source), target(target), cost(cost) {}
  
  /*bool operator < (const Edge &e) const {
    return cost < e.cost;
  }*/
};
 
void init_UnionFind(int v){
  par = vector<int>(v);
  rank1 = vector<int>(v);
  for(int i = 0 ; i < v; i++){
    par[i] = i; 
    rank1[i] = 0;
  }
}
 
int find(int x){ 
  if(par[x] == x) return x; 
  return par[x] = find(par[x]);
}
 
void unite(int x,int y){ 
  x = find(x); y = find(y);
  if(x == y) return;
   
  if(rank1[x] < rank1[y]){
    par[x] = y;
  } else {
    par[y] = x;
    if(rank1[x] == rank1[y]) rank1[x]++;
  }
}
 
bool same(int x,int y){
  return find(x) == find(y);
}

bool comp(const Edge& e1, const Edge& e2){
  return e1.cost < e2.cost;
}

int kruskal(int V, vector<Edge> e){
  int ansCost = 0;
  //sort(e.begin(), e.end());
  sort(e.begin(), e.end(), comp);

  init_UnionFind(V);
  for(int i = 0; i < e.size(); i++){
    Edge edge = e[i];
    if(!same(edge.source, edge.target)){
      ansCost += edge.cost;
      unite(edge.source, edge.target);
    }
  }
  return ansCost;
}

int main(){
  int V, E, source, target, cost;
  vector<Edge> e;

  cin >> V >> E;

  for(int i = 0; i < E; i++){
    cin >> source >> target >> cost;
    e.push_back(Edge(source, target, cost));
  }

  cout << kruskal(V,e) << endl;
  return 0;
}
