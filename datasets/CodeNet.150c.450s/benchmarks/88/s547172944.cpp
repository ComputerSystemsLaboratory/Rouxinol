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
  int h, w;
  while (cin >> h >> w, h)
  {
    int d = h * h + w * w;
    int aw = 1000, ah = 1000;
    int sum = 1000000;
    for (int i = 1; i < 150; ++i)
    {
      for (int j = i + 1; j < 150; ++j)
      {
        int t = i * i + j * j;
        if (d == t)
        {
          if (h < i && (sum > t || ah > i))
          {
            ah = i, aw = j;
            sum = t;
          }
        }
        if (d < t && sum > t)
        {
          ah = i, aw = j;
          sum = t;
        }
      }
    }
    cout << ah << ' ' << aw << endl;
  }

  return 0;
}

