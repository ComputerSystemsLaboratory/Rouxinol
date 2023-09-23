#include <bits/stdc++.h>
using namespace std;

int num[101];

int main() {
  int n;
  while ( cin >> n ) num[n]++;
  int maxn = 0;
  for ( int i = 1; i < 101; i++ ) maxn = max(maxn,num[i]);
  for ( int i = 1; i < 101; i++ ) {
    if ( num[i] == maxn ) cout << i << endl;
  }

  return 0;
}