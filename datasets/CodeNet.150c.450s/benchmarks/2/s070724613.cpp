#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &a, int p, int r) {
  int x = a[r];
  int i = p-1;
  for ( int j = 0; j < r; j++ ) {
    if ( a[j] <= x ) {
      i++;
      swap(a[i], a[j]);
    }    
  }

  swap(a[i+1], a[r]);
  return i+1;
}

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for ( int i = 0; i < n; i++ ) cin >> a[i];

  int p = partition(a, 0, n-1);
  for ( int i = 0; i < n; i++ ) {
    if ( i ) cout << " ";
    if ( i == p ) cout << "[" << a[i] << "]";
    else cout << a[i];
  }
  cout << endl;
  
  return 0;
}

