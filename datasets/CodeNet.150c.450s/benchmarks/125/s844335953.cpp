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

int d[111], f[111];
bool visited[111];
vector<vector<int> > g(111);
int t;
void dfs(int x){
  t++;
  d[x] = t;
  visited[x] = true;
  for(auto &u : g[x]){
    if(!visited[u]){
      dfs(u);
    }
  }
  t++;
  f[x] = t;
}

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
  t = 0;
  FOR(i,1,n+1){
    if(!visited[i]) dfs(i);
  }

  FOR(i,1,n+1){
    printf("%d %d %d\n", i, d[i], f[i]);
  }
  return 0;
}