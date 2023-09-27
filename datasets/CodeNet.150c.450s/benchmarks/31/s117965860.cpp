#include <algorithm>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
#define FOR(i, a, b) for (int i = a, i##_len = (b); i < i##_len; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) (x).begin(), (x).end()
#define EPS (1e-7)
#define INF (1e9)

using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;
  cin >> n;
  int minv, max_prof = -INF;
  cin >> minv;

  REP(i, n - 1) {
    int v;
    cin >> v;

    if (v - minv > max_prof) {
      max_prof = v - minv;
    }
    if (v < minv) {
      minv = v;
    }
  }

  cout << max_prof << endl;
}

