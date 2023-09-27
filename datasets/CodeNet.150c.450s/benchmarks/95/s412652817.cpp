#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int n;

int main() {
    while(1) {
        cin >> n;
        if(n == 0) break;
        int l = 0, r = 0;
        int now = 0;
        int cnt = 0;
        for(int i = 0; i < n; ++i) {
            string s; cin >> s;
            if(s[0] == 'l') {
                if(s[1] == 'u') {
                    if(now == 0) {
                        if(r == 1) {
                            cnt++;
                            now = 1;
                        }
                    }
                    l = 1;
                }else {
                    if(now == 1) {
                        if(r == 0) {
                            cnt++;
                            now = 0;
                        }
                    }
                    l = 0;
                }
            }else {
                if(s[1] == 'u') {
                    if(now == 0) {
                        if(l == 1) {
                            cnt++;
                            now = 1;
                        }
                    }
                    r = 1;
                }else {
                    if(now == 1) {
                        if(l == 0) {
                            cnt++;
                            now = 0;
                        }
                    }
                    r = 0;
                }
            }
        }
        cout << cnt << endl;
    }
}
