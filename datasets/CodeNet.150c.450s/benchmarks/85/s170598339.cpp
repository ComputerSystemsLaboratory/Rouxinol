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

int N;
ll r[105], c[105], DP[105][105];

ll Calc(int L, int R){
  if (DP[L][R] != 0) return DP[L][R];
  if (L == R) return DP[L][R] = 0;

  ll ans = INF;
  for (int k = L; k < R; k++){
    ll now = r[L] * c[k] * c[R];
    now += Calc(L, k) + Calc(k + 1, R);
    ans = min(now, ans);
  }
  
  return DP[L][R] = ans;
}

int main(){
  cin >> N;
  for (int i = 0; i < N; i++) cin >> r[i] >> c[i]; 
  cout << Calc(0, N - 1) << endl;
  return 0;
}

