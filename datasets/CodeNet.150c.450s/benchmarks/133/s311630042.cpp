#include <bits/stdc++.h>

using namespace std;

typedef long long int ll;
typedef pair<ll, ll> pll;

#define FOR(i, n, m) for(ll (i)=(m);(i)<(n);++(i))
#define REP(i, n) FOR(i,n,0)
#define OF64 std::setprecision(10)

const ll MOD = 1000000007;
const ll INF = (ll) 1e15;
const ll MAX = 26;

ll C[30];
ll S[400][30];
ll T[400];
set<ll> Last[30];

ll calc(ll t, ll d, ll score) {
    score += S[d][t];
    REP(i, MAX) {
        //cout << *Last[i].rbegin() << " ";
        if (t == i)
            continue;
        score -= C[i] * (d - *Last[i].rbegin());
    }
    //    cout << endl;
    return score;
}

int main() {
    cin.tie(0);
    ios::sync_with_stdio(false);
    ll D;
    cin >> D;
    REP(i, MAX) {
        cin >> C[i];
    }
    REP(i, D) {
        REP(j, MAX) {
            cin >> S[i][j];
        }
    }
    REP(i, D) {
        cin >> T[i];
        T[i]--;
    }
    ll score = 0;
    REP(i, MAX) {
        Last[i].insert(-1);
    }
    REP(i, D) {
        score = calc(T[i], i, score);
        cout << score << endl;
        Last[T[i]].insert(i);
    }

    return 0;
}