#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int x)
{
	if (x == 2)
		return true;

	if (x % 2 == 0)
		return false;

	for (int i = 3; i*i <= x; i += 2)
		if (x % i == 0)
			return false;

	return true;
}

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	int count = 0, x;
	while (n--)
	{
		cin >> x;
		count += is_prime(x);
	}

	cout << count << endl;

	return 0;
}