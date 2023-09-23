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

const int N = 1e6;
bool sieve[N + 1];

int main() {
  sieve[0] = sieve[1] = true;
  FOR(i, 2, N + 1){
    if (sieve[i]) continue;
    for(int j = i * 2; j < N  + 1; j += i) {
      sieve[j] = true;
    }
  }

  int a, d, n;
  while(cin >> a >> d >> n, a | d | n) {
    int cnt = 0;
    int m = 0;
    while(cnt < n) {
      if (!sieve[a + d * m]) cnt++;
      m++;
    }
    m--;
    cout << a + d * m << endl;
  }
}