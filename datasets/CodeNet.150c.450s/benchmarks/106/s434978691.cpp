#include <iostream>

using namespace std;

void solve()
{
	int a, b, c;
	cin >> a >> b >> c;
	int ans = 0;
	for (int i = a; i <= b; ++i)
	{
		if (c % i == 0)
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