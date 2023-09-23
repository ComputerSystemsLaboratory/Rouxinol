#include <iostream>
using namespace std;

int main()
{
	int n;
	while (cin >> n, n)
	{
		int i = 0;
		int ans = 0;
		while (true)
		{
			i++;
			if (i >= n) break;

			int j = 0;
			int sum = i;
			while (true)
			{
				j++;
				sum += i + j;
				if (sum > n) break;
				if (sum == n) ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}