#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <cassert>
#include <string>
#include <algorithm>
#include <vector>
#include <valarray>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <iomanip>
#include <map>
#include <set>
#include <list>
#include <limits>
#include <numeric>
#include <utility>
#include <deque>
#include <unordered_set>
#include <unordered_map>
#include <regex>
#include <array>
#include <bitset>
#include <complex>
#include <tuple>
#include <random>

using namespace std;
using ll = long long;
const int INF = 1e9;
const ll MOD = 1e9 + 7;

int main()
{
  int n;
  while (cin >> n, n)
  {
    vector<int> a(n);
    for (auto &e : a)
      cin >> e;
    sort(a.begin(), a.end());
    int ans = 1e9;
    for (int i = 0; i < n - 1; ++i)
      ans = min(ans, abs(a[i] - a[i + 1]));
    cout << ans << endl;
  }

  return 0;
}

