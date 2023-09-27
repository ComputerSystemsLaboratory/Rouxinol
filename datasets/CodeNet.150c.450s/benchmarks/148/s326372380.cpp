#include <bits/stdc++.h>
using namespace std;

int main(void) {
  int n, ac = 0, wa = 0, tle = 0, re = 0;
  cin >> n;
  string s;
  for(int i = 0; i < n; i++) {
    cin >> s;
    if (s == "AC") ac++;
    else if (s == "WA") wa++;
    else if (s == "TLE") tle++;
    else re++;
  }
  cout << "AC x " << ac << '\n';
  cout << "WA x " << wa << '\n';
  cout << "TLE x " << tle << '\n';
  cout << "RE x " << re << '\n';
}