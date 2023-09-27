#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cmath>
#include <iostream>
#include <functional>
#include <queue>
#include <string>
#include <map>
#include <vector>

using namespace std;

int main() {
  string s, f, l("");
  map<string, int> ws;
  getline(cin, s);
  s.push_back(' ');
  int b = -1;
  for (int i = 0; i < s.length(); i++) {
    if (b == -1 && s[i] != ' ')
      b = i;
    if (b >= 0 && s[i] == ' ') {
      ws[s.substr(b, i-b)]++;
      b = -1;
    }
  }
  int maxc = 0;
  for (map<string, int>::iterator it = ws.begin(); it != ws.end(); ++it) {
    if (it->first.length() > l.length())
      l = it->first;
    if (it->second > maxc) {
      f = it->first;
      maxc = it->second;
    }
  }
  cout << f << ' ' << l << endl;
  return 0;
}