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
typedef vector<pii> vpi;
typedef vector<pll> vpl;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;



int main() {
  int n;
  int h1, h2, m1, m2, s1, s2;
  while(cin >> n, n){
    vi cnt(24 * 60 * 60, 0);
    REP(i, n){
      scanf("%2d:%2d:%2d %2d:%2d:%2d", &h1, &m1, &s1, &h2, &m2, &s2);
      int first = h1 * 60 * 60 + m1 * 60 + s1;
      int second = h2 * 60 * 60 + m2 * 60 + s2;
      FOR(t, first, second){
        cnt[t]++;
      }
    }

    cout << *max_element(ALL(cnt)) << endl;
  }
}