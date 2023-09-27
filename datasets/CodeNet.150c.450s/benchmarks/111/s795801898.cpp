#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> num;
	for (int i = 0; i < n; i++)
	{
		int tmp;
		cin >> tmp;
		num.push_back(tmp);
	}
	long long ans[100][21] = { 0 };

	auto it = num.begin();
	ans[0][*it] = 1;

	for (int i = 0; i < n - 1; i++)
	{
		it++;
		for (int j = 0; j < 21; j++)
		{
			if (ans[i][j] != 0)
			{
				if (j - *it >= 0)
				{
					ans[i + 1][j - *it] += ans[i][j];
				}
				if (j + *it < 21)
				{
					ans[i + 1][j + *it] += ans[i][j];
				}
			}
		}
	}

	cout << ans[n - 2][*it] << endl;

	return 0;
}