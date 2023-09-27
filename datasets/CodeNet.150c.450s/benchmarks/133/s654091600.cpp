#include <bits/stdc++.h>
using namespace std;

typedef long long LL;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define FOR(i,a,b) for(int i=(a);i<(b);++i)
#define ALL(x) (x).begin(),(x).end()
const int IINF = 1e9;
const LL LINF = 1e18;
const LL MOD = 1e9+7;

int main() {
    int D;
    cin >> D;
    vector<LL> c(26);
    vector<vector<LL>> s(D + 1, vector<LL>(26, 0));
    REP(i, 26) {
        cin >> c[i];
    }
    FOR(i, 1, D + 1) {
        REP(j, 26) {
            cin >> s[i][j];
        }
    }
    vector<int> t(D + 1, 0);
    FOR(i, 1, D + 1) {
        cin >> t[i];
        t[i]--;
    }
    vector<int> last(26, 0);

    LL score = 0;
    FOR(i, 1, D + 1) {
        int satisfaction = s[i][t[i]];
        last[t[i]] = i;
        REP(k, 26) {
            satisfaction -= (i - last[k])*c[k];
        }
        score += satisfaction;
        cout << score << endl;
    }
    return 0;
}