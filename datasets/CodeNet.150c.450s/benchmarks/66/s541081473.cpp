/*
 * 2440.cc: Kagisys
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

typedef map<string,int> msi;

/* global variables */

msi us;

/* subroutines */

/* main */

int main() {
  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string ui;
    cin >> ui;
    us[ui] = i;
  }

  int m;
  cin >> m;

  bool dr = false;

  while (m--) {
    string ti;
    cin >> ti;

    msi::iterator mit = us.find(ti);
    if (mit == us.end()) cout << "Unknown " << ti << endl;
    else {
      dr = ! dr;
      string stat = dr ? "Opened" : "Closed";
      cout << stat << " by " << ti << endl;
    }
  }
  
  return 0;
}