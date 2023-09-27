#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for(ll (i)=(m);(i)<(n);++(i))
#define REP(i, n) FOR(i,n,0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll) 1e15;

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    string S;
    cin >> S;
    ll N = S.length();
    stack<ll> s;
    stack<pll> a;
    REP(i, N) {
        if (S[i] == '\\') {
            s.push(i);
            continue;
        }
        if (S[i] == '/' && !s.empty()) {
            ll idx = s.top();
            s.pop();
            ll sum = i - idx;
            while (!a.empty() && a.top().second > idx) {
                pll t = a.top();
                a.pop();
                sum += t.first;
            }
            a.push(pll(sum, idx));
        }
    }

    vector<ll> v;
    while (!a.empty()) {
        pll t = a.top();
        a.pop();
        v.push_back(t.first);
    }

    reverse(v.begin(), v.end());

    ll ans = 0;
    REP(i, v.size()) {
        ans += v[i];
    }
    cout << ans << endl;
    cout << v.size();
    REP(i, v.size()) {
        cout << " " << v[i];
    }
    cout << endl;
    return 0;
}
