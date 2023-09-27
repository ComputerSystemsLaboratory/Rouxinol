#include <iostream>
#include <cstdio>
using namespace std;

#define N 100

int main() {
  int n;
  cin >> n;

  int G[N + 1][N + 1];
  for ( int i = 0; i <= n; i++ ) {
    for ( int j = 0; j <= n; j++ ) {
      G[i][j] = 0;
    }
  }

  for ( int i = 1; i <= n; i++ ) {
    int a, b;
    cin >> a >> b;
    for ( int j = 1; j <= b; j++ ) {
      int c;
      cin >> c;
      G[a][c] = 1;
    }
  }

  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      if ( j > 1 ) printf(" ");
      printf("%d", G[i][j]);
    }
    printf("\n");
  }

  return 0;
}