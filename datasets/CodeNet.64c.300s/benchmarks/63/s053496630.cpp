#include<iostream>
using namespace std;
int main()
{
	int a, b,A, B;
	while (cin >> a >> b)
	{
		int c = a;
		int d = b;
		if (a <= b)
		{
			while (a != 0)
			{
				int r = b%a;
				b = a;
				a = r;
			}
			A = b;
		}
		else
		{
			while (b != 0)
			{
				int r = a%b;
				a = b;
				b = r;
			}
			A = a;
		}
		B = c / A*d;
		cout << A << " " << B << endl;
	}
	return 0;
}