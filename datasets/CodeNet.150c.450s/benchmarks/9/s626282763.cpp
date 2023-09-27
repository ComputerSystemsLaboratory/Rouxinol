#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main(){
  string s;
  while (cin >> s) {
    if (s == "-") break;

    int c; cin >> c;
    for (int i = 0; i < c; i ++) {
      int t; cin >> t;
      string a = s.substr(0, t);
      string b = s.substr(t, s.size() - t);
      s = b + a;
    }

    cout << s << endl;
  }
}
