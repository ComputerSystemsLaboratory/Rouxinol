#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

const ll MIN_A = -10000;
const ll MAX_A = -10000;

ll solve(const ll n, const ll k, const vector<ll> as) {
    ll acc = 0;
    for (int i = 0; i < k; i++) {
        acc += as[i];
    }
    ll cand = MIN_A;

    for (int i = k; i < n; i++) {
        acc -= as[i - k];
        acc += as[i];
        chmax(cand, acc);
    }

    return cand;
}

int main(void) {
    ll n, k;
    while (1) {
        cin >> n >> k;
        if (n == 0 && k == 0) {
            break;
        }

        vector<ll> as(n);
        for (int i = 0; i < n; i++) {
            cin >> as[i];
        }
        cout << solve(n, k, as) << endl;
    }
    
    return 0;
}

