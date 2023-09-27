#include <bits/stdc++.h>

int par[12345];

void Init() {
  for(int i = 0; i < 12345; ++i) {
    par[i] = i;
  }
}

int Find(int x) {
  if( par[x] == x ) {
    return x;
  }
  else {
    return par[x] = Find(par[x]);
  }
}

void Unite(int x, int y) {
  x = Find(x);
  y = Find(y);
  if( x == y ) return;
  if( rand() & 0x01 ) {
    par[x] = y;
  }
  else {
    par[y] = x;
  }
}

bool Same(int x, int y) {
  return Find(x) == Find(y);
}

int main() {
  int n, q;
  scanf("%d %d", &n, &q);
  Init();
  for(int i = 0; i < q; ++i) {
    int c, x, y;
    scanf("%d %d %d", &c, &x, &y);
    if( c == 0 ) {
      Unite(x, y);
    }
    else {
      printf("%d\n", Same(x, y) ? 1 : 0);
    }
  }
  
  return 0;
}