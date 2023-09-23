#include<iostream>
#include<stdio.h>
#include<vector>
#include<math.h>
#include<algorithm>

using namespace std;

int main()
{
	long long int m, n;
	long long int mod = 1000000007;
	cin >> m >> n;
	long long int power = 1;
	while (n > 0)
	{
		if (n & 1)
		{
			power = power * m % mod;
		}
		m = m * m % mod;
		n = n >> 1;
	}

	cout << power << endl;
	return 0;
}