#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int m, nmin, nmax;

int main() {
    while(1) {
        cin >> m >> nmin >> nmax;
        if(m == 0 && nmin == 0 && nmax == 0) break;
        vector<int> pvec(m, 0);
        for(int i = 0; i < m; ++i) {
            cin >> pvec[i];
        }
        int ans = 0;
        int num = 0;
        for(int i = nmin; i <= nmax; ++i) {
            int pass = pvec[i-1];
            int npass = pvec[i];
            int g = pass-npass;
            if(ans <= g) {
                num = i;
                ans = g;
            }
        }
        cout << num << endl;
    }
}
