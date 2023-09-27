#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<int, int> d;
	int n;

	while (cin >> n)
	{
		if (d.find(n) == d.end())
			d[n] = 1;
		else
			d[n]++;
	}

	map<int, int>::iterator it;
	int Max = 0;
	for (it=d.begin(); it!=d.end(); it++)
		if (Max < it->second)
			Max = it->second;

	for (it=d.begin(); it!=d.end(); it++)
		if (it->second == Max)
			cout << it->first << endl;
}