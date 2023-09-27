#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <queue>

using namespace std;

long long tri(int n)
{
	if(n <= 2)
	{
		return 1;
	}
	else if(n == 3)
	{
		return 2;
	}
	else
	{
		auto table = vector<int>(n+1,0);
		table[0] = 1;
		table[1] = 1;
		table[2] = 2;
		for(int i = 3;i <= n;i++)
		{
			table[i] = table[i-1] + table[i-2] + table[i-3];
		}
		return table[n];
	}
}

int main()
{
	int n;
	cin >> n;
	while(n)
	{
		int s = tri(n);
		int day = (s+9)/10;
		int year = (day+364)/365;
		cout << year << endl;
		cin >> n;
	}
	return 0;
}