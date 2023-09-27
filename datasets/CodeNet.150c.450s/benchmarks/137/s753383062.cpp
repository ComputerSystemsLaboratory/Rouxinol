/*
 * c.cc: 
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

const int MAX_SN = 12;

/* typedef */

typedef long long ll;
typedef set<ll> sll;

/* global variables */

/* subroutines */

ll s2i(string &s) {
  int n = s.size();
  ll bits = 0;
  for (int i = 0; i < n; i++) {
    ll d;
    switch(s[i]) {
    case 'A': d = 1; break;
    case 'C': d = 2; break;
    case 'G': d = 3; break;
    case 'T': d = 4; break;
    }
    bits |= (d << (i * 3));
  }
  return bits;
}

/* main */

int main() {
  int n;
  cin >> n;

  sll dict;
  
  while (n--) {
    string op, s;
    cin >> op >> s;

    ll bits = s2i(s);
    if (op == "insert") dict.insert(bits);
    else if (op == "find")
      cout << ((dict.find(bits) != dict.end()) ? "yes" : "no") << endl;
  }
  return 0;
}