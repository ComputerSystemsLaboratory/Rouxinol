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
  vector<int> f(1000000);
  for (int x = 1; x <= 100; ++x) {
    for (int y = 1; y <= 100; ++y) {
      for (int z = 1; z <= 100; ++z) {
        f[x * x + y * y + z * z + x * y + y * z + z * x]++;
      }
    }
  }
  for (int i = 1; i <= n; ++i) {
    cout << f[i] << endl;
  }
  return 0;
}