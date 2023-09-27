#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
	int a = 0;
	int b[100];
	int s = 0;
	for (int i = 0; i < 100; i++)
	{
		b[i] = 0;
	}
	while (cin >> a)
	{
		b[a]++;
	}
	for (int i = 0; i < 100; i++)
	{
		if (b[i] > s)
		{
			s = b[i];
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (b[i] == s)
		{
			cout << i << endl;
		}
	}
	
	return 0;
}