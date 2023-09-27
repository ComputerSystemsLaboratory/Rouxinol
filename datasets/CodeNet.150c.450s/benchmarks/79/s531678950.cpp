#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n, r;
  while( cin >> n >> r, n && r ) {
    int card[51];
    for(int i=n-1; i>=0; i--) card[i] = n-i-1;

    while( r-- ) {
      int p, c;
      int tmp[51];
      cin >> p >> c;
      for(int i=0; i<n; i++) tmp[i] = card[i];

      for(int i=0; i<c; i++) card[i] = tmp[i+p-1];
      for(int i=c; i<c+p-1; i++) card[i] = tmp[i-c];
    }

    cout << card[0] + 1  << endl;
  }
}