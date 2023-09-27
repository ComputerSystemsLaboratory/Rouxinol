#include <iostream>
#include <map>
#include <string>
using namespace std;
int main() {
  map<string, int> m;
  string s, t, u;
  int n, k = 0, l = 0;
  while (cin >> s) {
    if (s.size() > l) {
      l = s.size();
      u = s;
    }
    m[s]++;
    if (m[s] > k) {
      k = m[s];
      t = s;
    }
  }
  cout << t << ' ' << u << endl;
  return 0;
}