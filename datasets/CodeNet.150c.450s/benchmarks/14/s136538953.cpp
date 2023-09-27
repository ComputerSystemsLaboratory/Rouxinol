#include <cmath>
#include <iostream>

using namespace std;

int main()
{
	int n, t;

	bool check;

	cin >> n;

	for (int i = 1; i <= n; i++)
	{
		check = false;

		if (i % 3 == 0)
		{
			check = true;
		}
		else
		{
			t = i;

			for (int j = 0; j <= 5; j++)
			{
				if (t % 10 == 3)
				{
					check = true;
				}

				t /= 10;
			}
		}

		if (check == true)
		{
			cout << ' ' << i;
		}
	}

	cout << endl;

	return 0;
}