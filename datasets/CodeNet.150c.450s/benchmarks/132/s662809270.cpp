#include <bits/stdc++.h>
using namespace std;

signed main()
{
  int N, P;

  while(cin >> N >> P, N || P) {
    
    int w = P, i = 0, have[55] = {0};
    while(1) {
      if(w) have[i]++, w--;
      else w += have[i], have[i] = 0;
      if(have[i] == P) { cout << i << endl; break; }
      i++; if(i == N) i = 0;
    }

  }

  return 0;
}