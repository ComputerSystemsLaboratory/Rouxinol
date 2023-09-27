#include <iostream>

using namespace std;

int main()
{
	int  a = 100000;
	int b;
	cin >> b;
	int x;
	for (int i = 0; i < b; i++)
	{
		a = a*1.05;
		x = a % 1000;
		if (x>0)
		{
			a = a + 1000 - x;
		}
	}
	cout << a << endl;


	return 0;
}
