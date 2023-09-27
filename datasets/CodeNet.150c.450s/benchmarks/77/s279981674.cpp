#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define LOOP(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) LOOP(i, 0, n)
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define MAX_N 20
#define MAX_M 30

int main(void) {
  while (true) {
    int n;
    cin >> n;
    if (n == 0)
      break;
    int x[MAX_N], y[MAX_M];
    REP(i, n) cin >> x[i] >> y[i];
    int m;
    cin >> m;
    bool cnt[MAX_N];
    memset(cnt, false, sizeof(cnt));
    int mx = 10, my = 10;
    REP(i, m) {
      string dir;
      int dist;
      cin >> dir >> dist;
      if (dir == "N") {
        REP(i, n) {
          if (x[i] == mx && my + dist >= y[i] && my <= y[i])
            cnt[i] = true;
        }
        my += dist;
      } else if (dir == "E") {
        REP(i, n) {
          if (y[i] == my && mx + dist >= x[i] && mx <= x[i])
            cnt[i] = true;
        }
        mx += dist;
      } else if (dir == "S") {
        REP(i, n) {
          if (x[i] == mx && my - dist <= y[i] && my >= y[i])
            cnt[i] = true;
        }
        my -= dist;
      } else if (dir == "W") {
        REP(i, n) {
          if (y[i] == my && mx - dist <= x[i] && mx >= x[i])
            cnt[i] = true;
        }
        mx -= dist;
      }
    }

    bool flag = true;
    REP(i, n) if (!cnt[i]) flag = false;
    if (flag)
      cout << "Yes" << endl;
    else
      cout << "No" << endl;
  }

  return 0;
}