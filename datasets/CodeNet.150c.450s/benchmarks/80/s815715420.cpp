#include <iostream>

using namespace std;

void solve()
{
	int sum1 = 0;
	int sum2 = 0;
	for(int i = 0; i < 4; ++i)
	{
		int temp;
		cin >> temp;
		sum1 += temp;
	}
	for(int i = 0; i < 4; ++i)
	{
		int temp;
		cin >> temp;
		sum2 += temp;
	}
	if(sum1 >= sum2)
	{
		cout << sum1 << endl;
	}
	else
	{
		cout << sum2 << endl;
	}
}

int main()
{
	solve();
	return(0);
}