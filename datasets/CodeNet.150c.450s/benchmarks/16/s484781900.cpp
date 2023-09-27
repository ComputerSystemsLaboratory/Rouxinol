/*
 * d.cc: 
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

const int MAX_N = 20000;

/* typedef */

typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
typedef pair<char,int> pci;
typedef stack<pci> spci;

/* global variables */

int as[MAX_N + 1], lis[MAX_N + 1];

/* subroutines */

/* main */

int main() {
  string s;
  cin >> s;

  int n = s.size();

  spci st;
  vpii rv;

  for (int i = 0; i < n; i++) {
    if (s[i] == '\\') 
      st.push(pci('\\', i));
    else if (s[i] == '/') {
      if (! st.empty() && st.top().first == '\\') {
	pci u = st.top(); st.pop();
	rv.push_back(pii(u.second, i));
      }
      else
	st.push(pci('/', i));
    }
  }
  sort(rv.begin(), rv.end());

  //for (int i = 0; i < rv.size(); i++)
  //printf("%d,%d\n", rv[i].first, rv[i].second);

  int pri = -1, ar = 0, sum = 0;
  vi ars;

  for (int i = 0; i < rv.size(); i++) {
    int &li = rv[i].first, &ri = rv[i].second;
    if (pri < li) {
      if (ar > 0) ars.push_back(ar);
      ar = 0;
      pri = ri;
    }

    int d = ri - li;
    ar += d;
    sum += d;
  }
  if (ar > 0) ars.push_back(ar);

  printf("%d\n%lu", sum, ars.size());
  for (int i = 0; i < ars.size(); i++) printf(" %d", ars[i]);
  putchar('\n');
  return 0;
}