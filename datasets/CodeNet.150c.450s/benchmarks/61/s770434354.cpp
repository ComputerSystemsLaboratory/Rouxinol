#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <string>
#include <string.h>
using namespace std;
using ll = long long;

#define right true
#define left false

int main()
{
  int n, a, b, c, x;
  while (cin >> n >> a >> b >> c >> x, n || a || b || c || x)
  {
    vector<int> y(n);
    for (auto &e : y)
      cin >> e;
    int t = x;
    int cnt = 0;
    for (int i = 0; i < n; ++i)
    {
      if (x == y[i] && i == 0)
        continue;
      t = (a * t + b) % c;
      cnt++;
      while (t != y[i])
      {
        if (cnt > 10000)
          break;
        t = (a * t + b) % c;
        cnt++;
      }
    }
    if (cnt <= 10000)
      cout << cnt << endl;
    else
      cout << -1 << endl;
  }

  return 0;
}
