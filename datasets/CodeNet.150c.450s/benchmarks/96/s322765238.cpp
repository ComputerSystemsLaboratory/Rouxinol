#include <bits/stdc++.h>
using namespace std;
template <class T> inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T> inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return 1;
    }
    return 0;
}
using ll = long long;

#define ALL(v) (v).begin(), (v).end()
#define RALL(v) (v).rbegin(), (v).rend()
#define endl "\n"
const double EPS = 1e-7;
const int INF = 1 << 30;
const ll LLINF = 1LL << 60;
const double PI = acos(-1);
constexpr int MOD = 1000000007;
const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};

//-------------------------------------

vector<string> button = {
    "kakutei", " .,!?", "cab",  "fde", "igh",
    "ljk",     "omn",   "spqr", "vtu", "zwxy",
};

void solve() {
    string s, ans = "";
    cin >> s;
    vector<int> ncnt(10, 0);
    for(int i = 0; i < s.size(); i++) {
        int now = s[i] - '0';
        if(now == 0) {
            if(i == 0) {
                continue;
            }
            int pre = s[i - 1] - '0';
            if(pre == 0) {
                continue;
            }
            ans += button[pre][ncnt[pre]];
            ncnt.assign(10, 0);
        } else {
            ncnt[now] = (ncnt[now] + 1) % (int)button[now].size();
        }
    }
    cout << ans << endl;
};

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
