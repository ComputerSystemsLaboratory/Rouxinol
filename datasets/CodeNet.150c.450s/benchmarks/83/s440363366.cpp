#include <iostream>
#include <cstdint>

using namespace std;

uint64_t N,W,v[100],w[100],dp[100][10000];

uint64_t max(uint64_t a,uint64_t b)
{
	if(a > b)
		return a;
	else
		return b;
}

int _dp(int _d,int _w)
{
	if(_d < 0 || _w < 0 || _d >= N || _w >= W)
		return 0;
	else
		return dp[_d][_w];
}

int main(void)
{
	cin >> N >> W;
	for(int i = 0;i < N;i++)
	{
		cin >> v[i] >> w[i];
	}
	for(int i = N - 1;i >= 0;i--)
	{
		for(int ii = 0;ii < W;ii++)
		{
			uint64_t t = 0;
			if(ii + 1 >= w[i])
			{
				t = _dp(i + 1,ii - w[i]) + v[i];
			}
			dp[i][ii] = max(_dp(i + 1,ii),t);
		}
	}
	uint64_t result = dp[0][W - 1];
	cout << result << endl;
	return 0;
}