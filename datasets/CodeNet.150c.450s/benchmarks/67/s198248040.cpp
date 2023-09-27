#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

signed main()
{
  int N;

  while(cin >> N, N) {

    int sum = 0;
    int p = 1, cnt = 0;

    Reps(i, 1, N / 2 + 2) {
      sum += i;
      while(sum >= N) {
	if(p != i && sum == N) cnt++;
	sum -= p, p++;
      }
    }

    cout << cnt << endl;
  }

  return 0;
}