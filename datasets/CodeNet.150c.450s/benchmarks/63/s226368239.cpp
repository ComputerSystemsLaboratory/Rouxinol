#include <iostream>
#include <complex>
#include <sstream>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <vector>
#include <set>
#include <limits>
#include <cstdio>
#include <cctype>
#include <cmath>
#include <cstring>
#include <cstdlib>
#include <ctime>
using namespace std;
#define REP(i, j) for(int i = 0; i < (int)(j); ++i)
#define FOR(i, j, k) for(int i = (int)(j); i < (int)(k); ++i)
#define SORT(v) sort((v).begin(), (v).end())
#define REVERSE(v) reverse((v).begin(), (v).end())
//typedef complex<double> P;
typedef pair<int, int> P;
const int MAX_V = 100010;
const int INF = 1e9 + 7;

int dijkstra(const vector< vector<P> > &cost, int s, int t, int V){
  priority_queue<P, vector<P>, greater<P> > open;
  open.push(P(s, 0));
  int closed[MAX_V];
  REP(i, V) closed[i] = INF;
  while(!open.empty()){
    P tmp = open.top(); open.pop();
    int now = tmp.first, c = tmp.second;
    if(closed[now] < c) continue;
    closed[now] = c;
    REP(i, cost[now].size()){
      int next = cost[now][i].first, nc = cost[now][i].second;
      if(nc == INF || c + nc >= closed[next]) continue;
      closed[next] = c + nc;
      open.push(P(next, closed[next]));
    }
  }
  REP(i, V){
    if(closed[i] == INF) cout <<"INF" <<endl;
    else cout <<closed[i] <<endl;
  }
  return closed[t];
}

int main() {
  int V, E, r;
  cin >>V >>E >>r;
  vector< vector<P> > cost(V);
  REP(i, E){
    int f, t, c; cin >>f >>t >>c;
    cost[f].push_back(P(t, c));
  }
  //REP(i, E){
  //  if((int)cost[i].size() <= 0) continue;
  //  SORT(cost[i]);
  //  vector<P> tmp;
  //  int now = cost[i][0].first;
  //  tmp.push_back(cost[i][0]);
  //  FOR(j, 1, cost[i].size()){
  //    if(now == cost[i][j].first) continue;
  //    now = cost[i][j].first;
  //    tmp.push_back(cost[i][j]);
  //  }
  //  cost[i] = tmp;
  //}
  dijkstra(cost, r, -1, V);
  return 0;
}