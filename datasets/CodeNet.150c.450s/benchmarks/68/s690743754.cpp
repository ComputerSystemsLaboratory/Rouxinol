#include <iostream>
#include <algorithm>
#define REP(i, a, n) for(int i = ((int) a); i < ((int) n); i++)
#define INF 100000000
using namespace std;

int N, A[1000000];

int main(void) {
  while(cin >> N, N) {
    REP(i, 0, N) cin >> A[i];
    sort(A, A + N);

    int ans = INF;
    REP(i, 0, N - 1) ans = min(ans, A[i + 1] - A[i]);
    cout << ans << endl;
  }

  return 0;
}