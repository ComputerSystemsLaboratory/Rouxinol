#include <iostream>

using namespace std;

void solve()
{
	int count = 1;
	int x;
	while (cin >> x, x)
	{

		cout << "Case " << count << ": " << x << endl;
		++count;
	}
}

int main()
{
	solve();
	return(0);
}