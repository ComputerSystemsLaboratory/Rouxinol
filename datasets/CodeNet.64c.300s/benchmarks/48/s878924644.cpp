#include <cmath>
#include <iostream>

using namespace std;

bool prime_check(int n)
{
	if (n == 1)
	{
		return false;
	}
	else if (n == 2)
	{
		return true;
	}
	else
	{
		for (int i = 2; i <= sqrt(n); i++)
		{
			if (n % i == 0)
			{
				return false;
			}
		}
	}

	return true;
}

int main()
{
	// --- variable define --- //

	int n, c;


	// --- prime check ( 2 to 999999 ) --- //

	bool isprime[1000000];

	for (int i = 1; i < 1000000; i++)
	{
		if (prime_check(i) == true)
		{
			isprime[i] = true;
		}
		else
		{
			isprime[i] = false;
		}
	}


	// --- main --- //

	while (cin >> n)
	{
		c = 0;

		for (int i = 2; i <= n; i++)
		{
			if (isprime[i] == true)
			{
				c++;
			}
		}

		cout << c << endl;
	}
}