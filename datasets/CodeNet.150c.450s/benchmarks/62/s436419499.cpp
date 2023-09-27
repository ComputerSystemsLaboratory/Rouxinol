#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	int x,y,z;

	cin >> a >> b >> c;
	if(a>b){
		y = b;
		b = a;
		a = y;
	}
	if(b>c)
	{
		x = c;
		c = b;
		b = x;
	}
	if(a>b)
	{
		z = b;
		b = a;
		a = z;
	}
	cout << a << " " << b << " " << c << endl;

	return 0;
}