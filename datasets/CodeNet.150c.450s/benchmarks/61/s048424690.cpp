#include <iostream>
using namespace std;

int n, a, b, c, x;
int Random()
{
	return (a * x + b) % c;
}

int main()
{
	int ary[100];

	while (cin >> n >> a >> b >> c >> x, n)
	{
		for (int i = 0; i < n; i++)
		{
			cin >> ary[i];
		}
		int ans = 0;
		int i = 0;
		while (true)
		{
			if (ary[i] == x) i++;
			if (i == n) break;
			x = Random();
			ans++;
			if (ans > 10000)
			{
				ans = -1;
				break;
			}
		}
		cout << ans << endl;
	}

	return 0;
}