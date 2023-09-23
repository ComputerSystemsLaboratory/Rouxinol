#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n;
	int way[30];
	while (cin >> n)
	{
		if (n == 0) break;
		for (int i = 1; i <= n; i++)
		{
			if (i == 1)
			{
				way[i] = 1;
			}
			else if (i == 2)
			{
				way[i] = 2;
			}
			else if (i == 3)
			{
				way[i] = 4;
			}
			else
			{
				way[i] = way[i - 3] + way[i - 2] + way[i - 1];
			}
		}
		if (way[n] % 3650 == 0)
		{
			cout << way[n] / 3650 << endl;
		}
		else
		{
			cout << way[n] / 3650 + 1 << endl;
		}
	}

	return 0;
}