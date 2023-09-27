#define _USE_MATH_DEFINES
#include <cmath>

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	unsigned int a,b,c;
	
	cin >> n;
	
	while (n)
	{
		cin >> a >> b >> c;
		int max, v1, v2;
		if (a > b && a > c)
		{
			if (pow(a, 2) == pow(b, 2) + pow(c, 2))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else if (b > a && b > c)
		{
			if (pow(b, 2) == pow(a, 2) + pow(c, 2))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else if (c > a && c > b)
		{
			if (pow(c, 2) == pow(a, 2) + pow(b, 2))
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
		
		n--;
	}
	return 0;
}