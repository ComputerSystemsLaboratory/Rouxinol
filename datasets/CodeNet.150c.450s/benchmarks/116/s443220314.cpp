#include <iostream>
#include <vector>

using namespace std;

void solve()
{
	int m, n;
	while(cin >> m >> n)
	{
		if(!m && !n)
		{
			break;
		}
		vector<int> Vec(m);
		for(int i = 0; i < m; ++i)
		{
			cin >> Vec[i];
		}
		int sum = 0;
		for(int i = 0; i < n; ++i)
		{
			sum += Vec[i];
		}
		int max = sum;
		for(int i = 1; i < m - n + 1; ++i)
		{
			sum += Vec[i + n - 1] - Vec[i - 1];
			if(sum > max)
			{
				max = sum;
			}
		}
		cout << max << endl;
	}
}

int main()
{
	solve();
	return(0);
}