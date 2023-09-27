#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

const int INF = 1e9;

int n;

int main() {
    while(1) {
        cin >> n;
        if(n == 0) break;
        vector<int> a(n, 0);
        for(int i = 0; i < n; ++i) cin >> a[i];
        int ans = INF;
        for(int i = 0; i < n; ++i) {
            for(int j = i+1; j < n; ++j) {
                chmin(ans, abs(a[i]-a[j]));
            }
        }
        cout << ans << endl;
    }
}
