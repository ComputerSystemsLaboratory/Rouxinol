#include <iostream>
#include <string>
using namespace std;

int main() {
  string s;
  getline(cin, s);
  for (int i=0;i<s.size();i++) {
    if (s[i] >= 'a' && s[i] <= 'z')
      s[i] += 'A' - 'a';
    else if (s[i] >= 'A' && s[i] <= 'Z')
      s[i] -= 'A' - 'a';
  }
  cout << s << endl;
}

