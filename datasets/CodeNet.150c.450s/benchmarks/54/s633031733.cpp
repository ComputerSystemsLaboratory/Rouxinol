/*
 * a.cc: 
 */

#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
#include<stack>
#include<list>
#include<queue>
#include<deque>
#include<algorithm>
#include<numeric>
#include<utility>
#include<complex>
#include<functional>

using namespace std;

/* constant */

/* typedef */

/* global variables */

/* subroutines */

/* main */

int main() {
  string w;
  cin >> w;

  int wn = w.size();
  for (int i = 0; i < wn; i++)
    if (w[i] >= 'A' && w[i] <= 'Z') w[i] += 'a' - 'A';
  //cout << w << endl;
  
  int cnt = 0;

  for (;;) {
    string s;
    cin >> s;
    if (s == "END_OF_TEXT") break;

    if (s.size() != wn) continue;

    bool ok = true;
    for (int i = 0; i < wn; i++) {
      char ch = (s[i] >= 'A' && s[i] <= 'Z') ? s[i] - 'A' + 'a' : s[i];
      if (w[i] != ch) {
	ok = false;
	break;
      }
    }

    if (ok) cnt++;
  }

  printf("%d\n", cnt);
  return 0;
}