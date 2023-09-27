#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<set>
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

const int MAX_N = 10000;

/* typedef */

typedef vector<int> vi;
typedef pair<int,int> pii;

/* global variables */

int n;
pii tbl[MAX_N];

/* subroutines */

int hms2s(string hms) {
  int h = (hms[0] - '0') * 10 + hms[1] - '0';
  int m = (hms[3] - '0') * 10 + hms[4] - '0';
  int s = (hms[6] - '0') * 10 + hms[7] - '0';
  return h * 3600 + m * 60 + s;
}

/* main */

int main() {
  for (;;) {
    cin >> n;
    if (n == 0) break;

    for (int i = 0; i < n; i++) {
      string shms, ghms;
      cin >> shms >> ghms;
      tbl[i].first = hms2s(shms);
      tbl[i].second = hms2s(ghms);
    }
    sort(tbl, tbl + n);
    
    priority_queue<int,vi,greater<int> > q;
    int wt = 0;

    for (int i = 0; i < n; i++) {
      int st = tbl[i].first;
      int gt = tbl[i].second;

      while (! q.empty() && q.top() <= st)
	q.pop(), wt++;

      if (wt > 0) wt--;
      q.push(gt);
    }

    cout << wt + q.size() << endl;
  }

  return 0;
}