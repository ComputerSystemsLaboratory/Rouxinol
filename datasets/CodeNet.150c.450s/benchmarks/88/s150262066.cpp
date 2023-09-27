#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int h, w;

int main() {
    while(1) {
        cin >> h >> w;
        if(h == 0 && w == 0) break;
        int len = w*w + h*h;
        int ans = 1e9;
        int ah = 200, aw = 200;
        int cah = 200, caw = 200;
        for(int i = 1; i <= 150; ++i) {
            for(int j = i+1; j <= 150; ++j) {
                int ch = i*i + j*j;
                if(len == ch) {
                    if(h < i && i < cah) {
                        ans = ch;
                        cah = i, caw = j;
                    }
                }else if(len < ch) {
                    if(ans == ch) {
                        if(ah > i) {
                            ans = ch;
                            ah = i, aw = j;
                        }
                    }else if(ans > ch) {
                        ans = ch;
                        ah = i, aw = j;
                    }
                }
            }
        }
        if(cah == 200 && caw == 200) cout << ah << " " << aw << endl;
        else cout << cah << " " << caw << endl;
    }
}
