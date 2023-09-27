#include <algorithm>
#include <array>
#include <bitset>
#include <cmath>
#include <functional>
#include <iostream>
#include <limits>
#include <list>
#include <map>
#include <numeric>
#include <set>
#include <string>
#include <vector>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <iomanip>
#include <chrono>
#include <random>

#include <cstring>

using namespace std;

using ll = long long;
using ull = unsigned long long;
ll const MM = 1000000007;
//ll const NN = 1000000007;

#define pv(val) cerr << #val << '=' << (val) << endl
#define pl cerr << '@' << __LINE__ << endl

#define rep(i, n) for (ll i = 0; i < (n); i++)
#define rep2(i, b, e) for (ll i = (b); i < (e); i++)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()

template <class T>
ostream& operator<<(ostream& os, vector<T> const& vec);
template <class T, size_t S>
ostream& operator<<(ostream& os, array<T, S> const& arr);
template<class T, class U>
ostream& operator<<(ostream& os, pair<T, U> const& p);
template<class... Args>
ostream& operator<<(ostream& os, tuple<Args...> const& t);

template <class T>
ostream& operator<<(ostream& os, vector<T> const& vec) {
    if (vec.empty()) {
        os << "{}";
    } else {
        os << '{';
        for (size_t i = 0; i < vec.size() - 1; i++) os << vec[i] << ", ";
        os << vec.back() << '}';
    }
    return os;
}

template <class T, size_t S>
ostream& operator<<(ostream& os, array<T, S> const& arr) {
    if (arr.empty()) {
        os << "{}";
    } else {
        os << '{';
        for (size_t i = 0; i < arr.size() - 1; i++) os << arr[i] << ", ";
        os << arr.back() << '}';
    }
    return os;
}

template<class T, class U>
ostream& operator<<(ostream& os, pair<T, U> const& p) {
    os << '(' << p.first << ", " << p.second << ')';
    return os;
}

template<size_t I, class... Args>
typename enable_if<sizeof...(Args) == (I + 1)>::type print_tuple(ostream& os, tuple<Args...> const& t) {
    os << get<I>(t);
}
template<size_t I, class... Args>
typename enable_if<sizeof...(Args) != (I + 1)>::type print_tuple(ostream& os, tuple<Args...> const& t) {
    os << get<I>(t) << ", ";
    print_tuple<I + 1, Args...>(os, t);
}

template<class... Args>
ostream& operator<<(ostream& os, tuple<Args...> const& t) {
    os << '(';
    print_tuple<0, Args...>(os, t);
    os << ')';

    return os;
}

struct Timer {
    using Clock = std::chrono::system_clock;
    Clock::time_point startTime;
 
    Timer()
    {
        start();
    }
    void start()
    {
        startTime = Clock::now();
    }
 
    long long milli() const
    {
        return std::chrono::duration_cast<std::chrono::milliseconds>(Clock::now() - startTime).count();
    }
    long long micro() const
    {
        return std::chrono::duration_cast<std::chrono::microseconds>(Clock::now() - startTime).count();
    }
};

ll bound(function<bool(ll)> f, ll ng, ll ok) {
    while (abs(ng - ok) > 1) {
        ll mid = (ng + ok) / 2;
        if (f(mid))
            ok = mid;
        else
            ng = mid;
    }

    return ok;
}

ll order(vector<ll> const& r) {
    vector<ll> a(r.size());
    iota(all(a), 1);

    ll ord = 0;
    while (a != r) {
        next_permutation(all(a));
        ord++;
    }

    return ord;
}

ll div(ll n) {
    ll ans = 0;
    while (n > 0) {
        ans++;
        n /= 2;
    }

    return ans;
}

//value, weight
ll knapsack(vector<pair<ll, ll>> const& a, ll max_w) {
    ll max_n = a.size();
    vector<ll> table(max_w + 1, 0);

    for (int i = 1; i <= max_n; ++i) {
        ll v = a[i].first;
        ll w = a[i].second;
        if (w <= max_w && table[w] < v)
            table[w] = v;
        for (int j = 1; j <= max_w - w; j++) {
            if (table[j] != 0 && table[w + j] < table[j] + v)
                table[w + j] = table[j] + v;
        }
    }

    return *max_element(all(table));
}

ll llpow(ll n, ll m) {
    ll ans = 1;
    rep(i, m) {
        ans *= n;
        ans %= MM;
    }

    return ans;
}

Timer gTimer;


ll positive(vector<ll> p, vector<ll> n, ll k) {
    sort(all(p), [](ll a, ll b) {return abs(a) >= abs(b); });
    sort(all(n), [](ll a, ll b) {return abs(a) >= abs(b); });
    vector<pair<ll, ll>> a;
    for (ll b : p)
        a.push_back({ b, 1 });

    rep(i, n.size() / 2)
        a.push_back({ n[2 * i] * n[2 * i + 1], 2 });

    sort(rall(a));
    pv(a);
    ll ans = 1;
    rep (i, a.size()) {
        if (a[i].second <= k) {
            ans *= a[i].first;
            ans %= MM;
            k -= a[i].second;
        }
        if (k == 0)
            break;
    }
    if (k == 0) {
        return ans;
    } else {
        return -MM;
    }
}

ll negative(vector<ll> p, vector<ll> n, ll k) {
    if (n.empty())
        return -MM;
    sort(all(p), [](ll a, ll b) {return abs(a) <= abs(b); });
    sort(all(n), [](ll a, ll b) {return abs(a) <= abs(b); });

    vector<pair<ll, ll>> a;
    for (ll b : p)
        a.push_back({ b, 1 });

    ll ans = n[0];
    n.erase(n.begin());
    rep(i, n.size() / 2)
        a.push_back({ n[2 * i] * n[2 * i + 1], 2 });

    sort(rall(a));
    rep (i, a.size()) {
        if (a[i].second <= k) {
            ans *= a[i].first;
            ans %= MM;
            k -= a[i].second;
        }
        if (k == 0)
            break;
    }
    if (k == 0) {
        return -ans;
    } else {
        return -MM;
    }
}
ll modinv(ll a, ll m) {
    ll b = m, u = 1, v = 0;
    while (b) {
        ll t = a / b;
        a -= t * b; swap(a, b);
        u -= t * v; swap(u, v);
    }
    u %= m;
    if (u < 0) u += m;
    return u;
}


ll ndiv(ll a, ll b, ll c) {
    return (b / c) - ((a - 1) / c);
}

ll gcd(ll a, ll b)
{
    if (a < b) {
        a ^= b;
        b ^= a;
        a ^= b;
    }
    
    return b ? gcd(b, a % b) : a;
}

ll lcm(ll a, ll b)
{
    return a * b / gcd(a, b);
}

int main(void) {
    ll N, M;
    cin >> N >> M;

    vector<vector<ll>> a(N);
    rep(i, M) {
        ll A, B;
        cin >> A >> B;
        --A, --B;

        a[A].push_back(B);
        a[B].push_back(A);
    }

    vector<ll> dist(N, -1);
    dist[0] = 0;

    queue<ll> q;
    q.push(0);

    while (!q.empty()) {
        ll const u = q.front();
        q.pop();

        for (ll const v : a[u]) {
            if (dist[v] != -1)
                continue;
            dist[v] = u;
            q.push(v);
        }
    }

    cout << "Yes" << endl;
    rep2(i, 1, N)
        cout << dist[i] + 1 << endl;

    return 0;
}

