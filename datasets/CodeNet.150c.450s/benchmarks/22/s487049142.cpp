#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <bitset>
#include <map>
#include <tuple>
#include <unordered_set>
#include <unordered_map>
#include <list>
#include <numeric>
#include <utility>
#include <iterator>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <climits>
#include <ctime>
#include <cassert>
#include <random>
#include <cstring>

#define rep(i,n) for(int i=0;i<int(n);i++)
#define all(x) (x).begin(),x.end()
#define pb push_back

using namespace std;
using ll = long long;

const ll mod = 1000000007;
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
int ddx[8]={-1,-1,0,1,1,1,0,-1};
int ddy[8]={0,1,1,1,0,-1,-1,-1};
bool debug=false;

/*---------------------------------------------------*/

const int INF = 100000000;
int dist[1000005];
struct Edge { int from; int to; int cost; };

bool shortest_path(int s, vector<Edge>& edge, int V, int E) {
  for(int i = 0; i < V; i++) dist[i] = INF;
  dist[s] = 0;
  int cnt = 0;
  while(true) {
    bool update = false;
    for(Edge& e : edge) {
      if(dist[e.from] != INF && dist[e.from] + e.cost < dist[e.to]) {
	dist[e.to] = dist[e.from] + e.cost;
	update = true;
      }
    }
    if(!update) break;
    cnt++;
    if(V + 1 < cnt) return true;
  }
  
  return false;
}

int main(){
  int V, E, r;
  cin >> V >> E >> r;
  vector<Edge> edge(E);
  for(int i = 0; i < E; i++) {
    int from, to, cost;
    cin >> from >> to >> cost;
    edge[i] = { from, to, cost };
  }
  if(shortest_path(r, edge, V, E)) {
    cout << "NEGATIVE CYCLE" << endl;
    return 0;
  }
  
  for(int i = 0; i < V; i++) {
    if(dist[i] == INF) cout << "INF" << endl;
    else cout << dist[i] << endl;
  }
  return 0;
}

