#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int x1, x2;
	while (cin >> x1 >> x2)
	{
		while (x2 > 0)
		{
			int tmp = x1 % x2;
			x1 = x2;
			x2 = tmp;
		}
		cout << x1 << endl;
	}
}