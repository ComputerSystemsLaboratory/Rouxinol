#include <iostream>
#include <string>

using namespace std;

string s[2];
int q;
int dp[1000][1000];

int solve(int x,int y) {
	if(x == -1 || y == -1) return 0;
	if(dp[x][y] == -1) {
		if(s[0][x] == s[1][y]) dp[x][y] = solve(x-1,y-1) + 1;
		else dp[x][y] = max(solve(x-1,y),solve(x,y-1));
	}
	return dp[x][y];
}

int main() {
	cin >> q;
	for(int i = 0;i < q;i++) {
		for(int i = 0;i < 1000;i++)for(int j = 0;j < 1000;j++)dp[i][j] = -1;
		cin >> s[0] >> s[1];
		cout << solve(s[0].size()-1,s[1].size()-1) << endl;
	}
}

