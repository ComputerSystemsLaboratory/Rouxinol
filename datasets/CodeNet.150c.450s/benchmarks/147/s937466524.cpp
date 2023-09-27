#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(var, begin, end) for (int var = (begin); var <= (end); var++)
#define RFOR(var, begin, end) for (int var = (begin); var >= (end); var--)
#define REP(var, length) FOR(var, 0, length - 1)
#define RREP(var, length) RFOR(var, length - 1, 0)
#define EACH(value, var) for (auto value : var)
#define SORT(var) sort(var.begin(), var.end())
#define REVERSE(var) reverse(var.begin(), var.end())
#define RSORT(var) SORT(var); REVERSE(var)
#define OPTIMIZE_STDIO ios::sync_with_stdio(false); cin.tie(0); cout.precision(10); cout << fixed
#define endl '\n'

const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

map<int, int> mp;

int f(int x, int y, int z) {
  return x * x + y * y + z * z + x * y + y * z + z * x;
}

void solve(istream& cin, ostream& cout) {
  int n;
  cin >> n;
  mp.clear();
  FOR(i, 1, 99) {
    FOR(j, 1, 99) {
      FOR(k, 1, 99) {
        mp[f(i, j, k)]++;
      }
    }
  }
  FOR(i, 1, n) {
    cout << mp[i] << endl;
  }
}

#ifndef TEST
int main() {
  OPTIMIZE_STDIO;
  solve(cin, cout);
  return 0;
}
#endif
