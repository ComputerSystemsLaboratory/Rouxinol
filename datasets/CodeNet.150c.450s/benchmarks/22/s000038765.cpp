#include <vector>
#include <list>
#include <map>
#include <set>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <algorithm>
#include <functional>
#include <numeric>
#include <utility>
#include <fstream>
#include <sstream>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <string>
#include <cstring>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;
typedef long long ll;
#define REP(i, N) for (int i = 0; i < (int)N; i++)
const int INF = 1e8;

struct edge { int from, to, cost; };

int main () {
  int V, E, r;
  cin >> V >> E >> r;
  edge edges[E];
  int d[V];

  REP(i,E){
    edge e;
    cin >> e.from >> e.to >> e.cost;
    edges[i] = e;
  }

  REP(i,V)d[i] = INF;
  d[r] = 0;

  bool updated = true;
  int count = 0;
  while(updated) {
    updated = false;
    REP(i,E) {
       edge e = edges[i];
      if(d[e.from] != INF && d[e.to] > d[e.from] + e.cost) {
        d[e.to] = d[e.from] + e.cost;
        updated = true;
      }
    }
    count++;
    if(updated && count == V) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }

  REP(i,V) {
    if(d[i] == INF) {
      cout << "INF" << endl;
    } else {
      cout << d[i] << endl;
    }
  }
  return 0;
}