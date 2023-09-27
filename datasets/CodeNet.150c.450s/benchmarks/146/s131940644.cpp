#include <iostream>
#include <cmath>

using namespace std;
typedef pair<double, double> P;

void solve()
{
	P p[4];
	int n;
	cin >> n;
	while(n--)
	{
		cin >> p[0].first >> p[0].second >> p[1].first >> p[1].second >> p[2].first >> p[2].second >> p[3].first >> p[3].second;
		if(p[0].first == p[1].first && p[2].first == p[3].first)
		{
			cout << "YES" << endl;
		}
		else if(p[0].first == p[1].first || p[2].first == p[3].first)
		{
			cout << "NO" << endl;
		}
		else
		{
			double a1 = (p[1].second - p[0].second) / (p[1].first - p[0].first);
			double a2 = (p[3].second - p[2].second) / (p[3].first - p[2].first);
			if(a1 == a2)
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