#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <cmath>
#include <map>
#include <queue>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ll long long
#define INF 1e+18

int main() {
  int v, e; cin >> v >> e;
  vector<vector<ll>> dist(v, vector<ll>(v, INF));
  rep(i, v) {
    dist[i][i] = 0;
  }
  rep(i, e) {
    int s, t, d; cin >> s >> t >> d;
    dist[s][t] = d;
  }
  

  rep(k, v) {
    rep(i, v) {
      rep(j, v) {
        if(dist[i][k] != INF && dist[k][j] != INF) {
          dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
        }
      }
    }
  }
  rep(i, v) {
    if(dist[i][i] < 0) {
      cout << "NEGATIVE CYCLE" << endl;
      return 0;
    }
  }
  rep(i, v) {
    rep(j, v) {
      if(dist[i][j] == INF) {cout << "INF";}
      else { cout << dist[i][j];}
      if(j == v-1) {cout << endl;}
      else {cout << " ";}
    }
  }
  return 0;
}
