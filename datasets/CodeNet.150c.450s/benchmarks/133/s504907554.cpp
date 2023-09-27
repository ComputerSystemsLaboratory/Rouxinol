#include <stdint.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <deque>
#include <functional>
#include <iomanip>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned int uint;
typedef unsigned long long ull;
static const double EPS = 1e-12;
static const double PI = acos(-1.0);
static const ll MOD = 1000000007;

#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(a) (a).begin(), (a).end()
#define DEBUG(x) cout << #x << ": " << x << endl

void solve(long long D, std::vector<long long> c, std::vector<std::vector<long long>> s, std::vector<long long> t) {
  vector<set<ll>> last(26);
  REP(j, 26) {
    last[j].insert(0);
  }
  ll score = 0;
  REP(d, D) {
    ll i = t[d] - 1;
    score += s[d][i];
    last[i].insert(d + 1);
    REP(j, 26) {
      score -= c[j] * (d + 1 - *last[j].rbegin());
    }
    cout << score << endl;
  }
}

int main() {
  long long D;
  scanf("%lld", &D);
  std::vector<long long> c(26);
  for (int i = 0; i < 26; i++) {
    scanf("%lld", &c[i]);
  }
  std::vector<std::vector<long long>> s(D, std::vector<long long>(26));
  for (int i = 0; i < D; i++) {
    for (int j = 0; j < 26; j++) {
      scanf("%lld", &s[i][j]);
    }
  }
  std::vector<long long> t(D);
  for (int i = 0; i < D; i++) {
    scanf("%lld", &t[i]);
  }
  solve(D, std::move(c), std::move(s), std::move(t));
  return 0;
}
