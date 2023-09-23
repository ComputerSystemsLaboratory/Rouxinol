#include<iostream>
using namespace std;
int main()
{
	int a, b, c, d, c2, irekae, i, n;
	a = 0;
	b = 0;
	c = 0;
	d = 0;
	c2 = 0;
	cin >> n;
	for( i = 0; i < n; i++)
	{
		cin >> a >> b >> c;
	if( a > c)
	{
		irekae = a;
		a = c;
		c = irekae;
	}
	if ( b > c )
	{
		irekae = b;
		b = c;
		c = irekae;
	}
		d = (a * a) + (b * b);
		c2 = (c * c); 
		if( d == c2 )
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}