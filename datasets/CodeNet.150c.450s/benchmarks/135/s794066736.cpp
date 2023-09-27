#include<iostream>
#include<string.h>
using namespace std;
static int table[1500 * 1000];
int main()
{
	int n, m;
	while (cin >> n >> m && n != 0 || m != 0)
	{
		int x[1502];
		int y[1502];
		memset(table, 0, sizeof table);
		y[0] = 0;
		for (int i = 0; i < n; i++)
		{
			int h;
			cin >> h;
			y[i + 1] = y[i] + h;
		}
		x[0] = 0;
		for (int i = 0; i < m; i++)
		{
			int w;
			cin >> w;
			x[i + 1] = x[i] + w;
		}
		for (int i = 0; i < m; i++)
		{
			for (int j = i + 1; j <= m; j++)
			{
				table[x[j] - x[i]]++;
			}
		}
		int count = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = i + 1; j <= n; j++)
			{
				if (table[y[j] - y[i]] > 0)
				{
					count += table[y[j] - y[i]];
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}