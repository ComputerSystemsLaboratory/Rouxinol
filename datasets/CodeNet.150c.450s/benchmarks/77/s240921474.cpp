#include <iostream>
using namespace std;
struct {int x, y;} p[21], l;
struct {char a; int d;} o[30];
int main()
{
	int n, m, t, i, j, k;
	bool f[21];
	while (cin >> n && n)
	{
		for (i = 0; i < (t = n); f[i] = true, i++)
			cin >> p[i].x >> p[i].y;
		cin >> m;
		for (i = 0; i < m; i++)
			cin >> o[i].a >> o[i].d;
		for (i = 0, l.x = l.y = 10; i < m; i++)
		{
			switch (o[i].a)
			{
			case 'N':
				for (j = 0; j < o[i].d; j++)
				{
					l.y++;
					for (k = 0; k < n; k++)
					{
						if (f[k] && l.x == p[k].x && l.y == p[k].y)
							f[k] = false, t--;
					}
				}
				break;
			case 'E':
				for (j = 0; j < o[i].d; j++)
				{
					l.x++;
					for (k = 0; k < n; k++)
					{
						if (f[k] && l.x == p[k].x && l.y == p[k].y)
							f[k] = false, t--;
					}
				}
				break;
			case 'S':
				for (j = 0; j < o[i].d; j++)
				{
					l.y--;
					for (k = 0; k < n; k++)
					{
						if (f[k] && l.x == p[k].x && l.y == p[k].y)
							f[k] = false, t--;
					}
				}
				break;
			case 'W':
				for (j = 0; j < o[i].d; j++)
				{
					l.x--;
					for (k = 0; k < n; k++)
					{
						if (f[k] && l.x == p[k].x && l.y == p[k].y)
							f[k] = false, t--;
					}
				}
				break;
			}
			if (t <= 0)
			{
				cout << "Yes" << endl;
				break;
			}
		}
		if (t > 0)
			cout << "No" << endl;
	}
}