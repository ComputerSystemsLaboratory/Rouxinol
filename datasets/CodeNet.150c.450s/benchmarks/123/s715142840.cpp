#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	int ans = 0;
	for (int i = 0; i < n; ++i)
	{
		int a;
		cin >> a;
		bool flag = true;
		for (int i = 2; i <= sqrt(a); ++i)
		{
			if (a % i == 0)
			{
				flag = false;
				break;
			}
		}
		if (flag)
		{
			++ans;
		}
	}
	cout << ans << endl;
}

int main()
{
	solve();
	return(0);
}