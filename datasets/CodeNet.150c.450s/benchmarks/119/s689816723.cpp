#include <bits/stdc++.h>

using namespace std;

#define rep(i, n) REP((i), 0, (n))
#define REP(i, a, n) for(int i=(a); i<(n); i++)

int w, h;
int c[55][55];

void dfs(int i, int j) {
    if(c[i][j] == 0) return;
    
    c[i][j] = 0;
    dfs(i-1, j-1);
    dfs(i-1, j);
    dfs(i-1, j+1);
    dfs(i  , j-1);
    dfs(i  , j+1);
    dfs(i+1, j-1);
    dfs(i+1, j);
    dfs(i+1, j+1);
}

int main() {
	while(1) {
	    cin >> w >> h;
	    if(w == 0 && h == 0) break;
	    
	    rep(i, h) rep(j, w) cin >> c[i+1][j+1];
	    
	    int ans = 0;
	    rep(i, h) {
	        rep(j, w) {
	            if(c[i+1][j+1] == 0) continue;
	            dfs(i+1, j+1);
	            ans++;
	        }
	    }
	    cout << ans << endl;
	}
}

