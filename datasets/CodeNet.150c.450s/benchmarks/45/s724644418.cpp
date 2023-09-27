#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll pow_ans(ll x, ll n) {
    ll res = 1;
    while (n > 0) {
        x %= 1000000007;
        if (n & 1) { res *= x, res %= 1000000007;}
        x %= 1000000007;
        x *= x;
        n >>= 1;
    }
    return res;
}

int main() {
    ll x;
    ll y;
    cin >> x >> y;
    cout << pow_ans(x, y) % 1000000007 << endl;
}
