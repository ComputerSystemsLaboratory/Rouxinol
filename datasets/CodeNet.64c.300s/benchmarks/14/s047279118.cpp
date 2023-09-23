#include <iostream>

using namespace std;

void solve()
{
	int a, b;
	cin >> a >> b;
	if (a < b)
	{
		cout << "a < b" << endl;
	}
	else if (a > b)
	{
		cout << "a > b" << endl;
	}
	else
	{
		cout << "a == b" << endl;
	}
}

int main()
{
	solve();
	return(0);
}