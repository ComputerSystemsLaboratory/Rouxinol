#include<iostream>
using namespace std;
int UCLN(int a, int b)
{
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a; // or return b; a = b
}
int main()
{
	int x, y;
	cin >> x >> y;
	cout << UCLN(x, y) << endl;
	return 0;
}