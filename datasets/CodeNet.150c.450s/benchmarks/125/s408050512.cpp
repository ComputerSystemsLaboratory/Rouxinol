#include <bits/stdc++.h>

int d[128];
int f[128];
bool c[128][128];
int n;
int t;
int checked[128];

void dfs(int i) {
  if( checked[i] ) return;
  checked[i] = true;
  t += 1;
  d[i] = t;
  for(int k = 1; k <= n; ++k) {
    if( c[i][k] ) {
      dfs(k);
    }
  }
  t += 1;
  f[i] = t;
  return;
}

int main(void) {

  for(int i = 0; i < 128; ++i) {
    for(int j = 0; j < 128; ++j) {
      c[i][j] = false;
    }
  }

  std::cin >> n;

  int u, k, v;
  for(int i = 0; i < n; ++i) {
    std::cin >> u >> k;
    for(int j = 0; j < k; ++j) {
      std::cin >> v;
      c[u][v] = true;
    }
  }

  for(int i = 1; i <= n; ++i) {
    dfs(i);
  }

  for(int i = 1; i <= n; ++i) {
    std::cout << i << " " << d[i] << " " << f[i] << std::endl;
  }
  return 0;
}