// #include <algorithm>
#include <stdio.h>
#include <vector> 
#include <math.h>
#include <map>
using namespace std;

struct uv_t{
  int u;
  int v;
};

vector<int> Parent;
vector<int> Rank;
multimap<int, uv_t> Edge; // Key: weight

int findSet(int x);

void makeSet(int x){
  Parent.push_back(x);
  Rank.push_back(0);
}
int findSet(int x){
  if( x != Parent[x] ){
    int r = findSet(Parent[x]);
    Parent[x] = r;
  }
  return Parent[x];
}
void link(int x, int y){
  if( Rank[x] > Rank[y] ){
    Parent[y] = x;
  }else{
    Parent[x] = y;
    if( Rank[x] == Rank[y] ){
      Rank[y] = Rank[y] + 1;
    }
  }
}

void unite(int x, int y){
  link(findSet(x), findSet(y));
}

int main(){ // P.231 Kruskal
  int V, E;
  scanf("%d %d" ,&V ,&E);
  for( int i = 0 ; i < V ; i++ ){
    makeSet(i);
  }
  for( int i = 0 ; i < E ; i++ ){
    int s, t, w;
    scanf("%d %d %d" ,&s ,&t ,&w);
    uv_t uv = {s ,t};
    Edge.insert(make_pair(w, uv));
  }

  int accw = 0; // accumulated Weight
  for(const auto& e : Edge){
    int weight = e.first;
    uv_t node = e.second;
    if(findSet(node.u) != findSet(node.v)){
      accw += weight;
      unite(node.u ,node.v);
    }
  }

  printf("%d\n" ,accw);
  return 0;
}

