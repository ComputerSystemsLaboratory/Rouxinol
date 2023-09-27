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
  int m, nmin, nmax;
  while (cin >> m >> nmin >> nmax, m || nmin || nmax)
  {
    vector<int> p(m);
    for (auto &e : p)
      cin >> e;
    sort(p.begin(), p.end(), greater<int>());
    int ans = 0, gap = 0;
    for (int n = nmin; n <= nmax; ++n)
    {
      if (gap <= p[n - 1] - p[n])
      {
        gap = p[n - 1] - p[n];
        ans = n;
      }
    }
    cout << ans << endl;
  }

  return 0;
}

