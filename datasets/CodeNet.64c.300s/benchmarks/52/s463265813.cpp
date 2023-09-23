#include <iostream>
using namespace std;

int dp[11][46] = {0};

int main()
{
	dp[0][0]=1;
	for(int k=0; k<10; k++)
	{
		for(int i=k; i>=0; i--)
		for(int j=0; j<46-k; j++)
		{
			dp[i+1][j+k] += dp[i][j];
		}
	}

	int N,S;
	while(cin>>N>>S, N||S)
	{
		if(0<=N && N<11 && 0<=S && S<46)
		{
			cout << dp[N][S] << endl;
		}
		else
		{
			cout << 0 << endl;
		}
	}
}