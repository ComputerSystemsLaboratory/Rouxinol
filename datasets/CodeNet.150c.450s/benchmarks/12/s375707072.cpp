#include <bits/stdc++.h>
using namespace std;

int main() {
  int H;
  cin >> H;

  vector<int> dat(H);
  for ( int i = 0; i < H; i++ ) cin >> dat[i];

  for ( int i = 0; i < H; i++ ) {
    printf("node %d: key = %d, ", i+1, dat[i]);
    if ( i ) printf("parent key = %d, ", dat[(i-1)/2]);
    if ( i*2+1 < H ) printf("left key = %d, ", dat[i*2+1]);
    if ( i*2+2 < H ) printf("right key = %d, ", dat[i*2+2]);
    cout << endl;
  }
  
  return 0;
}

