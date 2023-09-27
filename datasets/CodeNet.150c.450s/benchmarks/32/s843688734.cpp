#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> l_l;
typedef pair<int, int> i_i;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
//const ll mod = 1000000007;

int main() {
    //cout.precision(10);
    cin.tie(0);
    ios::sync_with_stdio(false);
    while(true) {
        int n, nmin, nmax;
        cin >> n >> nmin >> nmax;
        if(n == 0) break;
        int a[205];
        for(int i = 1; i <= n; i++) cin >> a[i];
        int gap = 0;
        int ans = 0;
        for(int i = nmin; i <= nmax; i++) {
            if(a[i] == a[i+1]) continue;
            if(gap <= a[i] - a[i+1]) {
                gap = a[i] - a[i+1];
                ans = i;
            }
            //cerr << i << " " << gap << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
