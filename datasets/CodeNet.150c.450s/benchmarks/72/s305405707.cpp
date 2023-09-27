#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  getline(cin,s);
  for(int a = 0; a < s.length(); ++a) {
    if(islower(s[a])) {
      s[a] = toupper(s[a]);
    }else if(isupper(s[a])) {
      s[a] = tolower(s[a]);
    }
  }

  cout << s << endl;

  return 0;
}