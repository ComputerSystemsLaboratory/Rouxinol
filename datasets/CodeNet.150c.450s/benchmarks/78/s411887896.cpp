#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(void){
  int size;
  vector<ll> v(200);
  for(ll i=1;;i++){
    if((i*(i+1)*(i+2))/6 > 1000000) break;
    v[i-1] = (i*(i+1)*(i+2))/6;
    size = i-1;
  }
  int dp1[1000000]; // dp[i] := number of tetrahedron with value i
  int dp2[1000000]; // dp[i] := number of tetrahedron with value i
  fill(dp1, dp1+1000000+1, INT_MAX);
  fill(dp2, dp2+1000000+1, INT_MAX);
  dp1[0] = dp2[0] = 0;

  for(int i = 0; i <= 1000000; i++){
    for(int j = 0; j < size; j++){
      if(i+v[j] > 1000000) continue;
      dp1[i + v[j]] = min(dp1[i+v[j]], dp1[i]+1);
    }
  }


  for(int i = 0; i <= 1000000; i++){
    for(int j = 0; j < size; j++){
      if(i+v[j] > 1000000) continue;
      if(v[j] % 2 == 0) continue;
      dp2[i + v[j]] = min(dp2[i+v[j]], dp2[i]+1);
    }
  }

  while(1){
    int x; cin >> x;
    if(x == 0) break;
    int ans = 0;
    cout << dp1[x] << " ";
    cout << dp2[x] << endl;
  }
  return 0;
}