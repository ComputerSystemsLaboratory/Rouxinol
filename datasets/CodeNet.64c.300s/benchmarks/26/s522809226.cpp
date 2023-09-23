#include <iostream>
using namespace std;

int main()
{
	unsigned long long int m, n;
	const unsigned long long int p = 1000000007;

	cin >> m >> n;

	int i = 2;
	while (n > 1)
	{
		if (n % i != 0)
		{
			i++;
			continue;
		}
		n /= i;
		unsigned long long int tmp = 1;
		for (int j = 0; j < i; j++)
		{
			tmp *= m;
			tmp %= p;
		}
		m = tmp;
	}

	cout << m << endl;

	return 0;
}