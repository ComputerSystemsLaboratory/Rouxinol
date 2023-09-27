#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
// #define LOG(...)
#define FOR(i, a, b) for(int i = (int)(a); i < (int)(b); ++i)
#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define RREP(i, n) for(int i = (int)(n - 1); i >= 0; --i)
#define RFOR(i, a, b) for(int i = (int)(b - 1); i >= (int)(a); --i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SQ(n) (n) * (n)
#define BIT(x, i) (((x) >> (i)) & 1)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vc> vvc;
typedef vector<vll> vvll;

const int INF = (int)1e9;

int main() {
  vi pollock;
  for(int i = 0, v; ( v = i * (i + 1) * (i + 2) / 6) <= 1000000; i++) {
    pollock.push_back(v);
  }

  vi dpall(1000001, INF);
  vi dpodd(1000001, INF);
  dpall[0] = dpodd[0] = 0;
  for (auto m : pollock) {
    for(int i = 0; i + m < dpall.size(); i++) {
      dpall[i + m] = min(dpall[i + m], dpall[i] + 1);
    }
    if (m % 2 == 1) {
      for(int i = 0; i + m < dpodd.size(); i++) {
        dpodd[i + m] = min(dpodd[i + m], dpodd[i] + 1);
      }
    }
  }

  int n;
  while(cin >> n, n) {
    printf("%d %d\n", dpall[n], dpodd[n]);
  }
}