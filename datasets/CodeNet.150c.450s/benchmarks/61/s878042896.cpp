#include <bits/stdc++.h>
using namespace std;
#define int long long
#define Rep(i, N) for(int i = 0; i < N; i++)
#define Reps(i, x, N) for(int i = x; i < N; i++)

const int LLINF = 1LL << 60;

signed main()
{
  int N, A, B, C, X;
  int Y;

  while(cin >> N >> A >> B >> C >> X, N || A || B || C || X) {

    int cnt = 0;
    Rep(i, N) {
      cin >> Y;
      while(X != Y && cnt <= 10000) {
	X = (A * X + B) % C, cnt++;
      }
      if(i < N - 1) X = (A * X + B) % C, cnt++; 
    }

    if(cnt > 10000) cout << -1 << endl;
    else cout << cnt << endl;

  }

  return 0;
}