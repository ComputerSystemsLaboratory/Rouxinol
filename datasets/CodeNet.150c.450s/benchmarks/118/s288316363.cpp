#include <iostream>

using namespace std;

int days[10] = {20, 19, 20, 19, 20, 19, 20, 19, 20, 19};
void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		int y, m, d;
		cin >> y >> m >> d;
		int sum = 0;
		for(int i = y + 1; i < 1000; ++i)
		{
			if(i % 3 == 0)
			{
				sum += 200;
			}
			else
			{
				sum += 195;
			}
		}
		if(y % 3 == 0)
		{
			for(int i = m; i < 10; ++i)
			{
				sum += 20;
			}
			sum += 20 - d;
		}
		else
		{
			for(int i = m; i < 10; ++i)
			{
				sum += days[i];
			}
			if(m % 2 == 0)
			{
				sum += 19 - d;
			}
			else
			{
				sum += 20 - d;
			}
		}
		cout << sum + 1 << endl;
	}
}

int main()
{
	solve();
	return(0);
}