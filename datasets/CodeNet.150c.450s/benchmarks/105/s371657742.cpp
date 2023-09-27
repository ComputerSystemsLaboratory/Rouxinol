#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for (int i = 0; i < (n); i++)

int main() {
    int T;
    cin >> T;
    while (T--) {
        ll n;
        cin >> n;
        vector<ll> as(n);
        rep(i,n) cin >> as[i];
        string s;
        cin >> s;

        bool one = false;
        vector<ll> bs;
        for (ll i = n - 1; i >= 0; i--) {
            ll a = as[i];
            for (ll b : bs){
                a = min(a, a ^ b);
            }
            if (s[i] == '0') {
                if (a != 0) bs.emplace_back(a);
            }

            if (s[i] == '1') {
                if (a != 0) {
                    one = true;
                    break;
                }
            }
        }
        cout << (one ? 1 : 0) << endl;
    }
}
