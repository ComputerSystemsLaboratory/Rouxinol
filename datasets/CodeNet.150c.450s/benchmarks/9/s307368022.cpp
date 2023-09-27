#include <iostream>
#include <string>
#include <cstdio>
#include <string.h>

using namespace std;

int main() {
  string s;
  char buf[200];
  char tmp[200] = {0};
  int m;
  size_t h;

  for (;;) {
    cin >> s;
    if (s == "-") {
      break;
    }
    strncpy(buf, s.c_str(), s.size());

    cin >> m;
    const size_t len = s.size();
    for (int i = 0; i < m; ++i) {
      cin >> h;

      memmove(tmp, buf, h);
      memmove(buf, buf + h, len - h);
      memmove(buf + len - h, tmp, h);
    }
    cout << string(buf, s.size()) << endl;
  }

  return 0;
}