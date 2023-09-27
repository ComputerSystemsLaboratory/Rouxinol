#include <iostream>
#include <algorithm>
#define REP(i, a, n) for(int i = (a); i < (n); i++)
#define fi first
#define se second
using namespace std;
typedef pair<int, int> pii;

int N;

int input() {
  string S;
  cin >> S;
  int h, m, s;
  h = (S[0] - '0') * 10 + (S[1] - '0');
  m = (S[3] - '0') * 10 + (S[4] - '0');
  s = (S[6] - '0') * 10 + (S[7] - '0');
  return h * 3600 + m * 60 + s;
}

int main(void) {
  while(cin >> N, N) {
    pii T[20000];
    REP(i, 0, N) {
      T[i * 2] = pii(input(), 1);
      T[i * 2 + 1] = pii(input(), 0);
    }

    sort(T, T + N * 2);

    // REP(i, 0, N * 2) {
    //   cout << T[i].fi << " " << T[i].se << endl;
    // }
    // cout << endl;

    int ans = 0, cnt = 0;
    REP(i, 0, N * 2) {
      if(T[i].se == 0) cnt--;
      if(T[i].se == 1) cnt++;
      ans = max(ans, cnt);
    }
    cout << ans << endl;
  }
  return 0;
}