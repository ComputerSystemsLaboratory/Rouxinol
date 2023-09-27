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
        int n, m;
        cin >> n >> m;
        if(n + m == 0) break;
        vector<int> h(n + 1), w(m + 1);
        rep(i, 1, n + 1) cin >> h[i];
        rep(i, 1, m + 1) cin >> w[i];
        rep(i, 1, n + 1) h[i] += h[i - 1];
        rep(i, 1, m + 1) w[i] += w[i - 1];
        vector<int> hh, ww;
        rep(i, 0, n + 1){
            rep(j, i + 1, n + 1){
                hh. push_back(h[j] - h[i]);
            }
        }
        rep(i, 0, m + 1){
            rep(j, i + 1, m + 1){
                ww. push_back(w[j] - w[i]);
            }
        }
        sort(all(hh));
        sort(all(ww));
        int ans = 0;
        rep(i, 0, hh.size()){
            int id = upper_bound(all(ww), hh[i]) - lower_bound(all(ww), hh[i]);
            ans += id;
        }
        cout << ans << endl;
    }
}