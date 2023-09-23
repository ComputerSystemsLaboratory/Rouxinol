#include <iostream>
using namespace std ;
int s[15], h[15], c[15], d[15] ;
int main () {
  char op ;
  int a ;
  int n ;
  cin >> n ;
  for ( int i = 0 ; i < n ; i++ ) {
    cin >> op >> a ;
    if ( op == 'S') {
       s[a] = 1 ;
    } else if ( op == 'H') {
       h[a] = 1 ;
    } else if ( op == 'C') {
       c[a] = 1 ;
    } else if ( op == 'D') {
       d[a] = 1 ;
    }
  }
  for ( int i = 1 ; i < 14 ; i++) {
    if ( s[i] == 0 ) {
      cout << 'S' << ' ' << i << endl ;
      }
  }
  for ( int i = 1 ; i < 14 ; i++) {
    if ( h[i] == 0 ) {
      cout << 'H' << ' ' << i << endl ;
      }
  }
    for ( int i = 1 ; i < 14 ; i++) {
    if ( c[i] == 0 ) {
      cout << 'C' << ' ' << i << endl ;
      }
    }  
    for ( int i = 1 ; i < 14 ; i++) {
    if ( d[i] == 0 ) {
      cout << 'D' << ' ' << i << endl ;
      }
    }
} 
