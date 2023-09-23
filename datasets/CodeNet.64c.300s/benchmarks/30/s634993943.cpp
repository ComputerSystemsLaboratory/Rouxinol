#include <iostream>
using namespace std;
int main()
{
	int n, t, c[6] = {500, 100, 50, 10, 5, 1}, i, s, m, u;
	while (cin >> n && n)
	{
		t = 1000 - n;
		m = 0;
		while (t)
		{
			if (t >= 500)		s = 0;
			else if (t >= 100)	s = 1;
			else if (t >= 50)	s = 2;
			else if (t >= 10)	s = 3;
			else if (t >= 5)	s = 4;
			else				s = 5;
			for (i = s; i < 6; i++)
			{
				u = t / c[i];
				m += u;
				t -= c[i] * u;
			}
		}
		cout << m << endl;
	}
}