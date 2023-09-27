#include <bits/stdc++.h>
#define FOR(i,bg,ed) for(ll i=(bg);i<(ed);i++)
#define REP(i,n) FOR(i,0,n)
#define MOD 1000000007
//#define int long long
using namespace std;
typedef long long ll;
const int INF = 1e9;

int n;
int a[1010];

signed main()
{
    while (true) {
        cin >> n;
        if (n == 0) break;

        REP(i,n) cin >> a[i];
        sort(a, a + n);

        int minSa = INT_MAX;
        REP(i,n-1) {
            minSa = min(minSa, a[i+1] - a[i]);
        }

        cout << minSa << endl;
    }
}