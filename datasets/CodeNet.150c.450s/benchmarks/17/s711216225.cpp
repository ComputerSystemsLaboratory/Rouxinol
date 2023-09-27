#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void solve()
{
	vector<int> Num(5);
	for(int i = 0; i < 5; ++i)
	{
		cin >> Num[i];
	}
	sort(Num.begin(), Num.end(), greater<int>() );
	for(int i = 0; i < 5; ++i)
	{
		if(i == 4)
		{
			cout << Num[i];
		}
		else
		{
			cout << Num[i] << " ";
		}
	}
	cout << endl;
}

int main()
{
	solve();
	return(0);
}