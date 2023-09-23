#include <iostream>

using namespace std;

int main()
{
	int a,b,c,d;
	
	cin >> a;
	if(a >= 3600)
	{
		b = a / 3600;
		a = a % 3600;
	}
	if(a >= 60)
	{
		c = a / 60;
		a = a % 60;
	}
	d = a;
	cout << b << ":" << c << ":" << d << endl;
	
}