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
	int n, a = 100000;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		int b = a * 5 / 100;
		a += b;
		if (a % 1000)a = (a / 1000 + 1) * 1000;
	}
	cout << a << endl;
	return 0;
}