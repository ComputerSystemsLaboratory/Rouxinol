#include <bits/stdc++.h>
#define FOR(i,bg,ed) for(ll i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define MOD 1000000007
//#define int long long
using namespace std;
typedef long long ll;
const int INF = 1e9;

int m, nMin, nMax;
int P[210];
pair<int, int> ans[210];

signed main()
{
    while (true) {
        cin >> m >> nMin >> nMax;
        if (m == 0 && nMin == 0 && nMax == 0) break;

        REP(i,m) cin >> P[i];
        sort(P, P + m, greater<int>());

        int idx = 0;
        for (int i=nMin; i<=nMax; i++) {
            ans[idx++] = make_pair(P[i-1] - P[i], i);
        }

        sort(ans, ans + idx);
        cout << ans[idx-1].second << endl;
    }
}