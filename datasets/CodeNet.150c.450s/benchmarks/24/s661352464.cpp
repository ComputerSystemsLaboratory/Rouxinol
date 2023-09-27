#include <iostream>
#include <algorithm>
#define REP(i, a, n) for(int i = ((int) a); i < ((int) n); i++)
#define fi first
#define se second
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pll;

ll N, M;
pll R[20000];


int main(void) {
  while(cin >> N >> M, N || M) {
    REP(i, 0, N) cin >> R[i].se >> R[i].fi;
    sort(R, R + N);
    reverse(R, R + N);
    ll ans = 0;
    REP(i, 0, N) {
      if(M > 0) {
        if(M >= R[i].se) {
          M -= R[i].se;
        } else {
          ans += R[i].fi * (R[i].se - M);
          M = 0;
        }
      } else {
        ans += R[i].fi * R[i].se;
      }
    }
    cout << ans << endl;
  }

  return 0;
}