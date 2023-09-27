#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, n) for(ll i = 0, i##_len = (n); i < i##_len; i++)
#define reps(i, s, n) for(ll i = (s), i##_len = (n); i < i##_len; i++)
#define rrep(i, n) for(ll i = (n) - 1; i >= 0; i--)
#define rreps(i, e, n) for(ll i = (n) - 1; i >= (e); i--)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())
#define len(x) ((ll)(x).length())

long long mod_pow(long long x, long long n, long long mod = 1e9 + 7) {
    long long ans = 1;
    while(n > 0) {
        if ((n % 2) == 0) {
            x = (x * x) % mod;
            n >>= 1;
        }
        else {
            ans = (ans * x) % mod;
            n--;
        }
    }
    return ans;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    // ifstream in("input.txt");
    // cin.rdbuf(in.rdbuf());
    ll m, n;
    cin >> m >> n;
    cout << mod_pow(m, n) << endl;
    return 0;
}

