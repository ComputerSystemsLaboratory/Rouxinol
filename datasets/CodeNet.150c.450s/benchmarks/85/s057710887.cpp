#include <iostream>
#include <vector>
#include <algorithm>

typedef struct {
	int row;
	int column;
}Matrix;

const int MaxN = 100;

int dp[MaxN + 1][MaxN + 1];

int calc(std::vector<Matrix>& m, int a, int b)
{
	int ans;

	if (b - a == 0) {
		return 0;
	}
	if (b - a == 1) {
		if (dp[a][b] != 0) {
			return dp[a][b];
		}
		else {
			ans = m[a - 1].row*m[b - 1].column*m[a - 1].column;
			dp[a][b] = ans;
			return ans;
		}
	}
	else {
		if (dp[a][b] != 0) {
			return dp[a][b];
		}

		ans = calc(m, a, a) + calc(m, a + 1, b) + m[a - 1].row*m[b - 1].column*m[a - 1].column;
		for (int i = 1; i < b - a; i++) {
			int temp;
			temp = calc(m, a, a + i) + calc(m, a + i + 1, b) + m[a - 1].row*m[b - 1].column*m[a + i - 1].column;
			if (temp < ans) {
				ans = temp;
			}
		}
		dp[a][b] = ans;
	}

	return ans;
}

int main()
{
	int n;
	Matrix temp;
	std::vector<Matrix> m;
	
	std::cin >> n;

	for (int i = 0; i < n; i++) {
		std::cin >> temp.row >> temp.column;
		m.push_back(temp);
	}

	std::cout << calc(m, 1, m.size()) << std::endl;

	return 0;
}