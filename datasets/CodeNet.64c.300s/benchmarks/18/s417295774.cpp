#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> num;
	do
	{
		cin >> n;
		num.push_back(n);
	}while (n != 0);
	num.pop_back();

	int dp[30];
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;

	for (int i = 3; i < 30; i++)
	{
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	for (auto it = num.begin(); it != num.end(); it++)
	{
		cout << dp[*it - 1]/3650 + 1 << endl;
	}

	return 0;
}