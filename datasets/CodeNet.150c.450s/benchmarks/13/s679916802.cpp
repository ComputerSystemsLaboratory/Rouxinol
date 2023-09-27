#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

bool contains(const string& s, const string& p) {
  for (size_t i = 0; i < s.size(); ++i) {
    bool m = true;
    for (size_t j = 0; j < p.size(); ++j) {
      int k = j + i;
      if (j + i >= s.size()) {
        k = j + i - s.size();
      }
      if (s[k] != p[j]) {
        m = false;
        break;
      }
    }
    if (m) {
      return true;
    }
  }
  return false;
}

int main() {
  string s, p;
  cin >> s;
  cin >> p;

  if (contains(s, p)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}