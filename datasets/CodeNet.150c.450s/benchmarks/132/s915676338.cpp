#include<iostream>
using namespace std;
const int MAX = 50;
int main()
{
	while (true)
	{
		int n, p;
		cin >> n >> p;
		if (!n && !p)
			break;
		int pOfCan[MAX] = { 0 };
		int pOfBowl = p;
		int winIdx = -1;
		int idx = 0;
		bool flag = false;
		while (true)
		{
			for (int i = 0; i < n; i++)
				if (pOfCan[i] == p)
				{
					winIdx = i;
					flag = true;
					break;
				}
			if (flag)
				break;
			if (idx > n - 1)
				idx = 0;
			if (pOfBowl > 0)
			{
				pOfCan[idx]++;
				pOfBowl--;
			}
			else if (pOfBowl == 0)
			{
				pOfBowl = pOfCan[idx];
				pOfCan[idx] = 0;
			}
			idx++;
		}
		cout << winIdx << endl;
	}
}
