/*
 * b.cc: 
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

typedef pair<string,int> psi;
typedef queue<psi> qpsi;

/* global variables */

/* subroutines */

/* main */

int main() {
  int n, qt;
  cin >> n >> qt;

  qpsi q;
  
  for (int i = 0; i < n; i++) {
    string nmi;
    int ti;
    cin >> nmi >> ti;
    q.push(psi(nmi, ti));
  }

  int t = 0;
  
  while (! q.empty()) {
    psi u = q.front(); q.pop();
    string &un = u.first;
    int &ut = u.second;

    if (ut <= qt) {
      t += ut;
      cout << un << ' ' << t << endl;
    }
    else {
      t += qt;
      ut -= qt;
      q.push(u);
    }
  }

  return 0;
}