#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define REP(i,s,n) for(int i=(int)(s);i<(int)(n);i++)
#define rep(i,n) REP(i, 0, n)
int main(){
    for(int n; cin >> n && n; ){
        int ans = INF;
        for(int z = 0; z * z * z <= n; z++)
          for(int y = 0; y * y + z * z * z <= n; y++){
              int x = n - (y * y + z * z * z);
              ans = min(ans, x + y + z);
          }
        cout << ans << endl;
    }
    return 0;
}