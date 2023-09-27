#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

const int INF = 1000000009;

int main() {
  int n;
  cin >> n;

  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  // dp[i] := LISの長さがi+1となるときの末尾要素の最小値
  vector<int> dp(n + 1, INF);
  for (int i = 0; i < n; i++) {
    *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
  }
  int LIS = lower_bound(dp.begin(), dp.end(), INF) - dp.begin();
  cout << LIS << endl;

  return 0;
}
