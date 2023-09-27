//#include <bits/stdc++.h>
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cmath>
#include <algorithm>
#include <map>
#include <iomanip>
#include <stdlib.h>
#include <stdio.h>
#include <queue>
#include <deque>
#include <set>
#include <stack>
#include <time.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> Pii;
typedef pair<int, ll> Pil;
typedef pair<ll, ll> Pll;
typedef pair<ll, int> Pli;

#define fi first
#define se second
#define mp make_pair
 
const ll MOD = 1e9 + 7;
const ll MOD2 = 998244353;
const ll INF = 1ll << 60;
const double PI = 2 * asin(1);

void yes() {printf("yes\n");}
void no() {printf("no\n");}
void Yes() {printf("Yes\n");}
void No() {printf("No\n");}
void YES() {printf("YES\n");}
void NO() {printf("NO\n");}

int V, E;
ll Dist[105][105];

int Display(){
  for (int i = 0; i < V; i++){
    for (int j = 0; j < V; j++){
      if (Dist[i][j] == 1e16) printf("INF");
      else printf("%lld", Dist[i][j]);
      if (j == V - 1) printf("\n");
      else printf(" ");
    }
  }
  return 0;
}

int Solve(){
  for (int k = 0; k < V; k++){
    for (int i = 0; i < V; i++){
      for (int j = 0; j < V; j++){
        if (Dist[i][k] == 1e16 || Dist[k][j] == 1e16) continue;
        Dist[i][j] = min(Dist[i][j], Dist[i][k] + Dist[k][j]);
      }
    }
  }

  for (int i = 0; i < V; i++){
    if (Dist[i][i] != 0){
      printf("NEGATIVE CYCLE\n");
      return 0;
    }
  }
  Display();
  return 0;
}

int main(){
  scanf("%d%d", &V, &E);
  fill((ll*)Dist, (ll*)(Dist + V), 1e16);
  for (int i = 0; i < V; i++) Dist[i][i] = 0;

  for (int i = 0; i < E; i++){
    int S, T; ll D;
    scanf("%d%d%lld", &S, &T, &D);
    Dist[S][T] = D;
  }
  Solve();

  return 0;
}

