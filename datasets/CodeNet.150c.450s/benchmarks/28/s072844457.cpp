#include <bits/stdc++.h>
#define INF 1e9
#define INFLL 1LL << 60
using namespace std;

#define REPR(i,n) for(int i=(n); i >= 0; --i)
#define FOR(i, m, n) for(int i = (m); i < (n); ++i)
#define REP(i, n) for(int i=0, i##_len=(n); i<i##_len; ++i)
#define ALL(a)  (a).begin(),(a).end()
#define endl "\n"

template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
typedef long long ll;

int k;
vector<int> w;

// 最大積載量が決定された時にk台以下のトラックで運べる荷物の数
ll f(ll p) {
    ll used = 0;
    ll x = 0;
    ll carry = 0;
    for(const auto &item: w) {
        if(item > p) return carry;
        x += item;
        carry++;
        if(x > p) {
            used++;
            x = item;
            if(used == k) {
                carry--;
                return carry;
            }
        }
    }
    return carry;
}

void solve() {
    int n;
    cin >> n >> k;
    w.resize(n);
    REP(i,n) cin >> w[i];
    ll l = -1;
    ll r = INFLL;
    while ((r - l) > 1) {
        ll mid = l + (r-l) / 2;
        if (f(mid) == n) r = mid;
        else l = mid;
    }
    cout << r << endl;

}

void test() {
    int n;
    cin >> n >> k;
    w.resize(n);
    cout << f(10) << endl;
}
int main() {
    // test();
    solve();
    return 0;
}
