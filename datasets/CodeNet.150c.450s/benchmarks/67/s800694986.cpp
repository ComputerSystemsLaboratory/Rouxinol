#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define EPS 1e-12

int main(void) {
  while (true) {
    int n;
    cin >> n;
    if(n == 0) break;
    int cnt = 0;
    FOR(i, 1, n) {
      int sum = 0;
      FOR(j, 1, i) sum += j;
      FOR(j, i, n) {
        sum += j;
        sum -= (j - i);
        if (sum == n) {
          //cout << i << " " << j << endl;
          cnt++;
        }
      }
    }

    cout << cnt << endl;
  }
  return 0;
}