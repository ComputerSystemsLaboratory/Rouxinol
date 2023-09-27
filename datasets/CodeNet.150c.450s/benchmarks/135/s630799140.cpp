#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) REP(i, 0, (n))
#define REP(i, a, n) for(int i=(a); i<(n); i++)

int h[1501], w[1501];
int H[2000000], W[2000000];

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    int N, M;
	while(cin >> N >> M, N*M) {
	    memset(H, 0, 2000000);
	    memset(W, 0, 2000000);
	    rep(i, N) cin >> h[i];
	    rep(i, M) cin >> w[i];
	    rep(i, N) {
	        int l = 0;
	        REP(j, i, N) {
	            l += h[j];
	            H[l]++;
	        }
	    }
	    rep(i, M) {
	        int l = 0;
	        REP(j, i, M){
	            l += w[j];
	            W[l]++;
	        }
	    }
	    int ans = 0;
	    rep(i, 2000000) ans += H[i]*W[i];
	    cout << ans << endl;
	}
}

