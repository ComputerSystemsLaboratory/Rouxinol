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

int H, now[10][5];

int Solve(){
  for (int i = 0; i < H; i++){
    for (int j = 0; j < 5; j++){
      scanf("%d", &now[i][j]);
    }
  }
  int ans = 0;
  while (true){
    int sum = 0;

    for (int i = 0; i < H; i++){
      int cnt = 1;
      for (int j = 1; j < 5; j++){
        if (now[i][j] == now[i][j - 1]) cnt++;
        else{
          if (cnt >= 3) {
            sum += now[i][j - 1] * cnt;
            for (int k = 0; k < cnt; k++){
              now[i][j - 1 - k] = 0;
            }
          }
          cnt = 1;
        }
      }
      if (cnt >= 3) {
        sum += now[i][4] * cnt;
        for (int k = 0; k < cnt; k++){
          now[i][4 - k] = 0;
        }
      }
    }

    if (sum == 0) break;
    ans += sum;

    for (int j = 0; j < 5; j++){
      queue <int> que;
      for (int i = H - 1; i >= 0; i--){
        if (now[i][j] != 0) que.push(now[i][j]);
      }
      
      for (int i = H - 1; i >= 0; i--){
        if (que.empty()) now[i][j] = 0;
        else now[i][j] = que.front(), que.pop();
      }
    }
  }
  
  printf("%d\n", ans);

  return 0;
}

int main(){
  while (cin >> H){
    if (H == 0) return 0;
    Solve();
  }
  
  return 0;
}

