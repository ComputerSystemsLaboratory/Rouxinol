#include <iostream>

using namespace std;

void solve()
{
	int p;
	while(cin >> p, p)
	{
		p = 1000 - p;
		int ans = 0;
		if(p >= 500)
		{
			p -= 500;
			++ans;
		}
		if(p >= 100)
		{
			int k = p / 100;
			p -= k * 100;
			ans += k;
		}
		if(p >= 50)
		{
			p -= 50;
			++ans;
		}
		if(p >= 10)
		{
			int k = p / 10;
			p -= k * 10;
			ans += k;
		}
		if(p >= 5)
		{
			p -= 5;
			++ans;
		}
		if(p >= 1)
		{
			ans += p;
		}
		cout << ans << endl;
	}
}

int main()
{
	solve();
	return(0);
}