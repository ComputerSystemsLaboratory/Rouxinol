#include <bits/stdc++.h>
using namespace std;
#define int long long 
#define Rep(i, N) for(int i = 0; i < N; i++)

signed main()
{
  int N;

  while(cin >> N, N) {

    int A[1005];
    
    Rep(i, N) cin >> A[i];

    sort(A, A + N);
    
    int minv = 1LL << 60;

    Rep(i, N - 1) {
      minv = min(minv, A[i + 1] - A[i]);
    }

    cout << minv << endl;

  }

  return 0;
}