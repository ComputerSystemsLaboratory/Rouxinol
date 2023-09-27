#include<iostream>
#include<algorithm>
using namespace std;
int calc(int p, int x)
{
	return p * (100 + x) / 100;
}
int main()
{
	while (true)
	{
		int x, y, s;
		cin >> x >> y >> s;
		if (!x && !y && !s)
			break;
		int maxv = -1;
		for (int i = 1; i < s; i++)
			for (int j = 1; j < s; j++)
			{
				if (calc(i, x) + calc(j, x) != s)
					continue;
				maxv = max(maxv, calc(i, y) + calc(j, y));
			}
		cout << maxv << endl;
	}
}
