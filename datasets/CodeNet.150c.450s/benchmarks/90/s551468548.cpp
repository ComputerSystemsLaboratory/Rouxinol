#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int count[101] = {};
	int n;
	int Max = 0;

	while (cin >> n)
	{
		count[n]++;
	}
	for (int i = 1; i <= 100; i++)
	{
		Max = max(Max, count[i]);
	}
	for (int i = 1; i <= 100; i++)
	{
		if (count[i] == Max) cout << i << endl;
	}

	return 0;
}