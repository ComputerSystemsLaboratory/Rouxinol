#include<iostream>
using namespace std;
long su[100000010] = { 0 };
long sai;
int main()
{
	long n, k;
	long i, j;
	long a;
	while (cin >> n >> k, n != 0 && k != 0)
	{
		for (i = 1; i <= n; i++)
		{
			cin >> a;
			su[i] = su[i - 1] + a;
		}
		sai = 0;
		for (i = k; i <= n; i++)
		{
			if (sai < su[i] - su[i - k])
			{
				sai = su[i] - su[i - k];
			}
		}
		cout << sai << endl;
	}
	return 0;
}