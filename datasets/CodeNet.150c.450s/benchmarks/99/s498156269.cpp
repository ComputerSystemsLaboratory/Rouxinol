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
  cin >> n;
  for (int i = 0; i < n; ++i)
  {
    string sl, sr;
    cin >> sl >> sr;
    int l = 0, r = 0;
    for (int j = 0; j < sl.size(); ++j)
    {
      int t = 1;
      if (isdigit(sl[j]))
      {
        t = sl[j] - '0';
        j++;
      }
      if (sl[j] == 'm')
        l += t * 1000;
      else if (sl[j] == 'c')
        l += t * 100;
      else if (sl[j] == 'x')
        l += t * 10;
      else if (sl[j] == 'i')
        l += t;
    }
    for (int j = 0; j < sr.size(); ++j)
    {
      int t = 1;
      if (isdigit(sr[j]))
      {
        t = sr[j] - '0';
        j++;
      }
      if (sr[j] == 'm')
        r += t * 1000;
      else if (sr[j] == 'c')
        r += t * 100;
      else if (sr[j] == 'x')
        r += t * 10;
      else if (sr[j] == 'i')
        r += t;
    }
    int sum = l + r;
    string ans = "";
    if (sum / 1000)
    {
      if (sum / 1000 > 1)
        ans += char(sum / 1000 + '0');
      ans += 'm';
    }
    sum %= 1000;
    if (sum / 100)
    {
      if (sum / 100 > 1)
        ans += char(sum / 100 + '0');
      ans += 'c';
    }
    sum %= 100;
    if (sum / 10)
    {
      if (sum / 10 > 1)
        ans += char(sum / 10 + '0');
      ans += 'x';
    }
    sum %= 10;
    if (sum)
    {
      if (sum > 1)
        ans += char(sum + '0');
      ans += 'i';
    }
    cout << ans << endl;
  }

  return 0;
}

