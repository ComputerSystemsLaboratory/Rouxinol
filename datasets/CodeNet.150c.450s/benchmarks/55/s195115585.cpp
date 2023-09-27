#include <cstdio>
#include <iostream>
#include <string>
#include <stdlib.h>

using namespace std;

int main() {
  string l;
  while (getline(cin, l)) {
    if (l == "0") {
      break;
    }

    int s = 0;
    for (size_t i = 0; i < l.size(); ++i) {
      const char c = l[i];
      s += atoi(&c);
    }
    printf("%d\n", s);
  }
  return 0;
}