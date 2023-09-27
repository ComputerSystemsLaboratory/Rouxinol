#include <bits/stdc++.h>


using namespace std;


using ll = long long;


int main(void) {
    ll N, Q, acc;
    cin >> N;
    vector<ll> counter(100001, 0);
    acc = 0;
    for (ll i = 0; i < N; i++) {
        ll A;
        cin >> A;
        counter[A]++;
        acc += A;
    }

    cin >> Q;
    for (ll i = 0; i < Q; i++) {
        ll B, C;
        cin >> B >> C;
        acc += (C - B) * counter[B];
        counter[C] += counter[B];
        counter[B] = 0;
        cout << acc << endl;
    }
}
