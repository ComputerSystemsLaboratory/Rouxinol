#include <bits/stdc++.h>
 
#define REP(i,n) for(int i=0; i<(int)(n); ++i)
#define FOR(i,k,n) for(int i=(k);i<(int)(n);++i)
typedef long long int ll;
using namespace std;

int main(void) {
    int n;
    vector<int> a;
    while(cin >> n && n) {
        a.resize(n);
        REP(i, n) cin >> a[i];
        int ans = numeric_limits<int>::max();
        sort(a.begin(), a.end());
        REP(i, n-1) ans = min(ans, a[i+1]-a[i]);
        cout << ans << endl;
    }
}