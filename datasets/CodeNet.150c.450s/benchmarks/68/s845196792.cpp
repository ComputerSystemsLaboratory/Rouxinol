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
  int N;
  while (cin >> N, N) {
    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int min_abs = INF;
    rep(i, N) rep(j, N) {
      if (i == j) continue;
      min_abs = min(abs(A[i] - A[j]), min_abs);
    }

    cout << min_abs << endl;
  }
  return 0; 
}