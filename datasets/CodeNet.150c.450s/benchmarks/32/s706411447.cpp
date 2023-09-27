#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

signed main()
{
  int M, nmin, nmax;
  int P, save;
  
  while(cin >> M >> nmin >> nmax, M || nmin || nmax) {
    int maxp = -1, maxv = 0;
    
    cin >> save;
    Reps(i, 1, M) {
      cin >> P;
      if(i >= nmin && i <= nmax) {
	if(maxv <= save - P) { 
	  maxp = i, maxv = save - P;
	}
      }
      save = P;
    }
    
    cout << maxp << endl;
    
  }

  return 0;
}