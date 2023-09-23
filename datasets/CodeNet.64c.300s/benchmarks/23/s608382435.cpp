#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	int a = 0, b = 0;
	int tmp1 = 0, tmp2 = 0;

	cin >> a >> b;
	tmp1 = a * b;
	tmp2 = a * 2 + b * 2;
	cout << tmp1 << " " << tmp2 << endl;

	return 0;
}