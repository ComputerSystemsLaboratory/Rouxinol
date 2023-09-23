#include <iostream>
using namespace std;
int main()
{
	int n, x;
	bool b[301];
	int cnt[1000];
	int c = 0;
	while (true)
	{
		cin >> n >> x;
		if (n == 0 && x == 0)
		{
			break;
		}
		for (int i = 0; i <= n; i++)
		{
			b[i] = false;
		}
		int count = 0;
		for (int x1 = 1; x1 <= n; x1++)
		{
			for (int x2 = 1; x2 <= n; x2++)
			{
				for(int x3 = 1; x3 <= n; x3++)
				{
					if (x1 == x2 || x1 == x3 || x2 == x3)
					{
						continue;
					}

					int result = x1 + x2 + x3;
					if (result == x)
					{

						count++;

					}
				}
			}
		}
		cnt[c] = count;
		c++;
	}
	for (int i = 0; i < c; i++)
	{
		cout << cnt[i] / 6 << endl;
	}
	return 0;
}
