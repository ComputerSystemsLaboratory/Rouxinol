#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
#include <deque>
#include <iomanip>
#include <limits>
#include <fstream>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;
const int inf = 1e9;
// ダイクストラO(elogv)
struct edge{
  int to, cost;
  edge(int t, int c) {
    to = t, cost = c;
  }
};
typedef pair<int, int> P;
int N;
vector<edge> G[111];
int d[111];
void dijkstra(int s){
  priority_queue<P, vector<P>, greater<P> >que;
  FOR(i,1,N+1) d[i] = inf;
  d[s] = 0;
  que.push(P(0, s));
  while(!que.empty()){
    P p = que.top(); que.pop();
    int v = p.second;
    if(d[v] < p.first) continue;
    for(auto &e : G[v]){
      if(d[e.to] > d[v] + e.cost){
        d[e.to] = d[v] + e.cost;
        que.push(P(d[e.to], e.to));
      }
    }
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  cin>>N;
  FOR(i,0,N){
    int u, k;
    cin >> u >> k;
    FOR(j,0,k){
      int v, c;
      cin >> v >> c;
      G[u].push_back(edge(v, c));
    }
  }
  dijkstra(0);
  FOR(i,0,N){
    cout << i << " " << d[i] << endl;
  }
}
