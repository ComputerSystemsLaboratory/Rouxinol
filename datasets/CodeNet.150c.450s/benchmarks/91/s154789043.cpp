#include <iostream>
#include <cmath>
using namespace std;
const int maxn = 1000000;
int dp[maxn];
bool ar[maxn];
int main()
{
	for(int i = 2;i<=maxn;i++)
	{
		if(!ar[i])
		{
			for(int j = 2;j*i<maxn;j++)
				ar[i*j] = true;
		}
		dp[i] = dp[i-1] + !ar[i];
	}
	int n;
	while(cin >> n)
		cout << dp[n] <<endl;
	return 0;
}