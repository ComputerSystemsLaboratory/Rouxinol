#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, e, x[5], i, j, y;
	cin >> a >> b >> c >> d >> e;
	x[0] = a;
	x[1] = b;
	x[2] = c;
	x[3] = d;
	x[4] = e;
	for ( j = 0;j < 5; j++)
	{	for ( i = 0;i < 4; i++)
		{
			if (x[i] < x[i + 1])
				{
					y = x[i + 1];
					x[i + 1] = x[i];
					x[i] = y;
				}
		}
	}
	cout << x[0] << " " <<x[1] << " " << x[2] << " " << x[3] << " " << x[4] << endl;
return 0;
}