#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vll>;
using vc = vector<char>;
using vvc = vector<vc>;
using pll = pair<ll, ll>;
using stkll = vector<pll>;
const ll INF = 1LL << 60;
const ll MOD = 1e9 + 7;
#define rep(i, n) for (ll i = 0; i < (n); i++)
#define debug(x) cerr << #x << ": " << x << endl;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}

int main() {
    ll H;
    while(cin >> H) {
        if(H == 0) return 0;

        vvll c(20, vll(5, 0));

        rep(i, H) rep(j, 5) cin >> c[H-1-i][j];

        ll ans = 0;
        bool end = false;

        while(!end) {
            vector<vector<bool>> blank(20, vector<bool>(5, false));
            end = true;

            rep(i, H) {
                ll left = 0, right = 0, cnt = 1;
                for(ll j = 1; j < 5; j++) {
                    if(c[i][j-1] == c[i][j] && c[i][j] != 0) {
                        cnt++;
                        right = j;
                        if(j == 4 && cnt >= 3) {
                            ans += c[i][j] * cnt;
                            end = false;
                        }
                    }
                    else {
                        if(cnt >= 3) {
                            ans += c[i][j-1] * cnt;
                            end = false;
                            break;
                        }
                        else {
                            left = right = j;
                            cnt = 1;
                        }
                    }
                }
                if(cnt >= 3) for(ll k = left; k <= right; k++) blank[i][k] = true;
            }

            rep(j, 5) rep(i, H) {
                ll k = i;
                while(blank[k][j]) {
                    k++;
                }
                c[i][j] = c[k][j];
                if(c[k][j] != 0) blank[k][j] = true;
            }
        }
        cout << ans << endl;
    }
}

