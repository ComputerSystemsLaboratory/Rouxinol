#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; ++i)
using ll = long long;
using namespace std;
const int INF = 1e9;

map<ll, int> prime_factor(ll n) {
    map<ll, int> ret;
    for (ll i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            ret[i]++;
            n /= i;
        }
    }
    if (n != 1)
        ret[n] = 1;
    return ret;
}

int main() {

    int N;
    cin >> N;

    map<ll, int> prime = prime_factor(N);
    cout << N << ":";

    for (auto itr = prime.begin(); itr != prime.end(); itr++) {
        rep(i, itr->second) cout << " " << itr->first;
    }

    cout << endl;

    return 0;
}
