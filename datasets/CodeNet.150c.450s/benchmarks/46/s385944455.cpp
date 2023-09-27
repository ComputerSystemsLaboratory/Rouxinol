#include <iostream>
using namespace std;

int main()
{
	// Variable declaration
	int n = 0, x = 0, ans = 0;

	while (1)
	{
		// Input n, x
		cin >> n >> x;

		// Check of value
		if (n == 0 && x == 0)
		{
			// End of Input.
			break;
		}
		else if (n < 3 || n > 100)
		{
			continue;
		}

		for (int i = 1; i <= n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				for (int k = j + 1; k <= n; k++)
				{
					if ((i + j + k) == x)
					{
						ans++;
					}
				}
			}
		}
		// Output
		cout << ans << endl;
		ans = 0;
	}

	return 0;
}