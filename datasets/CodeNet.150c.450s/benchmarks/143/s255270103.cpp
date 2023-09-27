#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using vl = vector<ll>;
using pll = pair<ll, ll>;

#define rep(i, n) for (ll i = 0, xxx_rep_end = (n); i < xxx_rep_end; ++i)
#define all(x) (x).begin(), (x).end()

template <class T1, class T2>
inline void chmax(T1 &a, const T2 &b) {
    if (a < b) a = b;
}
template <class T1, class T2>
inline void chmin(T1 &a, const T2 &b) {
    if (a > b) a = b;
}

constexpr ll INF = 0x3f3f3f3f3f3f3f3fLL;
constexpr ll mod = 1000000007;

int main() {
    ll N;
    cin >> N;

    ll sum = 0;
    vector<int> A(100005, 0);
    rep(i, N) {
        ll num;
        cin >> num;
        ++A[num];
        sum += num;
    }

    int Q;
    cin >> Q;
    vector<pll> que(Q);
    rep(i, Q) {
        ll b, c;
        cin >> b >> c;
        que[i] = make_pair(b, c);
    }

    for (auto &x : que) {
        ll b = x.first;
        ll c = x.second;

        sum += (c - b) * A[b];
        cout << sum << endl;

        A[c] += A[b];

        A[b] = 0;
    }
}