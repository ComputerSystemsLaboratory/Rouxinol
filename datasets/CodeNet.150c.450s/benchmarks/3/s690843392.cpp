#include <iostream>
#include <string>

using namespace std;

inline void reverse(char* dst, const char* rbegin, const char* rend) {
  int i = 0;
  for (const char* p = rbegin; p != rend; --p)
    dst[i++] = *p;
  // null-terminate to get rid of garbage when replacing.
  dst[i] = '\0';
}

int main() {
  string str;
  int q;

  cin >> str;
  cin >> q;

  string op;
  int a;
  int b;
  string p;
  char buf[1024]; // for reverse
  for (int i = 0; i < q; ++i) {
    cin >> op >> a >> b;
    if (op == "replace")
      cin >> p;

    if (op == "print") {
      for (size_t i = a; i <= b; ++i)
        cout << str[i];
      cout << endl;
    } else if (op == "reverse") {
      reverse(buf, str.data() + b, str.data() + a - 1);
      str.replace(a, b - a + 1, buf);
    } else if (op == "replace") {
      str.replace(a, p.length(), p);
    }
  }
  return 0;
}