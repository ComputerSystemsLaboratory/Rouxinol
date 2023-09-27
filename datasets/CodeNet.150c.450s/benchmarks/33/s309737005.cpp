// 1192_TaxRateChanged.cpp
//
#include <bits/stdc++.h>
using namespace std;
const int MAX_S = 1010;
int x, y, s;
int p[MAX_S];
void solve() {
  memset(p, 0, sizeof(p));
  for(int i = 1; i < s; ++i)
    for(int j = 1; j < s; ++j)
      if(i*(100+x)/100 + j*(100+x)/100 == s) p[i] = i*(100+y)/100 + j*(100+y)/100;

  cout << *max_element(p, p + s) << endl;
}
int main() {
  while(cin >> x >> y >> s) {
    if(x == 0 && y == 0 && s == 0) break;
    solve();
  }
  return 0;
}

