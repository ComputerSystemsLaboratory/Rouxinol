#include <iostream>
#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

#define mp make_pair
#define pb push_back
#define ll long long

//#define debug(x) ;
#define debug(x) cerr << #x << " = " << x << "\n";

ostream& operator<<(ostream& cerr, vector<ll> aux) {
  cerr << "[";
  for (auto e : aux) cerr << e << ' ';
  cerr << "]";
  return cerr;
}

const int maxN = 211;
const int maxBit = 60;

int n, t;
ll a[maxN];
char s[maxN];

ll curr[maxBit + 1];
ll reduced;

int reduce(ll val) {
  for (int i = maxBit; i >= 0; i--) {
    if (((val >> i) & 1) == 0) continue;
    if (curr[i] == 0) {
      reduced = val;
      return i;
    }
    val ^= curr[i];
  }
  return -1;
}

int solve() {
  memset(curr, 0, sizeof(curr));

  for (int i = n - 1; i >= 0; i--) {
    int lastBit = reduce(a[i]);
    if (lastBit == -1) continue;
    
    if (s[i] == '0') {
      curr[lastBit] = reduced;
    } else {
      return 1;
    }
  }

  return 0;
}

int main()
{
  //freopen("test.in", "r", stdin);

  scanf("%d", &t);
  for (int ti = 1; ti <= t; ti++) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%lld", &a[i]);
    scanf("\n%s", s);

    printf("%d\n", solve());
  }


  return 0;
}
