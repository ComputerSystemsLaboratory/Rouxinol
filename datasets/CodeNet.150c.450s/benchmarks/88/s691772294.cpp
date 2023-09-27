#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
#define pb(v) push_back(v)
#define mp(x, y) make_pair(x, y)
#define fi first
#define se second
#define print(var)  do{ cout << #var << " : "; view(var); } while(0)
template<typename T> void view(T e){cout << e << endl;}
template<typename T> void view(const vector<T>& v){for(const auto& e : v){ cout << e << " "; } cout << endl;}
template<typename T> void view(const vector<vector<T> >& vv){ for(const auto& v : vv){ view(v); } }
using ll = long long;
using vi = vector<int>;
using vl = vector<ll>;
using P = pair<int ,int>;
using Graph = vector<vector<int>>;
const int INF = 1e9;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int h, w; cin >> h >> w;
        if (h+w==0) break;

        int hw = h*h + w*w;

        int cur = INF;
        int minh = INF;
        P ans = P(INF, INF);
        FOR(i, 1, 151) FOR(j, i+1, 151) {
            int tmp = i*i+j*j;

            // tmp が hwより大きいとき
            if (tmp>hw || (tmp==hw&&i>h)) {
                // tmp が curより小さい時
                if (tmp<cur || (tmp==cur&&i<minh)) {
                    cur = tmp;
                    minh = i;
                    ans = P(i, j);
                }
            }
        }

        cout << ans.fi << " " << ans.se << endl;
    }
}
