#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  while (true) {
    string s;
    cin >> s;
    if (s[0] == '-') { break; }
    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
      int h;
      fscanf(stdin, "%d", &h);
      string t = s.substr(h) + s.substr(0, h);
      s = t;
    }
    fprintf(stdout, "%s\n", s.c_str());
  }
  return 0;
}