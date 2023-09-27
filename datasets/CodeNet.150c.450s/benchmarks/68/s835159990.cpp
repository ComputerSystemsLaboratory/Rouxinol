#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define MOD 1000000007
#define INF 1000000007
#define REP(i, N) for (int i = 0; i < N; ++i)
#define REP1(i, N) for (int i = 1; i <= N; ++i)
#define RREP(i, N) for (int i = N - 1; i >= 0; --i)
#define ALL(a) a.begin(), a.end()

int main() {
  int n;
  while (cin >> n && n) {
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    sort(ALL(a));
    int ans = INF;
    REP(i, n - 1) ans = min(ans, a[i + 1] - a[i]);
    cout << ans << endl;
  }
  return 0;
}
