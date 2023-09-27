#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <climits>
#include <cmath>
#include <cfloat>

#define FOR(i,b,n) for(int i=b;i<n;i++)
#define REP(i,b,n) for(i=b;i<n;i++)
#define CLR(mat) memset(mat, 0, sizeof(mat))

using namespace std;

int n, nums[200] = {0};
long long dp[200][30] = {0};

long long solve()
{
	CLR(dp);
	dp[0][nums[0]] = 1;
	
	FOR(j, 0, n-1)
	{
		FOR(i, 0, 21)
		{
			if( dp[j][i] != 0 )
			{
				if( i + nums[j+1] <= 20 )
					dp[j+1][i+nums[j+1]] += dp[j][i];
				
				if( i - nums[j+1] >= 0 )
					dp[j+1][i-nums[j+1]] += dp[j][i];
			}
		}
	}

	return dp[n-2][nums[n-1]];
}

int main()
{
	cin >> n;
	
	FOR(i, 0, n)
	{
		cin >> nums[i];
	}
	
	cout << solve() << endl;
	
	return 0;
}