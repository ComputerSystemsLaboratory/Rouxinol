#include <bits/stdc++.h>
#define rep(i,a,b) for (int i = a; i < b; i++)
#define REP(i,n) rep(i,0,n)
using namespace std;

int main() {
  int n;
  while (cin >> n, n) {
    vector<int> a(n);
    REP(i,n) cin >> a[i];
    sort(a.begin(),a.end());
    int ans = 1000010;
    REP(i,n-1) ans = min(ans,a[i+1]-a[i]);
    cout << ans << endl;
  }
}
