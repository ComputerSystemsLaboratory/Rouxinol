#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	bool IsPrime[1000010] = {};
	for (int i = 2; i < 999999; i++)
	{ 
		IsPrime[i] = true;
	}
	for (int i = 2; i*i <= 999999; i++)
	{
		if (IsPrime[i])
		{
			for (int j = i * 2; j <= 999999; j += i)
			{
				IsPrime[j] = false;
			}
		}
	}

	int n;
	while (cin >> n)
	{
		int ans = 0;
		for (int i = 0; i <= n; i++)
		{
			if (IsPrime[i]) ans++;
		}
		cout << ans << endl;
	}
	return 0;
}