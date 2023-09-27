#include <vector>
#include <iostream>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <stack>
#include <queue>
#include <list>
#include <functional>

const int INF = 1001001000;
const int MOD = (int)1e9 + 7;

using ll = long long;

using namespace std;

typedef pair<int,int> P;

struct edge{
  int to;
  int cost;
};

int V,E,r;
vector<edge> G[100000];
int d[100000];


int main(){

  cin >> V >> E >> r;
  for( int i = 0; i < E; ++i){
    int a,b,c;
    cin >> a >> b >> c;
    G[a].push_back(edge{b,c});
  }
  fill( d, d+V, INF);
  d[r] = 0;
  priority_queue< P, vector<P>, greater<P> > q;
  q.push( P(d[r],r));
  while(!q.empty()){
    P p = q.top();q.pop();
    int from = p.second;
    int cost = p.first;
    for( int i = 0; i < G[from].size(); ++i){
      edge e = G[from][i];
      int next = e.to;
      int newCost = e.cost + cost;
      if( d[next] > newCost){
        d[next] = newCost;
        q.push( P(newCost, next));
      }
    }
  }

  for( int i = 0; i <V; ++i){
    if( d[i] == INF ) cout << "INF" << endl;
    else cout << d[i] << endl;
  }
}