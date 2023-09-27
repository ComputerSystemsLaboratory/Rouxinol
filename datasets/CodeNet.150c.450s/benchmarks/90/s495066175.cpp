#include <iostream>
#include <set>

using namespace std;

void solve()
{
	multiset<int> ms;
	int n;
	while(cin >> n)
	{
		ms.insert(n);
	}
	int max = 0;
	for(int i = 1; i < 101; ++i)
	{
		if(max < ms.count(i))
		{
			max = ms.count(i);
		}
	}
	for(int i = 1; i < 101; ++i)
	{
		if(max == ms.count(i))
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