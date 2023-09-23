#include<iostream>
using namespace std;

int main(){
  int n, m, f, r;
  char G[10000] = {};

  for( int i = 0; 1; i++) {
    cin >> m >> f >> r;
    if( m == -1 && f == -1 && r == -1) break;
    n = i + 1;

    if( m == -1 || f == -1) {
      G[i] = 'F';
    } else if( m + f >= 80) {
      G[i] = 'A';
    } else if( m + f >= 65) {
      G[i] = 'B';
    } else if( m + f >= 50) {
      G[i] = 'C';
    } else if( m + f >= 30) {
      if( r >= 50) G[i] = 'C';
      else G[i] = 'D';
    } else{
      G[i] = 'F';
    }
  }

  for( int j = 0; j < n; j++) {
    cout << G[j] << endl;
  }

  return 0;
}