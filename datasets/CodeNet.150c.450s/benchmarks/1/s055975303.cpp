#include <bits/stdc++.h>
#define rep(i,n) for (int i = 0; i < (int)(n); i++)
template<class T> bool chmin(T &a, T b) {if(a>b) {a=b;return 1;}return 0;}
using namespace std;
using vint = vector<int>;
using vvint = vector<vector<int>>;
using ll = long long;
using vll = vector<ll>;
using vvll = vector<vector<ll>>;
const ll inf = 1e18;
const int mod = 10007;

int main() {
    int n;
    cin >> n;
    vint a(n);
    rep(i,n) cin >> a[i];
    vint dp;
    dp.push_back(-1);
    dp.push_back(a[0]);
    for (int i = 1; i < n; i++) {
        for (int j = dp.size()-1; j >= 0; j--) {
            if (dp[j] < a[i]) {
                dp.push_back(a[i]);
                break;
            }
            else if (dp[j] >= a[i] && dp[j-1] < a[i]) {
                dp[j] = a[i];
                break;
            }
        }
        // rep(i,dp.size()) cout << dp[i] << ' ';
        // cout << endl;
    }
    cout << dp.size() - 1 << endl;
}
