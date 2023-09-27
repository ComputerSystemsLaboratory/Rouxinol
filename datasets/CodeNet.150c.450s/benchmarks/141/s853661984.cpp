#include <stdio.h>
#include <iostream>
#include <map>
using namespace std;

typedef pair<double, double> P;
bool isIn(P a, P b, P c, P p)
{
	P s1(b.first - a.first, b.second - a.second);
	P s2(c.first - b.first, c.second - b.second);
	P s3(a.first - c.first, a.second - c.second);
	P p1(p.first - a.first, p.second - a.second);
	P p2(p.first - b.first, p.second - b.second);
	P p3(p.first - c.first, p.second - c.second);
	double x = (s1.first * p1.second) - (s1.second * p1.first);
	double y = (s2.first * p2.second) - (s2.second * p2.first);
	double z = (s3.first * p3.second) - (s3.second * p3.first);

	if (x >= 0 && y >= 0 && z >= 0) return true;
	if (x <= 0 && y <= 0 && z <= 0) return true;
	return false;
}

int main()
{
	P pos[4];
	while (true)
	{
		for (int i = 0; i < 4; i++)
		{
			if (!(cin >> pos[i].first >> pos[i].second)) return 0;
		}
		if (isIn(pos[0], pos[1], pos[2], pos[3])) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	/*int n;
	int count = 0;
	P pos[100];*/

	/*while (true)
	{
		count = 0;
		scanf("%d", &n);
		if (n == 0) break;

		for (int i = 0; i < n; i++)
		{
			scanf("%lf,%lf", &(pos[i].first), &(pos[i].second));
		}
		for (int p = 0; p < n; p++)
		{
			bool flag = false;
			for (int a = 0; a < n; a++)
			{
				for (int b = 0; b < n; b++)
				{
					for (int c = 0; c < n; c++)
					{
						if (a == b || b == c || c == p) continue;
						if (isIn(pos[a], pos[b], pos[c], pos[p]))
						{
							count++;
							flag = true;
							break;
						}
					}
					if (flag) break;
				}
				if (flag) break;
			}
	}

		printf("%d\n", count);
	}*/
	return 0;
}