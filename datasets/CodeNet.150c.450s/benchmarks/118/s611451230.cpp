#include <cstdio>
#include <iostream>
#include <cstdlib>

using namespace std;

int func(int y, int m, int d);

int main()
{
	int w;
	w = func(1000,1, 1);
	int n;
	cin >> n;
	for(int i = 0; i < n; i++){
		int y, m, d, x, z;
		cin >> y >> m >> d;
		x = func(y, m, d);
		z = w - x;
		cout << z << endl;
	}
}

int func(int y, int m, int d)
{
	int a, b, c;
	a = y - 1;
	a = ((2 * (a / 3) ) + a % 3)  * (20 * 5 + 19 * 5) +(a / 3) * (20 * 10);
	b = m - 1;
	if(y % 3 == 0) b = b * 20;
	else b = (b / 2 + b % 2) * 20 + (b / 2) * 19;
	c = a + b + d;
	return c; 
} 