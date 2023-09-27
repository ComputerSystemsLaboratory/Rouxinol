#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int a;
	int b;

	while (cin >> a >> b)
	{
		int n = a + b;

		if (n / 10 == 0)
		{
			cout << 1 << endl;
		}
		else if (n / 10 >= 1 && n / 10 <= 9)
		{
			cout << 2 << endl;
		}
		else if (n / 10 >= 10 && n / 10 <= 99)
		{
			cout << 3 << endl;
		}
		else if (n / 10 >= 100 && n / 10 <= 999)
		{
			cout << 4 << endl;
		}
		else if (n / 10 >= 1000 && n / 10 <= 9999)
		{
			cout << 5 << endl;
		}
		else if (n / 10 >= 10000 && n / 10 <= 99999)
		{
			cout << 6 << endl;
		}
		else if (n / 10 >= 100000 && n / 10 <= 999999)
		{
			cout << 7 << endl;
		}
	}
}

