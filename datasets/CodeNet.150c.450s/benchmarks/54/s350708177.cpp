#include <ctype.h>
#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

inline std::string ToLower(const std::string& s) {
  std::string r;
  r.reserve(s.length());
  char b[2] = {0};
  for (auto c : s) {
    b[0] = tolower(c);
    r.append(b);
  }
  return r;
}

int main() {
  string w;
  cin >> w;
  w = ToLower(w);

  string s;
  size_t n = 0;
  while (cin >> s) {
    s = ToLower(s);
    if (s == "END_OF_TEXT")
      break;
    if (s == w)
      ++n;
  }
  cout << n << endl;
  return 0;
}