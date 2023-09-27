#include <math.h>
#include <iostream>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <string>

#define YES "YES"
#define NO "NO"
#define space ' '

using namespace std;

void func();

int main(void)
{
	
	func();

	return 0;
}

void func()
{

	int a,b, g, l;
	while (cin >> a >> b, !cin.eof())
	{
		int d[2] = { max(a, b), min(a, b) };
		while (d[1] != 0)
		{
			d[0] %= d[1];
			swap(d[0], d[1]);
		}
		g = d[0];

		l = max(a, b) / g*min(a, b);
		cout << g << space << l << endl;
	}
}