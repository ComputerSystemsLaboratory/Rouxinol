#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
static const int N = 100;

#define INT_MIN     (-2147483647 - 1) /* minimum (signed) int value */
#define INT_MAX       2147483647    /* maximum (signed) int value */

void solve(vector<int> &data)
{
	vector<vector<int> > dp(N + 1, vector<int>(N + 1, 0));

	int nums = data.size() - 1;
	for (int len = 2; len <= nums; ++len)
	{
		for (int l = 1; l <= nums - len + 1; ++l)
		{
			int r = l + len - 1;
			dp[l][r] = INT_MAX;
			for (int m = l; m <= r - 1; ++m)
			{
				dp[l][r] = min(dp[l][r], dp[l][m] + dp[m+1][r] + data[l - 1] * data[m] * data[r]);
			}
		}
	}

	cout << dp[1][nums] << endl;
}

int main()
{
	int num; cin >> num;
	vector<int> data(num + 1);
	for (int i = 1; i <= num; ++i)
		cin >> data[i-1] >> data[i];

	solve(data);
}