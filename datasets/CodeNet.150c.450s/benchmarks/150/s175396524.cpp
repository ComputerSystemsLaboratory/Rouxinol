#include<iostream>
using namespace std;

int main()
{
	int n, a;
	int count[10000 + 1];
	for (int i = 0; i < 10000 + 1; i++)
	{
		count[i] = 0;
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> a;
		count[a]++;
	}
	bool f = false;
	for (int i = 0; i < 10000 + 1; i++)
	{
		if (count[i] == 0)continue;
		while (count[i] > 0)
		{
			if (!f)
			{
				f = true;
				cout << i;
			}
			else
			{
				cout << " " << i;
			}
			count[i]--;
		}
	}

	cout << endl;

}