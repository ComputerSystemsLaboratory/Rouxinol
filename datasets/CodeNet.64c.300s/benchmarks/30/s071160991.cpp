#include <iostream>

using namespace std;

void solve()
{
	int n;
	while(cin >> n, n)
	{
		n = 1000 - n;
		int count = 0;
		count += n / 500;
		n %= 500;
		count += n / 100;
		n %= 100;
		count += n / 50;
		n %= 50;
		count += n / 10;
		n %= 10;
		count += n / 5;
		n %= 5;
		count += n;
		cout << count << endl;
	}
}

int main()
{
	solve();
	return(0);
}