#include <iostream>
using namespace std;

#define MAX 100

int G[MAX + 1][MAX + 1];

int main() {
  int n;
  cin >> n;

  for ( int i = 1; i <= n; i++ ) {
    int m; cin >> m;
    int n; cin >> n;
    for ( int j = 1; j <= n; j++ ) {
      int k; cin >> k;
      G[i][k] = 1;
    }
  }

  for ( int i = 1; i <= n; i++ ) {
    for ( int j = 1; j <= n; j++ ) {
      if ( j != 1 ) cout << " ";
      cout << G[i][j];
    }
    cout << endl;
  }

  return 0;
}