#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
  string str;
  int q;
  string order, p;
  int a, b;
  string substr;

  cin >> str >> q;
  for (int i = 0; i < q; i++) {
    cin >> order >> a >> b;
    if (order == "print") {
      cout << str.substr(a, b - a + 1) << endl;
    } else if (order == "reverse") {
      substr = str.substr(a, b - a + 1);
      reverse(substr.begin(), substr.end());
      str = str.replace(a, b - a + 1, substr);
    } else {
      cin >> p;
      str = str.replace(a, b - a + 1, p);
    }
  }

  return 0;
}