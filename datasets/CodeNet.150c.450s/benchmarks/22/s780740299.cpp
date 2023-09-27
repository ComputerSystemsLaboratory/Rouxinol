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
const int INF = 1e9 + 7;
const int MAX_V = 1005;
const int MAX_E = 2005;

struct edge { int from, to, cost; };
edge es[MAX_E];
int d[MAX_V], V, E;

bool bellman_ford(int s){
  REP(i, V) d[i] = INF;
  d[s] = 0;
  REP(i, V + 1){
    bool update = false;
    REP(j, E){
      edge e = es[j];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost){
        d[e.to] = d[e.from] + e.cost;
        if(i == V) return false;
        update = true;
      }
    }
  }
  return true;
}

int main() {
  int r;
  cin >>V >>E >>r;
  REP(i, E) cin >>es[i].from >>es[i].to >>es[i].cost;
  bool is_end = bellman_ford(r);
  if(!is_end) cout <<"NEGATIVE CYCLE" <<endl;
  else{
    REP(i, V){
      if(d[i] == INF) cout <<"INF" <<endl;
      else cout <<d[i] <<endl;
    }
  }
  return 0;
}