#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<queue>
#include<deque>
#include<cmath>
#include<map>
#include<unordered_map>
#include<set>
#include<cstring>
#include<iomanip> //cout << fixed << setprecision(15) << x << endl;

using namespace std;
typedef long long ll;
const ll INF = 1e9 + 6;
const ll MOD = 1e9 + 7;
const ll LLINF = 1e18;
#define Pint pair<ll, ll>
#define rng(i,a,b) for(int i=int(a);i<int(b);i++)
#define rnr(i,a,b) for(int i=int(a);i>=int(b);i--)
#define rep(i,b) rng(i,0,b)
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(),(x).end()
/* -- template -- */

int main() {
    int T; cin >> T;
    vector<bool> ans;
    rep(t, T) {
        int N; cin >> N;
        vector<ll> a(N); rep(i, N) cin >> a[i];
        vector<ll> dp;
        string S; cin >> S;
        bool ok = 0;
        rnr(i, N - 1, 0) {
            ll v = a[i];
            for(ll x : dp)
                v = min(v, v ^ x);
            if(v) {
                if(S[i] == '1') {
                    ok = 1;
                    break;
                }
                dp.pb(v);
            }
        }
        ans.pb(ok);
    }
    rep(i, T) {
        cout << ans[i] << endl;
    }
}
