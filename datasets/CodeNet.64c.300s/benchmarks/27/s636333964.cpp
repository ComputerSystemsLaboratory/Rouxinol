#include <iostream>
using namespace std;

struct in
{
	int num;
	int xnum;
};

int main()
{
	int n,x;
	int count = 0;
	int i = 0;
	in nyuryoku[1000];

	while (1)
	{
		cin >> n >> x;

		if (n == 0 && x == 0)
		{
			break;
		}
		else
		{
			nyuryoku[i].num = n;
			nyuryoku[i].xnum = x;
			i++;
		}
	}

	for (int in = 0; in < i; in++)
	{
		for (int i1 = 1; i1 <= nyuryoku[in].num - 2; i1++)
		{
			for (int i2 = i1 + 1; i2<=nyuryoku[in].num - 1; i2++)
			{
				for (int i3 = i2 + 1; i3 <= nyuryoku[in].num; i3++)
				{
					if (i1 + i2 + i3 == nyuryoku[in].xnum)
					{
						count++;
					}
				}
			}
		}
		cout << count << endl;
		count = 0;
	}
	return 0;
}