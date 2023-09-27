#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for (int i = a; i < int(b); i++)
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define REP1(i, n) for (int i = 1; i <= (int)(n); i++)
#define all(x) (x).begin(), (x).end()
#define SZ(x) ((int)(x).size())
using ll = long long;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  REP(i, n) { cin >> a[i]; }
  FOR(i, k, n) {
    if (a[i] > a[i - k]) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}
