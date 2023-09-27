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
    int sum = 0;
    int l = 0, r = 0;
    int pre = 0;
    for (int i = 0; i < n; ++i)
    {
      string f;
      cin >> f;
      if (f[0] == 'l')
      {
        if (f[1] == 'u')
        {
          if (l == 0)
          {
            l = 1;
            if (l == r && pre == 0)
              sum++, pre = 1;
          }
        }
        else
        {
          if (l == 1)
          {
            l = 0;
            if (l == r && pre == 1)
              sum++, pre = 0;
          }
        }
      }
      else
      {
        if (f[1] == 'u')
        {
          if (r == 0)
          {
            r = 1;
            if (l == r && pre == 0)
              sum++, pre = 1;
          }
        }
        else
        {
          if (r == 1)
          {
            r = 0;
            if (l == r && pre == 1)
              sum++, pre = 0;
          }
        }
      }
    }
    cout << sum << endl;
  }

  return 0;
}

