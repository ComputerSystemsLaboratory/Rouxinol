#include <iostream>

using namespace std;

void solve()
{
	bool flag[31];
	for(int i = 0; i < 31; ++i)
	{
		flag[i] = false;
	}
	for(int i = 0; i < 28; ++i)
	{
		int a;
		cin >> a;
		flag[a] = true;
	}
	for(int i = 1; i < 31; ++i)
	{
		if(!flag[i])
		{
			cout << i << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}