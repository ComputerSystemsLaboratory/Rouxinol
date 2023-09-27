#include <bits/stdc++.h>
using namespace std;

int z[26] = {0};
char ch[4] = {'i', 'x', 'c', 'm'};
string s1, s2;
int n;

string enc(int x);
int dec(string s);

int main() {
  int a;
  cin >> n;
  z['m' - 'a'] = 1000;
  z['c' - 'a'] = 100;
  z['x' - 'a'] = 10;
  z['i' - 'a'] = 1;
  for(a = 0; a < n; ++a) {
    cin >> s1 >> s2;
    cout << enc(dec(s1) + dec(s2)) << endl;
  }
  return 0;
}

string enc(int x) {
  int now, xx = x;
  string ans;
  for(int i = 0; i < 4; ++i) {
    now = xx % 10;
    xx /= 10;
    if(now == 0) continue;
    ans += ch[i];
    if(now == 1) continue;
    ans += '0' + now;
  }
  reverse(ans.begin(), ans.end());
  return ans;
}
int dec(string s) {
  int ans = 0;
  for(int i = 0; i < s.size(); ++i) {
    if(s[i] >= 'a' && s[i] <= 'z')
      ans += z[s[i] - 'a'];
    else
      ans += (s[i] - '0') * z[s[++i] - 'a'];
  }
  return ans;
}
