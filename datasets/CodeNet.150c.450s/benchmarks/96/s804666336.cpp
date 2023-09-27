#include <bits/stdc++.h>
#include <tuple>
#include <iterator>
using namespace std;
using ll = long long;

char t[][5] = {
    {},
    {'.', ',', '!', '?', ' '},
    {'a', 'b', 'c'},
    {'d', 'e', 'f'},
    {'g', 'h', 'i'},
    {'j', 'k', 'l'},
    {'m', 'n', 'o'},
    {'p', 'q', 'r', 's'},
    {'t', 'u', 'v'},
    {'w', 'x', 'y', 'z'}};

int main()
{
  int n;
  cin >> n;
  vector<string> ans;
  for (int i = 0; i < n; ++i)
  {
    string s;
    cin >> s;
    string sum = "";
    int cnt = 0;
    char c = '0';
    for (int j = 0; j < s.size(); ++j)
    {
      if (s[j] == '0')
      {
        if (c == '0')
          continue;
        if ((c - '0') == 1)
          sum += t[c - '0'][(cnt - 1) % 5];
        else if ((c - '0') == 7 || (c - '0') == 9)
          sum += t[c - '0'][(cnt - 1) % 4];
        else
          sum += t[c - '0'][(cnt - 1) % 3];
        cnt = 0;
        c = '0';
      }
      else
      {
        c = s[j];
        cnt++;
      }
    }
    ans.push_back(sum);
  }
  for (auto &e : ans)
    cout << e << endl;

  return 0;
}

