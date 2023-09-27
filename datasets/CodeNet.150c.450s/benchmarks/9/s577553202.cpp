#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  string str;
  while (cin >> str) {
    if (str == "-") break;
    
    int m; cin >> m;
    string s = str;
    for (int i = 0; i < m; i++) {
      int h; cin >> h;
      int s1 = 0, e1 = h;
      int s2 = h, e2 = s.length();
      s = s.substr(s2, e2) + s.substr(s1, e1);
    }
    cout << s << endl;
  }
  return 0;
}