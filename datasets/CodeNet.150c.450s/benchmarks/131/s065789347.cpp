#include <bits/stdc++.h>
using namespace std;
int f(string s) {
  int r = 0;
  for (int i = 0; i < s.size(); i++) {
    r *= 10;
    r += s[i] - '0';
  }
  return r;
}
int mx(string s) {
  sort(s.begin(), s.end());
  return f(s);
}
int mn(string s) {
  sort(s.begin(), s.end());
  reverse(s.begin(), s.end());
  return f(s);
}
int main() {
  while (true) {
    string s;
    int n;
    map<int, int> mp;
    cin >> s >> n;

    if (n == 0)
      break;
    mp[f(s)] = 0;
    while (s.size() < n)
      s.push_back('0');
    int j = 0;
    while (true) {
      j++;
      int r = mn(s);
      int l = mx(s);
      int next = r - l;
      if (mp.find(next) != mp.end()) {
        cout << mp[next] << " " << next << " " << j - mp[next] << endl;
        break;
      }
      mp[next] = j;
      s = to_string(next);
      while (s.size() < n)
        s.push_back('0');
    }
  }
  return 0;
}
