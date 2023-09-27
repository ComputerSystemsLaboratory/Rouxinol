#include<bits/stdc++.h>

#define fi first
#define se second
#define show(x) cerr << #x << "=" << "\n"
typedef long long ll;
typedef unsigned long long ull;

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.precision(10);
  cout << fixed;
#ifdef LOCAL_DEFINE
  FILE *stream1;
  //FILE *stream2;
  stream1 = freopen("in.txt", "r", stdin);
  //stream2 = freopen("out.txt", "w", stdout);
  if (stream1 == NULL) return 0;
  //if (stream2 == NULL) return 0;
#endif
  int n;
  while (cin >> n, n){
    int ans = 0;
    int state = 1; // up -> 1, down -> 0
    bool right_ok = 0, left_ok = 0;
    for (int i = 0; i < n; i++) {
      string s; cin >> s;
      if (s == "lu") {
        if (state == 1) left_ok = 1;
        else left_ok = 0;
      } else if (s == "ru") {
        if (state == 1) right_ok = 1;
        else right_ok = 0;
      } else if (s == "ld") {
        if (state == 0) left_ok = 1;
        else left_ok = 0;
      } else {
        if (state == 0) right_ok = 1;
        else right_ok = 0;
      }
      if (state == 1) {
        if (right_ok && left_ok) {
          state = 0;
          right_ok = 0;
          left_ok = 0;
          ans++;
        }
      } else {
        if (right_ok && left_ok) {
          state = 1;
          right_ok = 0;
          left_ok = 0;
          ans++;
        }
      }
    }
    cout << ans << endl;
  }
#ifdef LOCAL_DEFINE
  cerr << "Time elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s.\n";
  fclose(stream1);
  //fclose(stream2);
#endif
  return 0;
}
