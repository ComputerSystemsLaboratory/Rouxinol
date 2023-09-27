#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

map<ll, ll> primeFactor(ll n) {
    map<ll, ll> ret;
    for(ll i = 2; i * i <= n; i++) {
        while(n % i == 0) {
            ret[i]++;
            n /= i;
        }
    }
    if(n != 1) ret[n] = 1;
    return ret;
}

int main() {
    int n;
    cin >> n;
    auto mp = primeFactor(n);
    cout << n << ":";
    for (auto p : mp) {
        for (int i = 0; i < p.second; ++i) {
            cout << " " << p.first;
        }
    }
    cout << endl;
}

