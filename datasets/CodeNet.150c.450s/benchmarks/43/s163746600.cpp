#include <iostream>
using namespace std;
int main()
{
	int a = 1, e = 0, f = 0, c, d;
	while (1)
	{
		cin >> a;
		if (a == 0)
		{
			break;
		}
		e = 0;
		f = 0;
		for (int b = 0; b < a; b++)
		{
			cin >> c;
			cin >> d;
			if (c > d)
			{
				e += c;
				e += d;
			}
			else if (d > c)
			{
				f += c;
				f += d;
			}
			else
			{
				e += c;
				f += d;
			}
		}
		cout << e << " " << f << endl;
	}	return 0;
}