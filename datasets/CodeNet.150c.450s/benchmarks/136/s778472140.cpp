#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	int a, b;
	while (cin >> a >> b)
	{
		int x = a, y = b;
		while (a%b != 0)
		{
			int r = a%b;
			a = b;
			b = r;
		}
		cout << b << " " << x / b*y / b*b << endl;
	}
	return 0;
}