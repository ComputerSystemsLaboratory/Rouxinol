#if 0

#endif

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int N, M;
pair<int,int> PD[10010];
int main() {
  while (cin >> N >> M && N) {
    int d, p;
    for (int i=0; i<N; ++i) {
      cin >> d >> p;
      PD[i] = make_pair(p, d);
    }
    sort(PD, PD+N, greater<pair<int,int>>());
    int ans = 0;
    for (int i = 0; i < N; i++) {
      int p = PD[i].first; int d = PD[i].second;
      if (M >= d) {
        M -= d;
      } else if (M < d && M > 0) {
        ans += p * (d-M);
        M = 0;
      } else {
        ans += p * d;
      }
    }
    cout << ans << endl;
  }
}

