#include <iostream>
using namespace std;

#define Max 1000002
bool prime[Max];

int main()
{
	for (int i = 2; i < Max; i++)
	{
		prime[i] = true;
	}
	for (int i = 2; i < Max; i++)
	{
		if (!prime[i]) continue;
		for (int j = i * 2; j < Max; j += i)
		{
			prime[j] = false;
		}
	}

	int a, d, n;
	while (cin >> a >> d >> n, a + d + n)
	{
		int m = a;
		while (true)
		{
			if (prime[m]) n--;
			if (n == 0) break;
			m += d;
		}
		cout << m << endl;
	}

	return 0;
}