// Template {{{
#include <bits/stdc++.h>
#define REP(i,n) for(int i=0; i<(int)(n); ++i)
using namespace std;
typedef long long LL;

#ifdef LOCAL
#include "contest.h"
#else
#define error(args...) 
#endif

const int dx[4] = {1, 0, -1, 0};
const int dy[4] = {0, 1, 0, -1};
inline bool valid(int x, int w) { return 0 <= x && x < w; }

void iostream_init() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.setf(ios::fixed);
    cout.precision(12);
}
//}}}

int main(){
    iostream_init();
    int m, n1, n2;
    while(cin >> m >> n1 >> n2 && m != 0) {
    vector<int> P(m);
    REP(i, m) cin >> P[i];
    int max_diff = -1;
    int ans = -1;
    for(int i = n1; i <= n2; i++) {
        int diff = P[i-1] - P[i];
        if(diff >= max_diff) {
            max_diff = diff;
            ans = i;
        }
    }
    cout << ans << endl;
    }
    return 0;
}