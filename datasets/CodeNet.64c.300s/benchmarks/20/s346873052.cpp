#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main()
{
	int d;
	double area;
	int x;
	//int y;
	while(cin >> d)
	{
		x = 0;
		//d = 0;
		area = 0;
		while(x <= 600 - d)
		{
			area += pow(x,2.0) * d;
			x += d;
			//cout << x << endl;
		}
		printf("%ld\n",(long int)area );
		//cout << area << endl;
	}
	//cout << area << endl;
}