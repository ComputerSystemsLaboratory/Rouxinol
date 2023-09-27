#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

signed main()
{
  int N, P;

  while(cin >> N >> P, N || P) {
    
    int w = P;
    int have[55] = {0};
    int i = 0;
    while(true) {
      if(w) have[i]++, w--;
      else w += have[i], have[i] = 0;
      if(have[i] == P) { cout << i << endl; break; }
      i++; if(i == N) i = 0;
    }

  }

  return 0;
}