#include <algorithm>
#include <string>
#include <iostream>

using namespace std;

int main() {
  int q, a, b;
  string s, p, i;

  cin >> s >> q;

  while (q --> 0) {
    cin >> i >> a >> b;

    if (i == "replace") {
      cin >> p;
      s = s.replace(a, b - a + 1, p);
    } else if (i == "reverse") {
      reverse(s.begin() + a, s.begin() + b + 1);
    } else if (i == "print") {
      cout << s.substr(a, b - a + 1) << endl;
    }
  }

  return 0;
}