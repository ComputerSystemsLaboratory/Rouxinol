#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;
class UnionFind{
 public:
  vector<int> nodes;
  UnionFind(int n):nodes(n){
    for(int i = 0;i < n;i++){
      nodes[i] = i;
    }
  }
  int root(int x){
    if(x == nodes[x])return x;
    return nodes[x] = root(nodes[x]);
  }
  void merge(int x,int y){
    nodes[root(x)] = root(y);
  }
  bool sameUnion(int x,int y){
    return root(x) == root(y);
  }
  
};
struct edge{
  edge(int x,int y):x(x),y(y){}
  int x,y;
};
bool operator<(edge e1,edge e2){
  if(e1.x == e2.x)return e1.y < e2.y;
  return e1.x < e2.x;
}
int main(){
  int v,e;
  cin >> v >> e;
  vector<pair<int,edge> > edges;
  UnionFind u(v);
  for(int i = 0;i < e;i++){
    int s,t,w;
    cin >> s >> t >> w;
    edges.push_back(make_pair(w,edge(s,t)));
  }
  sort(edges.begin(),edges.end());
  int weight = 0;
  for(int i = 0;i < edges.size();i++){
    int w = edges[i].first;
    edge e = edges[i].second;
    if(u.root(e.x) != u.root(e.y)){
      weight += w;
      u.merge(e.x,e.y);
    }
  }
  cout << weight << endl;
}