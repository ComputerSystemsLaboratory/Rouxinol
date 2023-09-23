#include <iostream>
#include <algorithm>

using namespace std;

#define MAX_N 999999
#define MAX_D 30

bool prime_check(int n, int k = 2)
{
	if (n < k * k) { return true; }

	if (n % k == 0) { return false; }

	return prime_check(n, k + 1);
}

int main()
{
	int n;

	bool isprime[MAX_N + 1];

	for (int i = 2; i < MAX_N + 1; i++)
	{
		isprime[i] = prime_check(i);
	}

	while (cin >> n)
	{
		int c = 0;

		for (int i = 2; i <= n; i++)
		{
			if (isprime[i] == true)
			{
				c++;
			}
		}

		cout << c << endl;
	}

	return 0;
}