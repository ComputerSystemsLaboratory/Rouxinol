#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cin >> str;
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string order;
    int a, b;
    cin >> order >> a >> b;

    if (order == "print") {
      for (int j = a; j <= b; j++) {
        cout << str[j];
      }
      cout << endl;
    } else if (order == "reverse") {
      string s;
      for (int j = a; j <= b; j++) {
        s[j - a] = str[j];
      }

      int k = 0;
      for (int j = b; j >= a; j--) {
        str[j] = s[k];
        k++;
      }
    } else if (order == "replace") {
      string q;
      cin >> q;

      for (int j = a; j <= b; j++) {
        str[j] = q[j - a];
      }
    }
  }

  return 0;
}
