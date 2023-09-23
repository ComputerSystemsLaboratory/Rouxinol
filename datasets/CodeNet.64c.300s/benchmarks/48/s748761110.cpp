#include <iostream>
#include <cmath>
using namespace std;
bool IsPrime(int n)
{
	int s = floor(sqrt(n)+0.5);
	for(int i = 2;i<=s;i++)
		if(n%i==0)return false;
	return true;
}
const int maxn = 1000000;
int dp[maxn];
int main()
{
	for(int i = 2;i<=maxn;i++)
		if(IsPrime(i))
			dp[i] = dp[i-1]+1;
		else dp[i] = dp[i-1];
	int n;
	while(cin >> n)
		cout << dp[n] <<endl;
	return 0;
}