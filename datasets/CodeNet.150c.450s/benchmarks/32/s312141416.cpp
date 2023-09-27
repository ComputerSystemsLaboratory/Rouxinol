#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define o(a) cout << a << endl
#define int long long
#define fi first
#define se second
using namespace std;
typedef pair<int, int> P;

signed main(){
    while(1){
        int m, nmin, nmax;
        cin >> m >> nmin >> nmax;
        if(m + nmin + nmax == 0) break;
        vector<int> p(m);
        rep(i, 0, m){
            cin >> p[i];
        }
        int ans = 0, MAX = 0;
        rep(i, nmin, nmax + 1){
            int diff = p[i - 1] - p[i];
            if(diff >= MAX){
                MAX = diff;
                ans = i;
            }
        }
        cout << ans << endl;
    }
}