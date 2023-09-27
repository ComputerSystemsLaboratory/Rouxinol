#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
#define REP(i,n) for (int i = 1; i < (int)(n); i++)
template<class T> bool chmin(T &a, T b) {if(a>b) {a=b;return 1;}return 0;}
using namespace std;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
using P = pair<int,int>;
const ll inf = 1e18;
const int mod = 1e5;
const int MAX = 1e6;

int main() {
    while (true) {
        int n; cin >> n;
        if (n == 0) break;
        vint c(24*60*60+2,0);
        rep(i,n) {
            string s, g; cin >> s >> g;
            int s_h = (s[0]-'0')*10+(s[1]-'0');
            int s_m = (s[3]-'0')*10+(s[4]-'0');
            int s_s = (s[6]-'0')*10+(s[7]-'0');
            int s_t = s_h*3600+s_m*60+s_s;
            int g_h = (g[0]-'0')*10+(g[1]-'0');
            int g_m = (g[3]-'0')*10+(g[4]-'0');
            int g_s = (g[6]-'0')*10+(g[7]-'0');
            int g_t = g_h*3600+g_m*60+g_s;
            c[s_t]++; c[g_t]--;
        }
        vint cover(24*60*60+1,0);
        rep(i,24*60*60+1) {
            if (i == 0) cover[i] = c[i];
            cover[i] = cover[i-1]+c[i];
        }
        int ans = 0;
        rep(i,24*60*60) ans = max(ans,cover[i]);
        cout << ans << endl;
    }
}
