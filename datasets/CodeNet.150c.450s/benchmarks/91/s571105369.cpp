#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	char prime[999999];
	for (int i = 0; i <= 999999; i++)prime[i] = '1';
	prime[0] = '0';
	prime[1] = '0';
	for (int i = 2; i*i <= 999999; i++)
	{
		if (prime[i] == '1')
		{
			int j = i * 2;
			while (j <= 999999)
			{
				prime[j] = '0';
				j += i;
			}
		}
	}
	int n;
	while (cin >> n)
	{
		int sum = 0;
		for (int i = 0; i <= n; i++)
		{
			if (prime[i] == '1')sum++;
		}
		cout << sum << endl;
	}
	return 0;
}