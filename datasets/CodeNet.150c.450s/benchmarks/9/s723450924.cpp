#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  string s;
  int m, h;
  while (cin >> s) { 
    if (s == "-") {
      break;
    }
    cin >> m;
    while (m--) {
      cin >> h;
      s = s.substr(h) + s.substr(0, h);
    }
    cout << s << '\n';
  }
  return 0;
}

