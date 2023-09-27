#include <iostream>
using namespace std;

const int cost[6] = { 500, 100, 50, 10, 5, 1};

int main()
{
	int p;
	while (cin >> p, p!=0)
	{
		int chg = 1000 - p;
		int c=0, cnt=0;
		while (c < 6)
		{
			while (1)
			{
				if (chg-cost[c] >= 0) { cnt++; chg-=cost[c]; }
				else break;
			}
			c++;
		}
		cout << cnt << endl;
	}
	return 0;
}