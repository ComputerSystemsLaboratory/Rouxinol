#include <iostream>
#include <algorithm>
#include <cmath>
#include <string.h>

using namespace std;

int dp[1010][1010];



int solve() {

	string s,t;

	cin >> s >> t;


	int max_s = s.length();
	int max_t = t.length();

	memset(dp,0, sizeof(int) * 1010 * 1010);



	for (int i = 1; i <= max_s; i++) {
		for (int j = 1; j <= max_t; j++) {
			if (s.at(i - 1) == t.at(j -1)) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			} else {
				dp[i][j] = max(dp[i][j - 1],dp[i -1][j]);			
			}
		}
	}
	return dp[max_s][max_t];
}

int main() {
	int q;

	cin >> q;

	for (int i = 0; i  < q; i++) {
		cout << solve() << endl;
	}

}