#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n)
	{
		int sum = 0;
		for(int i = n; i < 600; i += n)
		{
			sum += i * i * n;
		}
		cout << sum << endl;
	}
}

int main()
{
	solve();
	return(0);
}