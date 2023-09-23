//やるだけ！ではない。(これがやるだけでお菓子の分割がやるだけでないなら考察をショートカットしすぎ。)
//(自分にとってはどっちも難しい＞＜)
#include<iostream>
#define int long long
using namespace std;

int n;
signed main() {
	while(cin >> n) {
		if (n < 1 || n > 30) break;
		int dp[31][31] = {0}, i, j;	//i=登った回数、j=今までに登った段数
		
		dp[0][0] = 1;
		for(i = 0; i < n; i++ ) {
			for(j = 0; j <= n; j++ ) {
				for(int k = 1; k <= 3; k++ ) {
					if ( j + k > n ) break;
					dp[i+1][j+k] += dp[i][j];
				}
			}
		}
		
		int ans = 0;
		for(i = 0; i < 31; i++ ) {
			ans += dp[i][n];
		}
		cout << (ans+(int)3649)/(int)3650 << endl;
	}
	return 0;
}