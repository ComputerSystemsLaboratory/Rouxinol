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

int N, Count[86401], h, m, s;

int Solve(){
  fill(Count, Count + 86400, 0);
  for (int i = 0; i < N; i++){
    scanf("%d:%d:%d", &h, &m, &s);
    int now = h * 3600 + m * 60 + s;
    Count[now]++;
    scanf("%d:%d:%d", &h, &m, &s);
    now = h * 3600 + m * 60 + s;
    Count[now]--;
  }

  int ans = Count[0];
  for (int i = 1; i < 86400; i++){
    Count[i] += Count[i - 1];
    ans = max(ans, Count[i]);
  }
  printf("%d\n", ans);

  return 0;
}

int main(){
  while (cin >> N){
    if (N == 0) return 0;
    else Solve();
  }

  return 0;
}

