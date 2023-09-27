#include <bits/stdc++.h>
using namespace std;
#define int long long
const int INF = 1e9;

signed main(){
  int N; cin >> N;
  vector<int> a(N);
  for(int i = 0; i < N; i++) cin >> a[i];
  vector<int> dp(N, INF);
  for(int i = 0; i < N; i++){
    *lower_bound(dp.begin(), dp.end(), a[i]) = a[i];
  }
  int ans = lower_bound(dp.begin(), dp.end(), INF) - dp.begin();
  cout << ans << endl;
}
