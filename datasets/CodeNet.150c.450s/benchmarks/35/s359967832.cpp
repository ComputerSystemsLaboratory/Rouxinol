#include <bits/stdc++.h>
#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;
using ll = long long;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);
  while(1) {
    int n;
    cin >> n;
    if(n == 0) break;
    vector<int> a(n);
    REP(i, n) cin >> a[i];
    int ans = -1000000000;
    //るいせきわ
    vector<int> R(n + 1);
    R[0] = 0;
    
    for(int i = 0; i < n; i++) {
      R[i + 1] = R[i] + a[i];
    }

    for(int l = 0; l < n; l++) {
      for(int r = l; r < n; r++) {
        int temp = R[r + 1] - R[l];
        ans = max(ans, temp);
      }
    }

    cout << ans << endl;
  }
  return 0;
}
