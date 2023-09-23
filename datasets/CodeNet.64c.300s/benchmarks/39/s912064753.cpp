#include <iostream>

using namespace std;

int main()
{
	int n, t, cnt;

	while (cin >> n)
	{
		cnt = 0;

		for (int i = 0; i < 10; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				for (int k = 0; k < 10; k++)
				{
					t = n - (i + j + k);

					if (0 <= t && t < 10) { cnt++; }
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}