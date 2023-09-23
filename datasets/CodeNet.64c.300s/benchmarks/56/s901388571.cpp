#include <bits/stdc++.h>
using namespace std;

#define rep(i,a,b) for(int i=a;i<b;i++)

int days[11] = {0, 20, 19, 20, 19, 20, 19, 20, 19, 20, 19};

void solve()
{
	int y, m, d;
	cin >> y >> m >> d;

	int ans = 0;

	if (d != 1)
	{
		if ((y % 3) == 0)
		{
			ans += 20 - d + 1;
		}
		else
		{
			ans += days[m] - d + 1;
		}
		d = 1;
		m++;
		if (m == 11)
		{
			y++;
			m = 1;
		}
	}

	if (m != 1)
	{
		rep(mm, m, 11)
		{
			if ((y % 3) == 0)
				ans += 20;
			else
				ans += days[mm];
		}
		m = 1;
		y++;
	}

	rep(yy, y, 1000)
	{
		if ((yy % 3) == 0)
			ans += 20 * 10;
		else
			ans += 20 * 10 - 5;
	}

	cout << ans << endl;
}

int main()
{
	int n; cin >> n;
	rep(nn, 0, n) solve();
}