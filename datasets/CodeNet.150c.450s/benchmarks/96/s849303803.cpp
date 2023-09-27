#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> perse(string s) {
  vector<pair<int, int>> v;
  int cnt = 0;
  for (int i = 0; i < s.size(); ++i) {
    if (s[i] == '0') {
      if (cnt) v.push_back(make_pair(s[i - 1] - '0', cnt));
      cnt = 0;
    }
    else ++cnt;
  }

  return v;
}

char c[10][10] = {
  {},
  {'.', ',', '!', '?', ' '},
  {'a', 'b', 'c'},
  {'d', 'e', 'f'},
  {'g', 'h', 'i'},
  {'j', 'k', 'l'},
  {'m', 'n', 'o'},
  {'p', 'q', 'r', 's'},
  {'t', 'u', 'v'},
  {'w', 'x', 'y', 'z'}
};

char ans(int a, int b) {
  b--;
  if (a == 1) b %= 5;
  else if (a == 7 || a == 9) b %= 4;
  else b %= 3;
  return c[a][b];
}

int main() {
  int n;
  string s;

  cin >> n;

  while (n--) {
    cin >> s;

    vector<pair<int, int>> v = perse(s);

    for (int i = 0; i < v.size(); ++i) {
      cout << ans(v[i].first, v[i].second);
    }
    cout << endl;
  }
}