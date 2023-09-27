#include <bits/stdc++.h>
using ll = long long;
using namespace std;

const int inf = 1e9;
const ll linf = 1e18;

map<ll, int> factorize(ll n)
{
    map<ll, int> mp;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            mp[i]++; n /= i;
        }
    }
    if (n != 1) mp[n] = 1;
    return mp;
}

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    int n; cin >> n;
    auto f = factorize(n);
    cout << n << ":";
    for (auto &e: f) {
        for (int i = 0; i < e.second; i++) {
            cout << " " << e.first;
        }
    }
    cout << endl;
    return 0;
}
