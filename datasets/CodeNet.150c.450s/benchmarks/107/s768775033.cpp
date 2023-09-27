#include <bits/stdc++.h>
#define rep(i, n) for(int i = 0; i < (n); i++)
#define loop(i, a, n) for(int i = (a); i < (n); i++)
using namespace std;

int main(){
	string s1, s2; cin >> s1 >> s2;
	if(s1 == s2) cout << 0 << endl;
	else {
		int s1size = s1.size(), s2size = s2.size();
		int dp[s1size+1][s2size+1];
		memset(dp, 0, sizeof(dp));
		rep(i, s1size+1) dp[i][0] = i;
		rep(i, s2size+1) dp[0][i] = i;
		loop(i, 1, s1size+1)loop(j, 1, s2size+1){
			dp[i][j] = min(dp[i][j-1]+1, dp[i-1][j]+1);
			dp[i][j] = min(dp[i][j], dp[i-1][j-1] + !(s1[i-1] == s2[j-1]));
		}
		cout << dp[s1size][s2size] << endl;
	}
	return 0;
}

