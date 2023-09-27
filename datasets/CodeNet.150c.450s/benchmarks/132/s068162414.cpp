#include<iostream>
using namespace std;

int main()
{
	int n, p;
	int member[50];
	while (cin >> n >> p)
	{
		if (n == 0 && p == 0)break;
		int initP = p;
		int index = 0;
		for (int i = 0; i < n; i++)
		{
			member[i] = 0;
		}

		while (true)
		{
			if (p > 0)
			{
				p--;
				member[index % n]++;
				if (member[index % n] == initP)
				{
					break;
				}
			}
			else
			{
				p += member[index % n];
				member[index % n] = 0;
			}
			index++;
		}
		cout << index % n << endl;
	}
	return 0;
}