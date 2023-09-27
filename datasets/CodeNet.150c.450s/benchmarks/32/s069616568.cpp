#include <bits/stdc++.h>
#define rep(i, a, n) for(int i = a; i < n; i++)
#define repp(i, n) rep(i, 0, n)
#define repb(i, a, b) for(int i = a; i >= b; i--)
#define all(a) a.begin(), a.end()
#define int long long
using namespace std;

signed main(){
    int m, Nmin, Nmax;
    while(1){
        cin >> m >> Nmin >> Nmax;
        if(m + Nmin + Nmax == 0) break;
        vector<int> d(m);
        rep(i, 0, m){
            cin >> d[i];
        }
        sort(all(d));
        reverse(all(d));
        int MAX = 0, ans = -1;
        rep(i, Nmin, Nmax + 1){
            int diff = d[i - 1] - d[i];
            if(MAX <= diff){
                MAX = diff;
                ans = i;
            }
        }
        cout << ans << endl;
    }
}