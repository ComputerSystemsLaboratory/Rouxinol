#include <iostream>
using namespace std;
#define rep2(x,from,to) for(int x=(from);x<(to);++(x))
#define rep(x,to) rep2(x,0,to)
int main() {
	bool dp[20+4][2000+100] = {};
	int n;
	cin >> n;
	int a;
	rep2(i,1,n+1) {
		cin >> a;
		dp[i][a] = 1;
		rep(j,2000) {
			if(a+j>2000) break;
			if(dp[i-1][j]) {
				dp[i][j] = 1;
				dp[i][a+j] = 1;
			}
		}
	}
	int q; 
	cin >> q;
	int m;
	rep(i,q) {
		cin >> m;
		if(dp[n][m]) cout << "yes" << endl;
		else cout << "no" << endl;
	}
	return 0;
}