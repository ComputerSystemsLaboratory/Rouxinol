#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	int n, i, j;
	int dp[40];

	memset(dp, 0, sizeof(dp));
	
	dp[0] = 1;
	
	for( i = 0; i <= 30; i++)
	{
			for( j = 1; j <= 3; j++)
				dp[i+j] += dp[i];
	}
	
	while( cin >> n , n)
	{
		cout << ((dp[n] + 9)/10 + 364)/365 << endl;
	}
	
	return 0;
}