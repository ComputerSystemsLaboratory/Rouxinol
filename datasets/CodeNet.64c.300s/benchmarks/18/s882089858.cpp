#include <iostream>

using namespace std;

int dp[32];
void DPCalc()
{
	dp[0] = 1;
	dp[1] = 1;
	dp[2] = 2;
	for(int i = 0; i < 28; ++i)
	{
		dp[i + 3] = dp[i] + dp[i + 1] + dp[i + 2];
	}
}

void solve()
{
	DPCalc();
	int n;
	while(cin >> n)
	{
		if(n == 0)
		{
			break;
		}
		int ans = dp[n] / 365 / 10 + 1;
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}