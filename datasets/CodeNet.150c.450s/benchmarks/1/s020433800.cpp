#include <algorithm>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

#define MOD 1000000007

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }
  vector<int> dp(n, 1e9 + 10);
  for (int i = 0; i < n; ++i) {
    *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
  }
  cout << lower_bound(dp.begin(), dp.end(), 1e9 + 10) - dp.begin() << endl;
  return 0;
}
