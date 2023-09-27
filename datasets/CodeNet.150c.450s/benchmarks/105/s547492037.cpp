#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define FOR(i, a, b) for(int i=(a);i<(b);++i)
#define rep(i, n) FOR(i, 0, n)
#define whole(x) (x).begin(),(x).end()
#define UNIQUE(v) v.erase(unique(v.begin(), v.end()), v.end())
using P = pair<int, int>;
#define debug(var) cerr << "[" << #var << "] " << var << endl
#define chmin(x, y) x = min(x, y)
#define chmax(x, y) x = max(x, y)
const ll mod = 1000000007;
const int dx[] = {-1,0,1,0};
const int dy[] = {0,-1,0,1};


int main(){
    int t;
    cin >> t;
    rep(ti, t) {
        int n;
        cin >> n;
        vector<ll> a(n);
        rep(i, n) cin >> a[i];
        string s;
        cin >> s;
        
        if (s[n-1]=='1') {
            cout << "1" << endl;
            continue;
        }
        
        vector<ll> v;
        int ans = 0;
        for (int i=n-1; i>=0; i--) {
            ll now = a[i];
            for (ll e: v) {
                chmin(now, now^e);
            }
            if (now>0) {
                if (s[i]=='1') {
                    ans = 1;
                    debug(i);
                    break;
                }
                v.push_back(now);
            }
        }
        cout << ans << endl;
    }

    
    return 0;
}
