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
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
typedef long long ll;

bool visited[111];
int d[111];
vector<vector<int> > g(111);
typedef pair<int, int> P;

int main(){
  int n; cin >> n;
  FOR(i,0,n){
    int u, k; cin >> u >> k;
    FOR(j,0,k){
      int v;
      cin >> v;
      g[u].push_back(v);
    }
  }
  FOR(i,0,n+1) visited[i] = false;
  FOR(i,0,n+1) d[i] = -1;
  queue<P> que;
  que.push(P(1,0));
  visited[1] = true;
  while(!que.empty()){
    P p = que.front();que.pop();
    int u = p.first;
    d[u] = p.second;
    for(auto &v : g[u]){
      if(!visited[v]){
        que.push(P(v, p.second + 1));
        visited[v] = true;
      }
    }
  }
  FOR(i,1,n+1){
    cout << i << " " << d[i] << endl;
  }
  return 0;
}