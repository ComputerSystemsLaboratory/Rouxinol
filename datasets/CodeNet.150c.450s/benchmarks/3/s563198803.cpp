#include <iostream>
#include <string>
using namespace std;

int main(void)
{
  int i, j, a, b, q;
  string str, command, tmpstr, repstr;
  cin >> str >> q;
  for (i = 0; i < q; i++){
    cin >> command >> a >> b;
    if (command == "print") {
      cout << str.substr(a, b - a + 1) << endl;
    }
    else if (command == "reverse") {
      string tmpstr(b - a + 1, 0);
      for (j = 0; j < b - a + 1; j++) {
        tmpstr[j] = str[b - j];
      }
      str.replace(a, b - a + 1, tmpstr);
    }
    else if (command == "replace") {
      cin >> repstr;
      str.replace(a, b - a + 1, repstr);
    }
  }
}