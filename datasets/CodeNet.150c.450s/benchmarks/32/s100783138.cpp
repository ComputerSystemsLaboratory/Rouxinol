
#include<bits/stdc++.h>
using namespace std;

using ll = long long;
using ull = unsigned long long;

const double PI = acos(-1);
const int inf = 2e9;
const long long INF = 2e18;
const long long MOD = 1e9+7;

#define sx(s) (s).size()
#define pb push_back
#define fi first
#define se second
#define REP(i,n) for (int i = 0; i < n; i++)
#define ALL(a) begin(a),end(a)

int main(void) {
    int m,nmin,nmax;
    while (cin >> m >> nmin >> nmax, m) {
        vector<int> P(m);
        REP(i,m) cin >> P[i];
        int gap = 0;
        int ans = 0;

        for (int i=nmin; i<=nmax; i++) {
            if (i == 0) continue;
            int gokaku = P[i-1];
            int hugokaku = P[i];
            if (gokaku - hugokaku >= gap) {
                gap = gokaku - hugokaku;
                ans = i;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
