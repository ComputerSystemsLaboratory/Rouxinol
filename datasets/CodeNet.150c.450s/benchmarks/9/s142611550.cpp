#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(){
  string str;
  int m, h;

  while (1) {
    cin >> str;
    if (str == "-") {
      break;
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
      cin >> h;
      string head = str.substr(0, h);
      string tail = str.substr(h, str.size() - h);
      str = tail + head;
    }
    cout << str << endl;
  }

  return 0;
}
