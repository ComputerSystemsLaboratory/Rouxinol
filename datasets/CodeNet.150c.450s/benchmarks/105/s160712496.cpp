#include <bits/stdc++.h>
using namespace std;

#define leading __builtin_clzll

typedef long long ll;

const int MAXN = 2e2 + 5;

int N;
ll a[MAXN];
char s[MAXN];

void load() {
  scanf("%d", &N);
  for (int i = 0; i < N; i++)
    scanf("%lld", a + i);
  scanf("%s", s);
}

bool add(ll val, vector <ll> &basis) {
  vector <ll> nxt;
  bool added = false;
  for (auto it : basis) {
    if (val && !added) {
      if (leading(val) < leading(it)) {
        nxt.push_back(val);
        added = true;
      }
      else if (leading(val) == leading(it))
        val ^= it;
    }
    nxt.push_back(it);
  }
  if (val && !added) {
    nxt.push_back(val);
    added = true;
  }
  basis = nxt;
  return added;
}

int solve() {
  vector <ll> b;
  for (int i = N - 1; i >= 0; i--)
    if (add(a[i], b) && s[i] == '1') 
      return 1;
  return 0;
}

int main() {
  int tc;
  scanf("%d", &tc);
  while (tc--) {
    load();
    printf("%d\n", solve());
  }
  return 0;
}