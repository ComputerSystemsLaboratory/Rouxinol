#include <vector>
#include <iostream>

using namespace std;

int main()
{
	int n, p;

	while (true)
	{
		cin >> n >> p;

		if (n == 0 && p == 0) { break; }

		int c = 0, r = p;

		vector<int> d(n, 0);

		while (true)
		{
			if (p != 0)
			{
				d[c]++; p--;
			}
			else
			{
				p = d[c]; d[c] = 0;
			}

			bool ok = false;

			if (p == 0)
			{
				ok = true;

				for (int i = 0; i < n; i++)
				{
					if (i != c && d[i] != 0)
					{
						ok = false;
					}
				}
			}

			if (ok)
			{
				break;
			}

			c = (c + 1) % n;
		}

		cout << c << endl;
	}
}