#include <iostream>
#include <string>

using namespace std;

int main(){
  while (1) {
    string s;
    cin >> s;
    if (s == "-") break;
    int n;
    cin >> n;
    while (n) {
      n--;
      int h;
      cin >> h;
      string b1 = s.substr(0, h);
      string b2 = s.substr(h);
      s = b2 + b1;
    }
    cout << s << endl;
  }
  return 0;
}