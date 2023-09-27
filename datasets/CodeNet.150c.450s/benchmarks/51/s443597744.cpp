#include <iostream>
#include <map>

using namespace std;

void solve()
{
	map<int, int> Map;
	for(int i = 1; i < 31; ++i)
	{
		Map[i] = 0;
	}
	for(int i = 0; i < 28; ++i)
	{
		int Num;
		cin >> Num;
		Map[Num]++;
	}
	for(int i = 1; i < 31; ++i)
	{
		if(Map[i] == 0)
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