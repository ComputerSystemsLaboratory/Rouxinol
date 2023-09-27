#include <iostream>
#include <map>

using namespace std;

void solve()
{
	map<int, int> Map;
	int n;
	while(~scanf("%d", &n))
	{
		++Map[n];
	}
	int Max = 0;
	for(map<int, int>::iterator Ite = Map.begin(); Ite != Map.end(); ++Ite)
	{
		if(Max < Ite->second)
		{
			Max = Ite->second;
		}
	}
	for(map<int, int>::iterator Ite = Map.begin(); Ite != Map.end(); ++Ite)
	{
		if(Ite->second == Max)
		{
			cout << Ite->first << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}