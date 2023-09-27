#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < n; i++)
const int MAX = 24 * 60 * 60 + 2;

int get_timestamp(string t)
{
  int h = stoi(t.substr(0, 2));
  int m = stoi(t.substr(3, 2));
  int s = stoi(t.substr(6, 2));
  return h * 60 * 60 + m * 60 + s;
}

int main()
{
  while (1)
  {
    int n;
    cin >> n;
    if (!n)
      break;
    vector<int> t(MAX, 0);
    rep(i, n)
    {
      string s, e;
      cin >> s >> e;
      t.at(get_timestamp(s))++;
      t.at(get_timestamp(e))--;
    }
    rep(i, MAX - 1)
    {
      t.at(i + 1) += t.at(i);
    }
    int ans = 0;
    rep(i, MAX - 1)
    {
      ans = max(ans, t.at(i));
    }
    cout << ans << endl;
  }
}
