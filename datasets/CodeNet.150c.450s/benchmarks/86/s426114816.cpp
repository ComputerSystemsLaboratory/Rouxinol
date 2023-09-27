#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
using ll = long long;
using P = pair<ll, ll>;
const long double PI = acos(-1.0L);
ll GCD(ll a, ll b) { return b?GCD(b, a%b):a; }
ll LCM(ll a, ll b) { return a/GCD(a, b)*b; }

int n, m, p;

int main() {
    while(1) {
        cin >> n >> m >> p;
        if(n == 0 && m == 0 && p == 0) break;
        vector<int> x(n, 0);
        int sum = 0;
        for(int i = 0; i < n; ++i) {
            cin >> x[i];
            sum += (x[i]*100);
        }
        int money = sum*(100-p)/100;
        if(x[m-1] == 0) cout << 0 << endl;
        else cout << money/x[m-1] << endl;
    }
}
