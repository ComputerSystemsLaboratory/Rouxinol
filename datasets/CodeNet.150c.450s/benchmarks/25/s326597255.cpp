#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
  int t[26] = {0};
  string l;
  while (getline(cin, l)) {
    for (size_t i = 0; i < l.size(); ++i) {
      const char c = l[i];
      if (c >= 'a' && c <= 'z') {
        t[c - 0x61] += 1;
      } else if (c >= 'A' && c <= 'Z') {
        t[c + 0x20 - 0x61] += 1;
      }
    }
  }

  for (int i = 0; i < 26; ++i) {
    printf("%c : %d\n", i + 0x61, t[i]);
  }
  return 0;
}