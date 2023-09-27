#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
#include <vector>
#include <set>
#include <queue>
#include <map>
#include <string>

#define rep(i, a, b) for ( int i = (a); i < (b); i++ )
#define per(i, a, b) for ( int i = (b)-1; i >= (a); i--)
#define pb push_back
#define mp make_pair
#define bg begin()
#define en end()
#define all(v) (v).begin(), (v).end()
#define sz(v) (int)(v).size()

using namespace std;

typedef long long ll;
typedef long double ld;

static const long long MOD = 1000000007;
static const long long LINF = (ll)(1e18+99);
static const int INF = 1e9+99;

ll c[30], s[370][30];
ll score[30], last_day[30];
int t[370];

ll calc(int day, int contest) {
    score[contest] += s[day][contest];
    last_day[contest] = day;

    rep(i, 1, 27) score[i] -= c[i]*(day-last_day[i]);
    
    ll sum = 0;
    rep(i, 1, 27) sum += score[i];
    return sum;
}

int main(void) {
    int d;
    cin >> d;
    rep(i, 1, 27) cin >> c[i];
    rep(i, 1, d+1) rep(j, 1, 27) cin >> s[i][j];

    rep(i, 0, d) cin >> t[i];

    rep(i, 0, d) {
        printf("%lld\n", calc(i+1, t[i]));
    }

    return 0;
}

