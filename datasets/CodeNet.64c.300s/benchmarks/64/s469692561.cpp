#include<iostream>
using namespace std;

int main()
{
	int x, y, tmp;
	cin >> x >> y;
	if (x < y)
	{
		tmp = x;
		x = y;
		y = tmp;
	}
	while (y)
	{
		tmp = x;
		x = y;
		y = tmp;

		y -= y / x * x;
	}
	cout << x << endl;

	return 0;
}
