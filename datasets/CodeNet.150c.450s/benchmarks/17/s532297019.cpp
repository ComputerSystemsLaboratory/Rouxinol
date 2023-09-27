#include <utility>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int a[5];

	for (int i = 0; i < 5; i++)
	{
		cin >> a[i];

		for (int j = (i - 1); j >= 0; j--)
		{
			if (a[j] < a[j + 1])
			{
				swap(a[j], a[j + 1]);
			}
		}
	}

	cout << a[0] << ' ' << a[1] << ' ' << a[2] << ' ' << a[3] << ' ' << a[4] << endl;
	
	return 0;
}