#include <iostream>

using namespace std;
#define rep(i,n) for(int i = 0;i < (n) ;i++)

int m,nmin,nmax;
int p[1000];
signed main(void) {
    while(true) {
    cin >> m >> nmin >> nmax;
    if (m == 0) break;
    rep (i,m) cin >> p[i];

    int n;
    int mgap = 0;
    int ans = nmin;
    for (n = nmin; n <= nmax;n++) {
        int gap = p[n-1] - p[n];
        if (gap >= mgap) {
            mgap = gap;
            ans = n;
        }
    }
    cout << ans << endl;
    }
    return 0;
}
