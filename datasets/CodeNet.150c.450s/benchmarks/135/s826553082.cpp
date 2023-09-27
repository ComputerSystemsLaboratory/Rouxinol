#include <iostream>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int N, M, H[2000], W[2000];
int h[2000000], w[2000000];

int main(void) {
  while(cin >> N >> M, N && M) {
    H[0] = W[0] = 0;
    REP(i, 1, N + 1) cin >> H[i];
    REP(i, 1, M + 1) cin >> W[i];
    REP(i, 0, N + 1) H[i + 1] += H[i];
    REP(i, 0, M + 1) W[i + 1] += W[i];

    REP(i, 0, 2000000) h[i] = w[i] = 0;
    REP(i, 0, N + 1) REP(j, i + 1, N + 1) h[H[j] - H[i]]++;
    REP(i, 0, M + 1) REP(j, i + 1, M + 1) w[W[j] - W[i]]++;

    int ans = 0;
    REP(i, 1, 2000000) ans += h[i] * w[i];
    cout << ans << endl;
  }

  return 0;
}