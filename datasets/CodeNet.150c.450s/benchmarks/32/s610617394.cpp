#include <bits/stdc++.h>
using namespace std;

const double pi  = 2 * acos(0.0);
const double eps = 1e-8;

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)
#define INF (1<<29)
#define INFLL (1L<<62)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
typedef pair<ll, ll> PLL;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int M, Nmin, Nmax;
  while (cin >> M >> Nmin >> Nmax, M && Nmin && Nmax) {
    vector<int> P(M);
    rep(i, M) cin >> P[i];
    sort(P.begin(), P.end(), greater<int>());

    int max_gap = 0;
    int ans = 0;
    for (int n = Nmin; n <= Nmax; n++) {
      int gap = P[n-1] - P[n];
      if (gap >= max_gap) {
        max_gap = gap;
        ans = n;
      }
    }

    cout << ans << endl;
  }
  return 0; 
}