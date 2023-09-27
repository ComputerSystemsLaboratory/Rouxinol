#include <iostream>
#include <cmath>

using namespace std;
#define eps 1e-10

void solve()
{
	int N;
	cin >> N;
	while(N--)
	{
		double x[4], y[4];
		for(int i = 0; i < 4; ++i)
		{
			cin >> x[i] >> y[i];
		}
		if(x[1] == x[0] && x[3] == x[2])
		{
			if(y[1] == y[0] || y[3] == y[2])
			{
				cout << "NO" << endl;
			}
			else
			{
				cout << "YES" << endl;
			}
		}
		else if(x[1] == x[0] || x[3] == x[2])
		{
			cout << "NO" << endl;
		}
		else if((y[1] - y[0]) / (x[1] - x[0]) == (y[3] - y[2]) / (x[3] - x[2]))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}