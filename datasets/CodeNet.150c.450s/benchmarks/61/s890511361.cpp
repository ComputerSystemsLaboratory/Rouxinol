#include <bits/stdc++.h>
#define int long long
#define double long double
#define INF 1e18
using namespace std;
int Y[110];
signed main() {
  int N, A, B, C, X;
  while (true) {
    cin>>N>>A>>B>>C>>X;
    if (N+A+B+C+X==0) break;
    for (int i = 0; i < N; i++) cin >> Y[i];
    int ans = -1;
    for (int i = 0; i < N; ans++){
      if (ans > 10000) break;
      if (Y[i] == X) i++;
      X = (A * X + B) % C;
    }
    ans = (ans > 10000) ? -1 : ans;
    cout << ans << endl;
  }
}

