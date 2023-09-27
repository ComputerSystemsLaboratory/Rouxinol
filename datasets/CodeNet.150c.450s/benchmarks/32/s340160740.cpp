#include <bits/stdc++.h>
 
#define REP(i,n) for(int i=0; i<(int)(n); ++i)
#define FOR(i,k,n) for(int i=(k);i<(int)(n);++i)
typedef long long int ll;
using namespace std;

int main(void) {
    int m, nmin, nmax;
    int p[201];
    while(cin >> m >> nmin >> nmax && m) {
        REP(i, m) cin >> p[i];
        sort(p, p+m, greater<int>());
        int gap = 0;
        int ans = 0;
        for(int i=nmin-1; i<nmax; ++i) {
            if(p[i]-p[i+1] >= gap) {
                gap = p[i]-p[i+1];
                ans = i+1;
            }
        }
        cout << ans << endl;
    }
}