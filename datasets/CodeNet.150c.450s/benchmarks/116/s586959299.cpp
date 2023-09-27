#include<iostream>
#include<vector>
using namespace std;
typedef long long ll;
#define REP(i,n) for(ll i=0;i<(ll)(n);i++)
#define FOR(i,a,b) for(ll i=a;i<=(ll)(b);i++)

int N, k, i1, i2;
ll a[100010];

int main() {
    while (cin >> N >> k) {
        if (N == 0) break;
        REP(i,N) cin >> a[i];

        ll S[100010];
        S[0] = 0;
        REP(i,N) {
            S[i+1] = S[i] + a[i];
        }

        int ans = 0;
        REP(i,N+1-k) {
            if (S[i+k] - S[i] > ans) ans = S[i+k] - S[i];
        }

        cout << ans << endl;
    }
}
