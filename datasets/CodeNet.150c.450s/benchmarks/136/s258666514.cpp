#include <iostream>

using namespace std;
 
int gcd(int x, int y)
{
	if (x % y == 0)
		return y;
	else
		return gcd(y, x % y);
}

int main()
{ 
	int a, b;

	while (cin >> a >> b)
	{
		int g = gcd(a, b);
		cout << g << " " << (a / g) * b << endl;
	}

	return 0;
}