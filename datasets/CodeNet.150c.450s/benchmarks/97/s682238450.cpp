#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for(int i = (int)(a); i < (int)(b); ++i)
#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SQ(n) (n) * (n)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int dx[] = {-1, 0, 1, 0};
int dy[] = {0, 1, 0, -1};

int main() {
  int N;

  while(cin >> N, N) {
    vector<pii> p(N);
    int ax = 0, ix = 0, ay = 0, iy = 0;
    REP(i, N - 1){
      int n, d;
      cin >> n >> d;
      p[i + 1].first = p[n].first + dx[d];
      p[i + 1].second = p[n].second + dy[d];
      ax = max(ax, p[i + 1].first);
      ix = min(ix, p[i + 1].first);
      ay = max(ay, p[i + 1].second);
      iy = min(iy, p[i + 1].second);
    }
    printf("%d %d\n", ax - ix + 1, ay - iy + 1);
  }
}