#include <iostream>
using namespace std;

int data[100];

int main() {
  
  int n; cin >> n;
  for ( int i = 0; i < n; i++ ) cin >> data[i];
  
  int cnt = 0;
  
  for ( int i = 0; i < n; i++ ) {
    int minj = i;
    for ( int j = i; j < n; j++ ) {
      if ( data[j] < data[minj] ) minj = j;
    }      
      swap( data[i], data[minj] );
      if ( i != minj ) cnt++;
  }

  for ( int i = 0; i < n-1; i++ ) cout << data[i] << " ";
  cout << data[n-1] << endl;
  cout << cnt << endl;
  return 0;
}