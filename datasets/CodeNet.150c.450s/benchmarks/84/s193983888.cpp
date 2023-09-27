//#define _GLIBCXX_DEBUG
#include <bits/stdc++.h>
#define rep(i, n) for(int i=0; i<n; ++i)
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
using namespace std;
using ll = int64_t;
using ld = long double;
using P = pair<int, int>;
using vs = vector<string>;
using vi = vector<int>;
using vvi = vector<vi>;
template<class T> using PQ = priority_queue<T>;
template<class T> using PQG = priority_queue<T, vector<T>, greater<T> >;
const int INF = 100010001;
const ll LINF = (ll)INF*INF*10;
template<typename T1, typename T2>
inline bool chmax(T1 &a, T2 b) {return a < b && (a = b, true);}
template<typename T1, typename T2>
inline bool chmin(T1 &a, T2 b) {return a > b && (a = b, true);}
template<typename T1, typename T2>
istream &operator>>(istream &is, pair<T1, T2> &p) { return is >> p.first >> p.second;}
template<typename T1, typename T2>
ostream &operator<<(ostream &os, const pair<T1, T2> &p) { return os << p.first << ' ' << p.second;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi a(n);
    map<int, int> mp;
    rep(i, n) {
        cin >> a[i];
        mp[a[i]] = i;
    }
    int h = 1;
    for(P x:mp) {
        a[x.second] = h++;
    }

    vi bit(n+1);
    auto add = [&](int i, int x) {
        while(i <= n) {
            bit[i] += x;
            i += i&-i;
        }
    };
    auto sum = [&](int i) {
        int res = 0;
        while(i) {
            res += bit[i];
            i &= i-1;
        }
        return res;
    };

    ll ans = 0;
    rep(i, n) {
        ans += i - sum(a[i]);
        add(a[i], 1);
    }
    cout << ans << endl;
}
