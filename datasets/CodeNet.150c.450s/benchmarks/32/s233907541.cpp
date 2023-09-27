#include<bits/stdc++.h>

using namespace std;

int main()
{
  int M, Nmin, Nmax, P[200];

  while(cin >> M >> Nmin >> Nmax, M) {
    for(int i = 0; i < M; i++) {
      cin >> P[i];
    }

    int gap = numeric_limits< int >::max();
    for(int i = Nmax; i >= Nmin; i--) {
      gap = min(gap, P[i] - P[i - 1]);
    }
    for(int i = Nmax; i >= Nmin; i--) {
      if(P[i] - P[i - 1] == gap) {
        cout << i << endl;
        break;
      }
    }
  }
}