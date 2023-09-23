#include<iostream>
using namespace std;

int main()
{
	static int p[10 * 100 * 1000] = {};
	int index = 0;
	int a, d, n;
	while (cin >> a >> d >> n && a != 0 && d != 0 && n != 0)
	{
		index = 0;
		for (int i = a; i < 1000000; i += d)
		{
			bool f = true;
			if (i < 2)continue;
			for (int j = 2; j * j <= i; j++)
			{
				if (i % j == 0)
				{
					f = false;
					break;
				}
			}

			if (f)
			{
				p[index] = i;
				index++;
				if (index >= n)break;
			}
		}
		cout << p[n - 1] << endl;
	}
	return 0;
}