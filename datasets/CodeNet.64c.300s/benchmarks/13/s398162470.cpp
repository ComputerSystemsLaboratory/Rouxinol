#include<iostream>
using namespace std;

int main()
{
	int x = 1, y = 1, n, value = 0;
	cin >> n;

	if (n == 0 || n == 1) value = 1;
	else
	{
		while (n > 1)
		{
			value = x + y;
			x = y;
			y = value;
			n--;
		}
	}
	cout << value << endl;

	return 0;
}