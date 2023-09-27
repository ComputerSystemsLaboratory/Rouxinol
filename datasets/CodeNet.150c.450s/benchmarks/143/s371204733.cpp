#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <string>
#include <tuple>
#include <utility>
#include <vector>
using namespace std;
using ll = long long;
const int INF = 1000000009;
const ll LINF = 1e18;

int main() {
  int n;
  cin >> n;
  vector<int> a_kind(100001, 0);
  ll sum = 0;
  for (int i = 0; i < n; ++i) {
    int inp;
    cin >> inp;
    ++a_kind[inp];
    sum += inp;
  }
  int q;
  cin >> q;
  vector<ll> ans(q);
  for (int i = 0; i < q; ++i) {
    int b, c;
    cin >> b >> c;
    sum += (ll)(-1 * (ll)a_kind[b] *(ll)b) + (ll)((ll)a_kind[b] * (ll)c);
    a_kind[c] += a_kind[b];
    a_kind[b] = 0;
    ans[i] = sum;
  }
  for (int i = 0; i < q; ++i) cout << ans[i] << endl;
}
