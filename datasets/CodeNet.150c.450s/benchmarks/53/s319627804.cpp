#include <bits/stdc++.h>
#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) (v).begin(), (v).end()
#define coutd(n) cout << fixed << setprecision(n)
#define ll long long int
#define vl vector<ll>
#define vi vector<int>
const int INF = 2147483647;
const ll MOD = 1000000007;

using namespace std;

int main() {
  int n;
  cin >> n;
  int tmp = n;
  vi ans;
  for (int d = 2; d * d <= tmp; d++) {
    while (tmp % d == 0) {
      ans.push_back(d);
      tmp /= d;
    }
  }
  if (tmp != 1)
    ans.push_back(tmp);
  cout << n << ": ";
  int m = ans.size();
  REP(i, m) { cout << ans[i] << (i == m - 1 ? "\n" : " "); }
  return 0;
}

