#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{
	int n, m;
	while(cin >> n >> m)
	{
		if(!n && !m)
		{
			break;
		}
		vector<double> Vec1(n);
		vector<double> Vec2(m);
		double sum1 = 0;
		double sum2 = 0;
		for(int i = 0; i < n; ++i)
		{
			cin >> Vec1[i];
			sum1 += Vec1[i];
		}
		for(int i = 0; i < m; ++i)
		{
			cin >> Vec2[i];
			sum2 += Vec2[i];
		}
		double diff = (sum1 - sum2) / 2;
		sort(Vec1.begin(), Vec1.end());
		sort(Vec2.begin(), Vec2.end());
		for(int i = 0; i < n; ++i)
		{
			for(int j = 0; j < m; ++j)
			{
				if(Vec1[i] - diff == Vec2[j])
				{
					cout << Vec1[i] << " " << Vec2[j] << endl;
					goto NEXT;
				}
			}
		}
		cout << -1 << endl;
NEXT:
		;
	}
}

int main()
{
	solve();
	return(0);
}