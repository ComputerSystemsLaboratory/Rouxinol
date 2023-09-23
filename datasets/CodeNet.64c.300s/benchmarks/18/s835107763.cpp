#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int dp[100];
	dp[0] = 1;
	dp[1] = 2;
	dp[2] = 4;
	
	REP(i,3,30)
	{
		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
	}

	int n;
	while(cin >> n && n)
	{
		cout << (dp[n-1]/10/365) + 1 << endl;
	}

	return 0;
}