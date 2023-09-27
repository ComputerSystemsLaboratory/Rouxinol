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
        vector<ll> A(N);
        vector<ll> dp;
        rep(i, N) cin >> A[i];
        string S; cin >> S;
        rnr(i, N - 1, 0) {
            ll v = A[i];
            for(auto x : dp) {
                v = min(v, x ^ v);
                //重複しているbitを省く
                //もしA[i]がdpに含まれるならv = 0
            }
            //v not equal 0 -> A_i do not include in dp
            if(v) {
                if(S[i] == '1') {
                    ans.pb(1);
                    break;
                }
                dp.pb(v);
            }
        }
        if(ans.size() < t + 1) ans.pb(0);
    }
    rep(i, T)
        cout << ans[i] << endl;
}
