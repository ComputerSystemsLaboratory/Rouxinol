#include <bits/stdc++.h>
using namespace std;

#define REP(i,n) for(int i=0;i<n;++i)

int main() {
  string s, p;
  cin >> s >> p;

  s += s;
  while (p.length() >  s.length()) s += s;

  cout << ((s.find(p) != string::npos) ? "Yes" : "No") << endl;

  return 0;
}