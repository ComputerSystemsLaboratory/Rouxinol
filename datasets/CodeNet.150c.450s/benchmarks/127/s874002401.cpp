#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
#include <cstring>
using namespace std;
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)
#define CLR(mat) memset(mat, 0, sizeof(mat))
typedef long long ll;

int main()
{
  int m; cin >> m;
  while(m--) {
    string s; cin >> s;
    set<string> cnt;
    FOR(i,1,s.length()) {
      string fr = s.substr(0, i);
      string bc = s.substr(i, s.length() - i);
      string re_fr = fr;
      string re_bc = bc;
      reverse(re_fr.begin(), re_fr.end());
      reverse(re_bc.begin(), re_bc.end());
      cnt.insert(fr + bc);
      cnt.insert(fr + re_bc);
      cnt.insert(re_fr + bc);
      cnt.insert(re_fr + re_bc);
      cnt.insert(bc + fr);
      cnt.insert(bc + re_fr);
      cnt.insert(re_bc + fr);
      cnt.insert(re_bc + re_fr);
    }
    cout << cnt.size() << endl;
  }
  return 0;
}