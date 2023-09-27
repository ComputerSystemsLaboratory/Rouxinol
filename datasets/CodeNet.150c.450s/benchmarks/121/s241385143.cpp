#if __cplusplus >= 201103L
#include <bits/stdc++.h>
#endif
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;
const int N = 105;
const int M = 1000000007;

int h, w;
char mp[N][N];
int mov[4][2] = { -1, 0, 0, -1, 1, 0, 0, 1};

inline bool judge(int x, int y) {
  return x >= 0 && x < h && y >= 0 && y < w;
}

void dfs(int x, int y, char c) {
  mp[x][y] = '.';
  for (int i = 0; i < 4; i++) {
    int xx = x + mov[i][0], yy = y + mov[i][1];
    if (judge(xx, yy) && mp[xx][yy] == c) { dfs(xx, yy, c); }
  }
}

int main() {
  while (scanf("%d%d", &h, &w), h) {
    for (int i = 0; i < h; i++) {
      scanf("%s", mp[i]);
    }
    int ans = 0;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (mp[i][j] != '.') { dfs(i, j, mp[i][j]); ans++; }
      }
    }
    printf("%d\n", ans);
  }
}