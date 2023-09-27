#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	bool check = true;
	cin >> a >> b;
	if (a == b)
	{
		cout << a << endl;
		return 0;
	}
	while (check)
	{
		if (a > b)
		{
			c = a % b;
			if (b%c == 0)
				check = false;
			a = c;
		}
		else
		{
			c = b % a;
			if (a%c == 0)
				check = false;
			b = c;
		}
	}
	cout << c << endl;
	return 0;
}