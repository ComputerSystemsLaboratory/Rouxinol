#include <iostream>
#include <string>

using namespace std;

auto main() -> int {
  int n, h;
  string s;

  for (;;) {
    cin >> s;

    if (s == "-") {
      break;
    }

    cin >> n;

    while (n --> 0) {
      cin >> h;
      s = s.substr(h) + s.substr(0, h);
    }

    cout << s << endl;
  }

  return 0;
}