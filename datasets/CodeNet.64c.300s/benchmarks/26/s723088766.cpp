#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cassert>
#include <string>
#include <cstring>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;

// ---------------------
// repetition
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)

// debug
#define dump(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;

// ---------------------
#define INF 922337203685477580
#define IINF (1<<21)
typedef long long ll;

ll power(ll x, ll y) {  // return x^y
  if (y == 0) return 1;
  if (y == 1) return x;

  return (power(x * x % 1000000007, y / 2) % 1000000007) * (power(x, y % 2) % 1000000007);
}

int main() {
  ll m, n;
  cin >> m >> n;

  cout << power(m, n) % 1000000007 << endl;
  return 0;
}