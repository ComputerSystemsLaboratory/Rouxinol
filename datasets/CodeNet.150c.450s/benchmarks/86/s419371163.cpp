#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

signed main()
{
  int N, M, P;
  while(cin >> N >> M >> P, N || M || P) {
    
    int A[105];
    P = 100 - P;

    Rep(i, N) cin >> A[i];
    --M;
    if(A[M]) cout << accumulate(A, A + N, 0LL) * 100 * P / A[M] / 100 << endl;
    else cout << 0 << endl;
  }

  return 0;
}
    