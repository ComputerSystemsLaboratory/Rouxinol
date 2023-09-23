#include <bits/stdc++.h>

using namespace std;

#define min(a, b) ((a) < (b)? (a):(b))
#define max(a, b) ((a) > (b)? (a):(b))
#define rep(i, n) REP(i, 0, (n))
#define REP(i, a, n) for(int i=(a); i<(n); i++)

int main() {
    while(1) {
        int e; cin >> e;
        if(e == 0) break;
        int ans = 1000000;;
        rep(z, pow(e, 1.0/3.0)+1) {
            rep(y, sqrt(e)+1) {
                int x = e - y*y - z*z*z;
                if(x < 0) break;
                ans = min(ans, x + y + z); 
            }
        }
        cout << ans << endl;
    }
}

