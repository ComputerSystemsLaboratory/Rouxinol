#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  int ans = -2e9, mn = 2e9;
  cin >> n;
  for(int i = 0; i < n; i++){
    int t; cin >> t;
    ans = max(ans, t - mn);
    mn = min(mn, t);
  }
  cout << ans << endl;
  return 0;
}