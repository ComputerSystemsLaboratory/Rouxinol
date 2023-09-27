#include <bits/stdc++.h>
typedef long long LL;
using namespace std;

int main() {
  string s;
  cin >> s;
  string t;
  int sum = 0;
  while (true) {
    cin >> t;
    if (t == "END_OF_TEXT") break;

    if (s.size() != t.size()) continue;

    bool flag = true;
    for (int i = 0; i < s.size(); i ++) {
      if (s[i] == t[i] || s[i] == t[i] + 32 || s[i] + 32 == t[i]) continue;
      flag = false;
    }
    if (flag) sum ++;
  }

  cout << sum << endl;
}
