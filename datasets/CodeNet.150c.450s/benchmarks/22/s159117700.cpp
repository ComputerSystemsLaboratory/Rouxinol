#include <iostream>
#include <string>
#include <algorithm>
#include <functional>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <cstdio>
#include <cmath>
#include <tuple>
#include <iomanip>
#include <numeric>
#include <unordered_map>
#include <sstream>   
#include<limits.h>
using namespace std;
#define i64  long long
#define lint long long

#define I32_MAX 2147483647
#define I64_MAX 9223372036854775807

template< typename T >
struct edge {
  int src, to;
  T cost;

  edge(int to, T cost) : src(-1), to(to), cost(cost) {}

  edge(int src, int to, T cost) : src(src), to(to), cost(cost) {}

  edge &operator=(const int &x) {
    to = x;
    return *this;
  }

  operator int() const { return to; }
};

template< typename T >
using Edges = vector< edge< T > >;
template< typename T >
using WeightedGraph = vector< Edges< T > >;
using UnWeightedGraph = vector< vector< int > >;
template< typename T >
using Matrix = vector< vector< T > >;

vector<lint> bellman_ford(Edges<int> & edges,int V,int S)
{
  vector<lint> path(V,I64_MAX);
  path[S] = 0;

  for (int i = 0; i < V; i++)
  {
    for(auto &e :edges)
    {
      if(path[e.src] == I64_MAX) continue;
      path[e.to] = min(path[e.to],path[e.src] + e.cost);
    }
  }

  for(auto &e:edges)
  {
    if(path[e.src] == I64_MAX)continue;
    if(path[e.src] + e.cost < path[e.to]) return vector<lint>();
  }
  
  return path;
}

void solve()
{
  int V,E,r;
  cin>>V>>E>>r;
  WeightedGraph<lint> G(V);

  Edges<int> es;
  for (int i = 0; i < E; i++)
  {
    int a,b,c;
    cin>>a>>b>>c;
    es.emplace_back(a,b,c);
  }

  vector<lint> path = bellman_ford(es,V,r);
  if(path.empty()) cout<<"NEGATIVE CYCLE"<<endl;
  for(auto & p :path)
  {
    if(p == I64_MAX) cout<<"INF"<<endl;
    else cout<<p<<endl;
  }
  
  

  return;
}

int main(int argc, const char *argv[])
{

  solve();

  return 0;
}

