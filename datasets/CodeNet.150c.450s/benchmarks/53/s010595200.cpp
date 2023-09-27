#include <iostream>
using namespace std;

int main()
{
	int n, i = 2;
	cin >> n;
	cout << n << ':';

	while (i * i <= n)
	{
		if (n % i != 0)
		{
			i++;
			continue;
		}
		cout << ' ' << i;
		n /= i;
	}
	cout << ' ' <<n << endl;

	return 0;
}