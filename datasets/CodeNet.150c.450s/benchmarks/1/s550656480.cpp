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

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int n;
    cin >> n;
    vi a(n);
    rep(i, n) {
        cin >> a[i];
    }

    vi dp(n, INT_MAX);
    rep(i, n) {
        vi::iterator itr = lower_bound(all(dp), a[i]);
        *itr = a[i];
    }

    cout << (lower_bound(all(dp), INT_MAX)-dp.begin()) << endl;
}
