#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

signed main()
{
  int N, M;
  
  while(cin >> N >> M, N || M) {
    int A[105], B[105];
    Rep(i, N) cin >> A[i];
    Rep(i, M) cin >> B[i];
    
    int sa = accumulate(B, B + M, 0LL) - accumulate(A, A + N, 0LL);
    if(sa & 1) cout << -1 << endl;
    else {
      int di = LLINF, dj = LLINF;
      Rep(i, N) {
	Rep(j, M) {
	  if(B[j] - A[i] == sa / 2) {
	    if(di == LLINF || dj == LLINF || B[dj] + A[di] > B[j] + A[i]) {
	      di = i, dj = j;
	    }
	  }
	}
      }

      if(di != LLINF && dj != LLINF) {
	cout << A[di] << " " << B[dj] << endl;
      } else {
	cout << -1 << endl;
      }
    }
  }

  return 0;
}
    