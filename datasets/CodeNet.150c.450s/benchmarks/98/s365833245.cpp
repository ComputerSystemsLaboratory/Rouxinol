/*
 *
 *
 */

#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for(int i = (int)(a); i < (int)(b); ++i)
#define REP(i, n) for(int i = 0; i < (int)(n); ++i)
#define RREP(i, n) for(int i = (int)(n - 1); i >= 0; --i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e) != (s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SQ(n) (n) * (n)

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

int main() {
  int n, m;
  while(cin >> n >> m, n) {
    vi carda(n);
    vi cardb(m);
    REP(i, n) cin >> carda[i];
    REP(i, m) cin >> cardb[i];
    int suma = accumulate(ALL(carda), 0);
    int sumb = accumulate(ALL(cardb), 0);

    int a = 100000, b = 100000;

    REP(i, n){
      REP(j, m){
        if (suma - carda[i] * 2 + cardb[j] * 2 == sumb) {
          if (a + b > carda[i] + cardb[j]) {
            a = carda[i];
            b = cardb[j];
          }
        }
      }
    }
    if (a == 100000)
      cout << -1 << endl;
    else{
      cout << a << ' ' << b << endl;
    }
  }
}