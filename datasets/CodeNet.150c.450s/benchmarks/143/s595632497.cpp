#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<long long>;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

constexpr long long mod = 1000000007;

#define rep(i, n) for (int i = 0; i < n; i++)

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    ll n, q;
    cin >> n;
    vll a(n);
    rep(i, n) cin >> a[i];

    map<ll, ll> mp;
    rep(i, n) {
        if (mp.count(a[i]) == 0) {
            mp[a[i]] = 1;
        } else {
            mp[a[i]] += 1;
        }
    }

    ll sum = 0;
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        sum += itr->first * itr->second;
    }

    cin >> q;

    vll s(q, 0);
    rep(i, q) {
        ll b, c;
        cin >> b >> c;

        if (mp.count(b) != 0) {
            sum = sum + (c - b) * mp[b];

            mp[c] += mp[b];
            mp[b] = 0;
        }

        s[i] = sum;
    }

    rep(i,q){
        cout << s[i] << endl;
    }
}