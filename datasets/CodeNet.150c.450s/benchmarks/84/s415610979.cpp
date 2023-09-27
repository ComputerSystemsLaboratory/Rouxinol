#include <bits/stdc++.h>

using ll = long long;
using namespace std;
constexpr ll inf = 1e15;
constexpr ll mod = 1e9+7;

class BIT {
    vector<ll> bit;

public:
    BIT(size_t n) {
        bit.resize(n+1, 0);
    }

    void add(int a, ll w) {
        a += 1;
        for (int x = a; x <= bit.size(); x += x & -x) bit[x] += w;
    }

    ll sum(int a) {
        a += 1;
        ll ret = 0;
        for (int x = a; x > 0; x -= x & -x) ret += bit[x];
        return ret;
    }
};

int compress(vector<int>& x, map<int,int>& zip, vector<int>& unzip) {
    sort(begin(x), end(x));
    x.erase(unique(begin(x), end(x)), end(x));
    for (int i = 0; i < x.size(); i++) {
        zip[x[i]] = i;
        unzip.push_back(x[i]);
    }
    return x.size();
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin>>N;
    vector<int> a(N);
    for (int n = 0; n < N; n++) cin>>a[n];
    vector<int> sorted_a(N);
    copy(begin(a), end(a), begin(sorted_a));
    map<int, int> zip;
    vector<int> unzip;
    compress(sorted_a, zip, unzip);
    for (int n = 0; n < N; n++) a[n] = zip[a[n]];

    ll ans = 0;
    BIT bit(N);
    for (int n = 0; n < N; n++) {
        ll j = bit.sum(a[n]);
        bit.add(a[n], 1);
        ans += n - j;
    }
    cout<<ans<<endl;

    return 0;
}
