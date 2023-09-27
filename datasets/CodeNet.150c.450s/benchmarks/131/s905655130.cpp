// Undone
#include <bits/stdc++.h>
using namespace std;
int calc(string a) {
  string r = a;
  sort(r.begin(), r.end());
  string l = r;
  reverse(l.begin(), l.end());
  return (stoi(l) - stoi(r));
}

signed main() {
  int _a, L;
  while (cin >> _a >> L, _a+L) {
    vector<int> used(1000000, 0), when(1000000, 0);
    int ans = 0;
    while (0 == 0) {
      string a = to_string(_a);
      while (a.length() < L) {
        a.insert(0, "0");
      }
      _a = stoi(a);
      used[_a] = 1;
      when[_a] = ans;
      _a = calc(a);
      ans++;
      if (used[_a] == 1) {
        cout << when[_a] << " " << _a << " " << (ans-when[_a]) << endl;
        break;
      }
    }
  }
}


