#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

const int Size = 1000;
int dp[Size + 1][Size + 1];
std::string x;
std::string y;

int calc(int m, int n)
{
	int ans = 0;

	if (dp[m][n] != -1) {
		return dp[m][n];
	}

	if (m == 0 || n == 0) {
		return 0;
	}

	if (x[m - 1] == y[n - 1]) {
		ans = calc(m - 1, n - 1) + 1;
		dp[m][n] = ans;
		return ans;
	}

	ans = std::max(calc(m, n - 1), calc(m - 1, n));
	dp[m][n] = ans;
	return ans;
}


int main()
{
	int q;
	std::vector<int> ans;
	std::cin >> q;

	for (int i = 0; i < q; i++) {
		std::cin >> x >> y;
		for (int j = 0; j < Size + 1; j++) {
			for (int k = 0; k < Size + 1; k++) {
				dp[j][k] = -1;
			}
		}
		int temp = calc(x.size(), y.size());
		ans.push_back(temp);
	}

	for (unsigned int i = 0; i < ans.size(); i++) {
		std::cout << ans[i] << std::endl;
	}

	return 0;
}