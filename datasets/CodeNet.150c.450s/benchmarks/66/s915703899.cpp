#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int n, m;

int main() {
    cin >> n;
    set<string> U;
    for(int i = 0; i < n; ++i) {
        string s; cin >> s;
        U.insert(s);
    }
    cin >> m;
    int cnt = 0;
    for(int i = 0; i < m; ++i) {
        string t; cin >> t;
        if(U.find(t) != U.end()) {
            if(cnt == 0) {
                cout << "Opened by " << t << endl;
            }else {
                cout << "Closed by " << t << endl;
            }
            cnt = (cnt+1)%2;
        }else {
            cout << "Unknown " << t << endl;
        }
    }

}
