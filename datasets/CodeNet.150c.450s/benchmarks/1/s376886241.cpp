#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i = 0; i < (int)n; i++)
using ll = long long;

int LIS(vector<int> &a) {
  const int INF = 2e9;
  int l = a.size();
  vector<int> dp(l, INF);
  rep(i,l) *lower_bound(dp.begin(),dp.end(),a[i]) = a[i];
  return lower_bound(dp.begin(),dp.end(),INF) - dp.begin();
}

int main(){
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i,n) cin >> a[i];
  cout << LIS(a) << endl;
  return 0;
}
