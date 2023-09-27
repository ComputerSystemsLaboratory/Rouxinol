#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  for (size_t i = 0; i < s.size(); ++i) {
    const char c = s[i];
    if (c >= 'a' && c <= 'z') {
      printf("%c", c - 0x20);
    } else if (c >= 'A' && c <= 'Z') {
      printf("%c", c + 0x20);
    } else {
      printf("%c", c);
    }
  }
  printf("\n");

  return 0;
}