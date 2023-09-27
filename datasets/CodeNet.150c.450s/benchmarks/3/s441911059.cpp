#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, o, p;
  int n, a, b;
  cin >> s >> n;
  for (int i = 0; i < n; i++) {
    cin >> o >> a >> b;
    p = s.substr(a, b - a + 1);
    if (o == "print") {
      cout << p << '\n';
      continue;
    } else if (o == "reverse") {
      reverse(p.begin(), p.end());
    } else {
      cin >> p;
    }
    s = s.substr(0, a) + p + s.substr(b + 1);
  }
  return 0;
}

