#include<bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(),(x).end()
const long long mod = 1e9+7;
//////////////////////////////////

int main() {
  int n; cin >> n;
  vector<int> ans(n+1, 0);
  for(int x=1; x*x<n; x++) {
    for(int y=1; y*y<n; y++) {
      for(int z=1; z*z<n; z++) {
        int s = x*x + y*y + z*z + x*y + y*z + z*x;
        if (s <= n) {
          ans[s]++;
        }
      }
    }
  }
  
  for(int i=1; i<=n; i++) {
    cout << ans[i] << endl;
  }

  return 0;
}

// EOF