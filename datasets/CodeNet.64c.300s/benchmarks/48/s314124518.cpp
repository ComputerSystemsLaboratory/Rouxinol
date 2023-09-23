#include<iostream>
#include<cstring>
#include<math.h>
using namespace std;
const int MAX = 1000000;
int prime(int n)
{
	int ans = 0;
	bool prime[MAX];
	memset(prime, 0, sizeof(prime));
	for (int i = 2; i < n;i++)  
	{ 
		for (int j = 2; j <= n / i; j++)
		{
			if (i*j <= n)
				prime[i*j] = 1;
		}
	}
	for (int i = 2; i <= n; i++)
	{
		if (!prime[i])
			ans++;
	}
	return ans;
}
int main()
{
	int n, m = 0;
	while (cin >> n&&m<30)
	{
		cout << prime(n) << endl;
		m++;
	}
	return 0;
}