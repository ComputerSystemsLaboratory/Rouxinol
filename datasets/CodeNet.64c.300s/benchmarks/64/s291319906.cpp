#include <iostream>
using namespace std;

int gcd(int x, int y)
{
	if (x == 0 || y == 0) return (x == 0 ? y : x);
	if (x == 1 || y == 1) return 1;
	return (x > y ? gcd(y, x%y) : gcd(x, y%x));
}

int main()
{
	int a, b;
	cin >> a >> b;

	cout << gcd(a, b) << endl;

	return 0;
}