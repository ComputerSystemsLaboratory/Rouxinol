#include <iostream>
#include <vector>

using namespace std;
typedef pair<double, double> P;

void solve()
{
	int n;
	while(cin >> n)
	{
		while(n--)
		{
			vector<P> p(4);
			for(int i = 0; i < 4; ++i)
			{
				cin >> p[i].first >> p[i].second;
			}
			if((p[0].first == p[1].first && p[0].second == p[1].second) || (p[2].first == p[3].first && p[2].second == p[3].second))
			{
				cout << "NO" << endl;
			}
			else if((p[0].first == p[1].first && p[2].first != p[3].first) || (p[0].first != p[1].first && p[2].first == p[3].first))
			{
				cout << "NO" << endl;
			}
			else if((p[1].second - p[0].second) / (p[1].first - p[0].first) == (p[3].second - p[2].second) / (p[3].first - p[2].first))
			{
				cout << "YES" << endl;
			}
			else
			{
				cout << "NO" << endl;
			}
		}
	}
}

int main()
{
	solve();
	return(0);
}