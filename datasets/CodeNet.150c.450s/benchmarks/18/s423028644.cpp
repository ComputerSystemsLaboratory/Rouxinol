#include <iostream>

using namespace std;

int main()
{
	int n, k = 100000;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		k = static_cast<int>(k * 1.05 + 999) / 1000 * 1000;
	}

	cout << k << endl;

	return 0;
}