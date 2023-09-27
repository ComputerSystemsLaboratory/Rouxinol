#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

#define pb push_back

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;

template<class T>
T min(T a, T b, T c) {
  T ret = min(a, b);
  ret = min(ret, c);
  return ret;
}

int levenshtein_distance(string a, string b) {
  if (a.length() == 0 && b.length() == 0) {
    return 0;
  }
  if (a.length() == 0) {
    return b.length();
  }
  if (b.length() == 0) {
    return a.length();
  }

  vvi d(a.length()+1, vi(b.length()+1));
  for (int ia = 1 ; ia <= a.length() ; ia++) {
    d[ia][0] = ia;
  }
  for (int ib = 1 ; ib <= b.length() ; ib++) {
    d[0][ib] = ib;
  }
  
  for (int ia = 1 ; ia <= a.length() ; ia++) {
    for (int ib = 1 ; ib <= b.length() ; ib++) {
      const int cost = (a[ia-1] == b[ib-1]) ? 0 : 1;
      d[ia][ib] = min(d[ia-1][ib]+1, d[ia][ib-1]+1, d[ia-1][ib-1]+cost);
    }
  }
  return d[a.length()][b.length()];
}

int main() {
  string a, b;
  cin >> a;
  cin >> b;

  printf("%d\n", levenshtein_distance(a, b));

  return 0;
}