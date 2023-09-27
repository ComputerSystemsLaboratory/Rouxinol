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
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
template<class T> using vv=vector<vector< T > >;

int main() {
  int n;
  vi a;
  cin >> n;
  for (int i = 0 ; i < n ; i++) {
    int tmp;
    cin >> tmp;
    a.pb(tmp);
  }
  vi l;
  l.pb(a[0]);
  for (int i = 1 ; i < n ; i++) {
    if (l[l.size()-1] < a[i]) {
      l.pb(a[i]);
    } else {
      *lower_bound(begin(l), end(l), a[i]) = a[i];
    }
  }

  printf("%lu\n", l.size());

  return 0;
}