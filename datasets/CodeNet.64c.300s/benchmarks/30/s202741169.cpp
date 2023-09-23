#include <iostream>

using namespace std;

int main()
{
	int n;

	while (true)
	{
		cin >> n;

		if (n == 0) { break; }

		n = 1000 - n;

		cout << n / 500 + (n / 100) % 5 + (n / 50) % 2 + (n / 10) % 5 + (n / 5) % 2 + n % 5 << endl;
	}

	return 0;
}