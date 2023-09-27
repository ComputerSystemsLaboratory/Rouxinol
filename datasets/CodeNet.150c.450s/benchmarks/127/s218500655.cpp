#include <bits/stdc++.h>
using namespace std;

int main() {
  int m; cin >> m;
  while(m--) {
    string s; cin >> s;
    set<string> v;
    for(int i = 1; i < s.size(); ++i) {
      for(int a = 0; a < 2; ++a) {
        for(int b = 0; b < 2; ++b) {
          string t = s.substr(0, i);
          string u = s.substr(i);
          if(a) reverse(t.begin(), t.end());
          if(b) reverse(u.begin(), u.end());
          v.insert(t + u);
          v.insert(u + t);
        }
      }
    }
    cout << v.size() << endl;
  }
  return 0;
}