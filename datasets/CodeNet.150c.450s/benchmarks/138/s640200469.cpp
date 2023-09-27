#include <iostream>
#include <string>
using namespace std;

// a >= b
int ea(int a, int b)
{
	//cout << "(a,b)=" << a << "," << b << ")" << endl;
	int r = a % b;
	if (r == 0)
		return b;
	
	return ea(b, r);
}

int main()
{
	int x, y;
	cin >> x >> y;
	if (x < y)
	{
		cout << ea(y, x) << endl;;
	}
	else
	{
		cout << ea(x, y) << endl;
	}

	return 0;
}