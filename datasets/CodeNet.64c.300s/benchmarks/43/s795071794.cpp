#include <iostream>

using namespace std;

void solve()
{
	int a, b, c, d;
	while(cin >> a >> b >> c >> d)
	{
		int e, f, g, h;
		cin >> e >> f >> g >> h;
		int sum1 = a + b + c + d;
		int sum2 = e + f + g + h;
		if(sum1 >= sum2)
		{
			cout << sum1 << endl;
		}
		else
		{
			cout << sum2 << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}