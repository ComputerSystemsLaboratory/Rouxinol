#include <bits/stdc++.h>
using namespace std;

int main(void){
  ios::sync_with_stdio(false);
  cin.tie(0);
  int e;
  while(cin >> e, e){
    int x, y, z;
    int ans = INT_MAX;
    for(z = 0; z*z*z <= e; z++){
      y = sqrt(e-pow(z, 3));
      x = e - pow(z, 3) - pow(y,2);
      ans = min(ans, x+y+z);
    }
    cout << ans << endl;
  }
  return 0;
}