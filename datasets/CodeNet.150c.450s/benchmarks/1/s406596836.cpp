#include <bits/stdc++.h>
using namespace std;
struct Fast {
    Fast() {
        cin.tie(0);
        ios::sync_with_stdio(false);
        cout << fixed << setprecision(20);
    }
} fast;
using namespace std;
typedef long long ll;
typedef pair<ll, ll> P;
long long mod = 1000000007;
#define REP(i, n) for (long long i = 0; i < (n); i++)
#define rep(i, a, n) for (long long i = a; i < (n); i++)
long long modpow(long long m, long long n, long long modvalue) {
    if (n == 0) return 1;
    if (n % 2 == 0) {
        long long t = modpow(m, n / 2, modvalue);
        return t * t % modvalue;
    } else {
        return modpow(m, n - 1, modvalue) * m % modvalue;
    }
}
bool bitcheck(ll x, ll y) { return (x >> y) & 1; }

template <typename A, size_t N, typename T> void Fill(A (&array)[N], const T& val) {
    std::fill((T*)array, (T*)(array + N), val);
}
// long long mod = 998244353;

long long moddiv(long long a, long long b, ll modvalue) { return (a * modpow(b, mod - 2, modvalue)) % modvalue; }

const ll INF = 1LL << 60;

void print_binary(long long a) {
    for (int i = 31; i >= 0; i--) {
        cout << (a >> i & 1);
    }
    cout << endl;
}

ll nCkmod(ll n, ll k, ll modvalue) {
    ll numera = 1;
    for (int i = n; i > n - k; i--) {
        numera *= i;
        numera %= modvalue;
    }
    ll denomi = 1;
    REP(i, k) {
        denomi *= (i + 1);
        denomi %= modvalue;
    }
    return moddiv(numera, denomi, modvalue);
}
map<ll, ll> cnt;
void primeFactors(long long n) {
    while (n % 2 == 0) {
        cnt[2]++;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2) {
        while (n % i == 0) {
            cnt[i]++;
            n = n / i;
        }
    }
    if (n > 2) {
        cnt[n]++;
    }
}
struct SegmentTree {
    vector<ll> ar;
    ll size = 1;
    SegmentTree(int n) {
        ar.resize(4 * n - 1, 0);
        while (size < n) {
            size *= 2;
        }
    }
    void update(ll idx, ll x) {
        ll k = size + idx;
        ar[k] = x;
        while (k != 1) {
            k /= 2;
            ar[k] = max(ar[k * 2], ar[k * 2 + 1]);
        }
    }
    ll findinner(ll s, ll t, ll idx, ll be, ll en) {
        ll mid = (be + en) / 2;
        if (be == s && t == en) {
            return ar[idx];
        }
        ll two = 0;
        ll one = 0;
        if (s < mid) {
            two = findinner(s, min(t, mid), 2 * idx, be, mid);
        }
        if (t > mid) {
            one = findinner(max(s, mid), t, 2 * idx + 1, mid, en);
        }
        return max(one, two);
    }
    ll find(ll s, ll t) { return findinner(s, t, 1, 0, size); }
};
int main() {
    ll n;
    cin >> n;
    vector<ll> as(n);
    REP(i, n) { cin >> as[i]; }
    vector<ll> bs(as);
    sort(as.begin(), as.end());
    map<ll, ll> cnt;
    as.erase(unique(as.begin(), as.end()), as.end());
    REP(i, as.size()) { cnt[as[i]] = i; }
    SegmentTree sg(n + 1);
    REP(i, n) { bs[i] = cnt[bs[i]]; }
    for (int i = n - 1; i >= 0; i--) {
        sg.update(bs[i], sg.find(bs[i] + 1, n) + 1);
    }
    cout << sg.find(0, n) << endl;
}
