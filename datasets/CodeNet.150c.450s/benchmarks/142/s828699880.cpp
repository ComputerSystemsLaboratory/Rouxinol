#include <bits/stdc++.h>
#pragma GCC optimize("Ofast")
using namespace std;

#define REP(i, n) for (int i = 0; i < n; i++)
#define FOR(i, m, n) for (int i = m; i < n; i++)
#define ALL(v) v.begin(), v.end()
#define SIZE(x) ((int)(x).size())

typedef map<int, int> M;
typedef pair<int, int> P;
typedef long long ll;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  REP(i, n) {
    cin >> a[i];
  }
  FOR(i, k-1, n-1) {
    if (a[i-k+1] >= a[i+1]) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
  return 0;
}
