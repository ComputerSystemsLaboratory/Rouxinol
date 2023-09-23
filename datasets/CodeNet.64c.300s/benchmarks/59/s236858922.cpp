#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int n;
	cin >> n;

	int count = n;
	while (n--)
	{
		int x;
		cin >> x;

		for (int i = 2; i <= sqrt(x); ++i)
			if (x % i == 0)
			{
				count--;
				break;
			}
	}

	cout << count << endl;

	return 0;
}