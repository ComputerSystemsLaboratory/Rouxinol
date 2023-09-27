#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;
class UnionFind{
  vector<int> node;
 public:
  UnionFind(int n):node(n){
    for(int i = 0;i < n;i++){
      node[i] = i;
    }
  }
  int root(int x){
    if(x == node[x])return x;
    return root(node[x]);
  }
  void merge(int x,int y){
    node[root(x)] = root(y);
  }
};
struct edge{
  int x,y,w;
};
bool operator<(edge e1,edge e2){
  return e1.w < e2.w;
}
int main(){
  int n;
  cin >> n;
  vector<edge> edges;
  UnionFind u(n);
  for(int i = 0;i < n;i++){
    for(int j = 0;j < n;j++){
      int x;
      cin >> x;
      if(x >= 0){
        edges.push_back({i,j,x});
      }
    }
  }
  int weight = 0;
  sort(edges.begin(),edges.end());
  for(auto &e:edges){
    if(u.root(e.x) == u.root(e.y))continue;
    u.merge(e.x,e.y);
    weight += e.w;
  }
  cout << weight << endl;
}