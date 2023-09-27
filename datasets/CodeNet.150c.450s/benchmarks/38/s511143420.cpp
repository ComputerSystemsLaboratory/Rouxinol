#include <iostream>
using namespace std;
void isTriangle()
{
	int j;
	cin >> j;
	for (int i = 0; i < j; i++)
	{
		int a, b, c;
		cin >> a;
		cin >> b;
		cin >> c;
		bool flag = false;
		if (a * a + b*b == c * c)flag = true;
		if (b * b + c * c == a * a)flag = true;
		if (c * c + a *a == b * b)flag = true;

		if (flag)cout << "YES" << endl;
		if (!flag)cout << "NO" << endl;
	}
}

int main()
{
	isTriangle();
	return 0;
}