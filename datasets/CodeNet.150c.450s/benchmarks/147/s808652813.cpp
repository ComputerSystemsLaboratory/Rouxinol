#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> P;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define repr(i, l, r) for (int i = l; i <= (int)(r); i++)
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
#define all(v) v.begin(), v.end()
#define MOD (int) (1e9+7)
#define INF (int) 1e9
#define LLINF (ll) 1e18

int ans[10005];

int main(){
    int n; cin >> n;

    for (int x = 1; x <= 105; x++){
        for (int y = 1; y <= 105; y++){
            for (int z = 1; z <= 105; z++){
                int s = x*x + y*y + z*z + x*y + y*z + z*x;
                if(s<10003) ans[s]++;
            }
        }
    }

    repr(i, 1, n){
        cout << ans[i] << endl;
    }
    
    return 0;
}