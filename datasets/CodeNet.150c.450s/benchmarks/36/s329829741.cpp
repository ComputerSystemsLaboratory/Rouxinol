#include <iostream>

using namespace std;

void solve()
{
	int d;
	while(cin >> d)
	{
		int sum = 0;
		int areas = 600 / d;
		for(int i = d; i < 600; i += d)
		{
			sum += d * i * i;
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}