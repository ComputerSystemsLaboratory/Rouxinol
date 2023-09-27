#include<iostream>

using namespace std;

int main()
{
	int n, x;
	int a;
	int ans;


	while (1)
	{
		a = 0;
		ans = 0;
		cin >> n >> x;
		//
		if (n == 0 && x == 0)
		{
			break;
		}
		else
		{
			for (int i = 1; i <= n; i++)
			{
				for (int j = 1; j <= n; j++)
				{
					for (int k = 1; k <= n; k++)
					{
						if (i != j && j != k && k != i)
						{
							a = i + j + k;
							if (a == x)
							{
								ans++;
							}
							a = 0;
						}
					}
				}
			}
		}
		ans = ans / 6;
		cout << ans << endl;
	}

	return 0;
}