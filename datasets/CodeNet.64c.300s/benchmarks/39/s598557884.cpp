#include<iostream>
using namespace std;
int main()
{
	int n;
	int i, j, k, t;
	int cnt=0;
	//cin >> n;
	while (cin >> n)
	{
		cnt = 0;
		for (i = 0; i <= 9; i++)
		{
			for (j = 0; j <= 9; j++)
			{
				for (k = 0; k <= 9; k++)
				{
					for (t = 0; t <= 9; t++)
					{
						if (i + j + k + t == n)
						{
							cnt++;
						}
					}
				}
			}
		}
		cout << cnt << endl;
		//cin >> n;
	}
	return 0;
}