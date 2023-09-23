//#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <set>
using namespace std;

int R,C;
int a[10][10000];
int ans;
int flg[10];

int count(void) {
  int tmp, res = 0;
  for (int j = 0; j < C; j++) {
    tmp = 0;
    for (int i = 0; i < R; i++) {
      if (flg[i] && !a[i][j] || !flg[i] && a[i][j]) tmp++;
    }
    if (tmp < R - tmp) {res += R - tmp;}
    else {res += tmp;}
  }
  return res;
}

void solve(int idx) {
  int res;
  if (idx == R) {
    res = count();
    if (ans < res) ans = res;
    return;
  }
  flg[idx] = 0;
  solve(idx+1);
  flg[idx] = 1;
  solve(idx+1);
}

int main() {
  while (cin >> R >> C) {
    if (!R && !C) break;
    for (int i = 0; i < R; i++)
      for (int j = 0; j < C; j++) cin >> a[i][j];
    ans = 0;
    solve(0);
    cout << ans << endl;
  }

  return 0;
}