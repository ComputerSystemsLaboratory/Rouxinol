#include <bits/stdc++.h>
using namespace std;

const double pi  = 2 * acos(0.0);
const double eps = 1e-8;

#define REP(i,a,b) for(int i=(a); i<(b);++i)
#define rep(i,n) REP(i,0,n)
#define INF (1<<29)
#define INFLL (1LL<<61)

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int dx[8] = {0, 1, 0, -1, 1, -1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, -1, -1, 1};

int main(void) {
  ios_base::sync_with_stdio(false); cin.tie(0);
  int N;
  int C[] = {500, 100, 50, 10, 5, 1};
  while (cin >> N, N) {
    int rem = 1000 - N;
    int ans = 0;
    int i = 0;
    while (rem)  {
      if (rem >= C[i]) {
        ans += rem / C[i];
        rem -= (rem / C[i]) * C[i];
      }
      i += 1;
    }
    cout << ans << endl;
  }
  return 0; 
}