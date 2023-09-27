#include <algorithm>
#include <iostream>
#include <vector>

#define rep(i, n) for (int i = 0; i < (int)(n); ++i)

using namespace std;

const int INF = 1000000001;

int main() {
  int n;
  cin >> n;

  int a[n];
  rep(i, n) cin >> a[i];

  vector<int> dp(n, INF);

  rep(i, n) { *lower_bound(dp.begin(), dp.end(), a[i]) = a[i]; }

  cout << lower_bound(dp.begin(), dp.end(), INF) - dp.begin() << '\n';

  return 0;
}

