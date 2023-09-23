#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;
typedef pair<ll, ll> P;

#define MOD 1000000007
#define REP(i, N) for (int i = 0; i < N; ++i)
#define REP1(i, N) for (int i = 1; i <= N; ++i)
#define RREP(i, N) for (int i = N - 1; i >= 0; --i)
#define ALL(a) a.begin(), a.end()

int main() {
  while (true) {
    int n[2][4];
    REP(i, 2) REP(j, 4) {
      if (!(cin >> n[i][j])) return 0;
    }
    int a[10] = {};
    int b[10] = {};
    REP(i, 4) a[n[0][i]] = i + 1;
    REP(i, 4) b[n[1][i]] = i + 1;
    int hit = 0, blow = 0;
    REP(i, 10) {
      if (a[i] && b[i] && a[i] == b[i]) {
        hit++;
      } else if (a[i] && b[i] && a[i] != b[i]) {
        blow++;
      }
    }
    cout << hit << " " << blow << endl;
  }
  return 0;
}
