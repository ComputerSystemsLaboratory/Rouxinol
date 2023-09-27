#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

inline void reverse(char* buf, int a, int b) {
  int mid = (a + b) / 2;
  int j = b;
  int t;
  for (int i = a; i <= mid; ++i) {
    if (i == j) {
      break;
    }
    t = buf[i];
    buf[i] = buf[j];
    buf[j] = t;
    --j;
  }
}

int main() {
  char str[1001] = {'\0'};
  cin >> str;

  int q;
  cin >> q;

  int a, b;
  string o, p;
  for (int i = 0; i < q; ++i) {
    cin >> o >> a >> b;
    if (o == "print") {
      for (int j = a; j <= b; ++j) {
        printf("%c", str[j]);
      }
      printf("\n");
    } else if (o == "reverse") {
      reverse(str, a, b);
    } else if (o == "replace") {
      cin >> p;
      int k = 0;
      for (int j = a; j <= b; ++j) {
        str[j] = p[k];
        ++k;
      }
    }
  }
  return 0;
}