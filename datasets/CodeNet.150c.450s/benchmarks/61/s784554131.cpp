#include <bits/stdc++.h>
using namespace std;
using ll = int64_t;

bool solve() {
    ll N, A, B, C, X;
    cin >> N >> A >> B >> C >> X;

    if(!(N + A + B + C + X)) return false;

    vector<ll> Y(N);
    for(auto &&e : Y) cin >> e;

    map<ll, ll> mp;
    ll initx = X;
    mp[X] = 0;
    ll loops = 0;
    for(ll i = 1; ; i++) {
        ll NX = (A * X + B) % C;
        if(mp.find(NX) != mp.end()) {
            loops = NX;
            break;
        }
        mp[NX] = i;
        X = NX;
    }

    ll now = 0;
    ll ans = 0;
    for(ll i = initx == Y[0]; i < Y.size(); i++) {
        ll y = Y[i];
        if(mp.find(y) == mp.end()) {
            ans = -1;
            break;
        }
        auto tmp = mp[y];
        if(now < tmp) {
            ans += tmp - now;
        } else {
            if(tmp < mp[loops]) {
                ans = -1;
                break;
            }
            ans += (mp.size() - now) + (tmp - mp[loops]);
        }
        now = tmp;
    }

    cout << (ans <= 10000 ? ans : -1) << endl;
    return true;
}

int main() {
    while(solve());
    return 0;
}

