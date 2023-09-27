#include <iostream>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	unsigned long long int sum = 1;
	for(int i = 1; i <= n; ++i)
	{
		sum *= i;
	}
	cout << sum << endl;
}

int main()
{
	solve();
	return(0);
}