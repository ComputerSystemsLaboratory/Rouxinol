#include <bits/stdc++.h>
using namespace std;
int main() {
  string str;
  int q;
  cin >> str;
  cin >> q;
  for (int i = 0; i < q; i++) {
    string s;
    cin >> s;
    if (s == "print") {
      int a, b;
      cin >> a >> b;
      cout << str.substr(a, b - a + 1) << endl;
    } else if (s == "reverse") {
      int a, b;
      cin >> a >> b;
      reverse(str.begin() + a, str.begin() + b + 1);
    } else if (s == "replace") {
      int a, b;
      string p;
      cin >> a >> b >> p;
      str.replace(a, b - a + 1, p);
    }
  }
}
