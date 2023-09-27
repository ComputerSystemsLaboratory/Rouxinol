#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define REP(i,n) FOR(i,0,n)
#define ALL(v) (v).begin(),(v).end()
#define fi first
#define se second
template<typename A, typename B> inline bool chmax(A &a, B b) { if (a<b) { a=b; return 1 ; } return 0; }
template<typename A, typename B> inline bool chmin(A &a, B b) { if (a>b) { a=b; return 1 ; } return 0; }
typedef long long ll;
typedef pair<int, int> pii;
const ll INF = 1e9+100;
const bool debug = 0;
/***************************************/

int M, Nmi, Nma;
int P[200];

int main() {
  while (cin >> M >> Nmi >> Nma, M || Nmi || Nma) {
    REP(i, M) scanf("%d", P + i);
    if (debug) putchar('@');

    pii ans(0, 0); // ギャップ, 人数

    FOR(i, Nmi - 1, Nma) {
      chmax(ans, pii(P[i]-P[i+1], i + 1));
    }

    cout << ans.se << endl;
  }
  return 0;
}
