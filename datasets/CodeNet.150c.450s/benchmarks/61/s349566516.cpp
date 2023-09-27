#include <bits/stdc++.h>
#define rep(i,n) for(int i=0; i<(n); i++)
#define FOR(i,a,n) for(int i=(a); i<(n); i++)
#define all(v) v.begin(), v.end()
using namespace std;
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    while (true) {
        int N,A,B,C,X; cin >>N>>A>>B>>C>>X;
        if(N+A+B+C+X==0) break;

        vector<int> rndint(N);
        rep(i, N) cin >> rndint[i];

        int ans = 0;
        int cur = X;
        rep(i, N){
            if (ans>10000) break;
            int x = rndint[i];
            while (cur!=x) {
                cur = (A*cur+B)%C;
                ans++;
                if (ans>10000) break;
            }
            if (i<N-1) {
                cur = (A*cur+B)%C;
                ans++;
            }
        }
        if (ans<=10000) cout << ans << endl;
        else cout << -1 << endl;
    }
}
