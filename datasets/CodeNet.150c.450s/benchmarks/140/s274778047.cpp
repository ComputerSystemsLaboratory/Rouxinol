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

int V, E, S, T; ll W, ans;
vector <Pli> Graph[10005];
bool visited[10005];

int main(){
  scanf("%d%d", &V, &E);
  for (int i = 0; i < E; i++){
    scanf("%d%d%lld", &S, &T, &W);
    Graph[S].push_back(mp(W, T));
    Graph[T].push_back(mp(W, S));
  }
  
  visited[0] = true;
  priority_queue <Pli, vector<Pli>, greater<Pli> > que;
  for (int i = 0; i < Graph[0].size(); i++) que.push(Graph[0][i]);

  while (!que.empty()){
    Pli Q = que.top(); que.pop();
    if (visited[Q.se] == true) continue;
    ans += Q.fi;
    visited[Q.se] = true;
    for (int i = 0; i < Graph[Q.se].size(); i++){
      Pli next = Graph[Q.se][i];
      if (visited[next.se]) continue;
      que.push(next);
    }
  }
  cout << ans << endl;

  return 0;
}

