#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	bool A = false, B = false, C=false;
	int a, b, c,x,y,z;
	cin >> a >> b >> c;
	if (a == b == c)
	{
		cout << a <<" "<< b <<" "<< a << endl;
	}
	else if (a==b && a!=c)
	{
		if (a < c)cout << a <<" "<< b <<" "<< c << endl;
		else cout << c << " " << a << " " << b << endl;
	}
	else if (b == c && a!=b)
	{
		if (a < b)cout << a << " " << c << " " << b << endl;
		else cout << c << " " << b << " " << a << endl;
	}
	else if (a == c && a!=b)
	{
		if (a < b)cout << a << " " << c << " " << b << endl;
		else cout << b << " " << c << " " << a << endl;
	}
	else 
	{
		x = min(a, min(b, c));
		z = max(a, max(b, c));
		if (a != x && a != z)y = a;
		if (b != x && b != z)y = b;
		if (c != x && c != z)y = c;

		cout << x << " " << y << " " << z << endl;
	}
	return 0;
}
