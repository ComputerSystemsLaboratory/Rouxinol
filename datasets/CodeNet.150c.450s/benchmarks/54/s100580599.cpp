#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int INF = 1e9;

int main()
{
  string w;
  cin >> w;
  transform(w.begin(), w.end(), w.begin(), ::toupper);
  string s;
  int ans = 0;
  while (cin >> s) {
    if (s == "END_OF_TEXT") { break; }
    transform(s.begin(), s.end(), s.begin(), ::toupper);
    if (s == w) { ++ans; }
  }
  fprintf(stdout, "%d\n", ans);
  return 0;
}