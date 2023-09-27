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
		while (true)
		{
			if (idx > n - 1)
				idx = 0;
			if (pOfBowl > 0)
			{
				pOfCan[idx]++;
				pOfBowl--;
			}
			else if (pOfBowl == 0)
			{
				if (pOfCan[idx] == p)
				{
					winIdx = idx;
					break;
				}
				pOfBowl = pOfCan[idx];
				pOfCan[idx] = 0;
			}
			idx++;
		}
		cout << winIdx << endl;
	}
}
