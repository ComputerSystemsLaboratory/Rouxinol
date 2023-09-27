#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string s, t;

vector<vector<int>> memo(2000, vector<int>(2000,-1));

//s???i??????????????§???t???j??????????????§?????£?????¨??????LCS
int solve(int i, int j) {
	if (memo[i][j] != -1)return memo[i][j];

	if (i == 0 && j == 0)return (s[0] == t[0]);
	if (i == 0)return memo[i][j] = (bool)(solve(i, j - 1) + (s[i] == t[j]));
	if (j == 0)return memo[i][j] = (bool)(solve(i - 1, j) + (s[i] == t[j]));
	if (s[i] == t[j]) return solve(i - 1, j - 1) + 1;
	return memo[i][j] = max(solve(i - 1, j), solve(i, j - 1));
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		cin >> s >> t;
		memo = vector<vector<int>>(2000, vector<int>(2000,-1));
		cout << solve(s.size() - 1, t.size() - 1) << endl;
	}
}