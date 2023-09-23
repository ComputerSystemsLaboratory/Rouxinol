#include<iostream>

using namespace std;

int dp[31], n, i, result[100];

int main()
{	
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;

	for (int a = 3; a < 31; a++)
	{
		dp[a] = dp[a - 1] + dp[a - 2] + dp[a - 3];
	}

	for (;; i++)
	{
		cin >> n;
		if (n == 0)
		{
			break;
		}
		result[i] = dp[n] / 3650 + 1;
	}

	for (int a = 0; a < i; a++)
	{
		cout << result[a] << endl;
	}


	return 0;
}