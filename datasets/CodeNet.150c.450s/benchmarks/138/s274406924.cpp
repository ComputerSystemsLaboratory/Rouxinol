#include <vector>
#include <iostream>

using namespace std;

unsigned int gcd(unsigned int x, unsigned int y)
{
	if (x == y)
		return x;

	if (y == 0)
		return x;

	if (x > y)
		return gcd(y, x % y);

	return gcd(x, y % x);
}

int main()
{
	unsigned int x, y;
	cin >> x >> y;

	cout << gcd(x, y) << endl;

	return 0;
}

