#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int n, a, b, c, x;

int main() {
    while(1) {
        cin >> n >> a >> b >> c >> x;
        if(n == 0 && a == 0 && b == 0 && c == 0 && x ==0) break;
        vector<int> y(n, 0);
        for(int i = 0; i < n; ++i) cin >> y[i];
        int ans = -1;
        int now = 0;
        for(int i = 0; i <= 10000; ++i) {
            if(i == 0) {
                if(x == y[now]) now++;
            }else {
                int ch = (a*x + b) % c;
                if(ch == y[now]) now++;
                x = ch;
            }
            if(now == n) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
}
