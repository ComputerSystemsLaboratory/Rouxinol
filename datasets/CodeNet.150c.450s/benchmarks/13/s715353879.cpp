#include <iostream>
#include <string>
using namespace std;

int main() {
  string s, P;
  cin >> s >> P;
  s += s;
  for (int i = 0; i <= s.size() - P.size(); i ++) {
    if (s[i] == P[0]) {
      bool match = true;
      for (int j = i + 1, k = 1; j < i + P.size(); j++, k++) {
        if (s[j] != P[k]) {
          match = false;
          break;
        }
      }
      if (match) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
  return 0;
}