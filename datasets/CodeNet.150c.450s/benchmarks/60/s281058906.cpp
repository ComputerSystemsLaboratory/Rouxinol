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

int main(){
  int n; cin >> n;
  int G[n][n];
  FOR(i,0,n) FOR(j,0,n) G[i][j] = 0;
  FOR(i,0,n){
    int u,k;
    cin >> u >> k;
    u--;
    FOR(j,0,k){
      int v;
      cin >> v;
      v--;
      G[u][v] = 1;
    }
  }
  FOR(i,0,n){
    FOR(j,0,n){
      printf("%d%c", G[i][j], j == n - 1 ? '\n' : ' ');
    }
  }
  return 0;
}