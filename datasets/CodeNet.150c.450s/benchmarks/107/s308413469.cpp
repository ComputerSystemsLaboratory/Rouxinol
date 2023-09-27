#include <iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

typedef vector<int> vi;
typedef vector<vi> vvi;
int main() {
		string s1;
		string s2;
		cin >> s1;
		cin >> s2;
		int a = s1.size();
		int b = s2.size();
		vvi dp(a + 1, vi(b + 1, 0));
		for (int i = 0; i <= a; i++)dp[i][0] = i;
		for (int i = 0; i <= b; i++)dp[0][i] = i;
		for (int i = 1; i <= a; i++) {
			for (int j = 1; j <= b; j++) {
				dp[i][j] = min(dp[i - 1][j]+1, min(dp[i-1][j-1]+1,dp[i][j - 1]+1));
				if (i >= 1 && j >= 1 && s1[i - 1] == s2[j - 1]) {
					dp[i][j] = min(dp[i][j], dp[i - 1][j - 1]);
				}
			}
		}
		/*for (int i = 0; i <= a; i++) {
			for (int j = 0; j <= b; j++) {
				cout << dp[i][j] << " ";
			}
			cout << endl;
		}*/
		cout <<dp[a][b] << endl;
	
	return 0;
}