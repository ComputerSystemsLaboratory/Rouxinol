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
  int n;
  cin >> n;
  vector<string> u(n);
  for (auto &e : u)
    cin >> e;
  int m;
  cin >> m;
  vector<string> t(m);
  for (auto &e : t)
    cin >> e;

  bool state = 0;
  for (int i = 0; i < m; ++i)
  {
    bool exist = false;
    for (int j = 0; j < n; ++j)
    {
      if (t[i] == u[j])
        exist = true;
    }
    if (exist)
    {
      if (state)
      {
        cout << "Closed by " << t[i] << endl;
        state = false;
      }
      else
      {
        cout << "Opened by " << t[i] << endl;
        state = true;
      }
    }
    else
    {
      cout << "Unknown " << t[i] << endl;
    }
  }

  return 0;
}
