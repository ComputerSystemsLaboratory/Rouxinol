#include <cctype>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

string lower(const string& s) {
  string out;
  out.reserve(s.size());
  for (size_t i = 0; i < s.size(); ++i) {
    out += static_cast<char>(tolower(s[i]));
  }
  return out;
}

int main() {
  string w, s;
  cin >> w;
  w = lower(w);

  size_t n = 0;
  while (getline(cin, s)) {
    if (s == "END_OF_TEXT") {
      break;
    }
    istringstream is(s);
    string b;
    while (is >> b) {
      if (w == lower(b)) {
        ++n;
      }
    }
  }
  cout << n << endl;
  return 0;
}