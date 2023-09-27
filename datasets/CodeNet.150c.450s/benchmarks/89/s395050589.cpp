#include <iostream>

using namespace std;

bool isprime(int n, int k = 2)
{
    if(n == 1) { return false; }
    
	if (n < k * k) { return true; }

	if (n % k == 0) { return false; }

	return isprime(n, k + 1);
}

int main()
{
	int a, d, n, c;

	while (true)
	{
		cin >> a >> d >> n;

		if (n == 0) { break; }

		c = 0;

		while (c < n)
		{
			if (isprime(a))
			{
				c++;
			}
			
			a += d;
		}

		cout << a - d << endl;
	}

	return 0;
}