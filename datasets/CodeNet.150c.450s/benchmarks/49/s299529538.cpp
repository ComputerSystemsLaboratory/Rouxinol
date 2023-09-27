#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)

const int LLINF = 1LL << 60;


signed main()
{
  int N;

  while(cin >> N, N) {
    int maxv = -LLINF, minv = LLINF;
    int sum = 0, A;
    Rep(i, N) {
      cin >> A; sum += A;
      maxv = max(maxv, A), minv = min(minv, A);
    }

    sum -= maxv + minv;

    cout << sum / (N - 2) << endl;
    
  }

  return 0;
}