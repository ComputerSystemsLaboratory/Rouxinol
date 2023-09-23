#include <iostream>

using namespace std;

int main()
{
	int d;

	while (cin >> d)
	{
		cout << 72000000 - 180000 * d + 100 * d * d << endl;
	}

	return 0;
}