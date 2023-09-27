#include <iostream>
#include <string>

using namespace std;

int main() {
  while (1) {
    string str;
    cin >> str;
    if (str == "-") {
      break;
    }
    int m;
    cin >> m;

    int first = 0;
    for (int i = 0; i < m; i++) {
      int h;
      cin >> h;

      first = (first + h) % str.size();
    }

    for (int i = 0; i < str.size(); i++) {
      cout << str[(first + i) % str.size()];
    }
    cout << endl;
  }

  return 0;
}
