#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<string>

using namespace std;

int main(void)
{
	int y, m, d, sum[1000];
	int i, t, p;
	int n;
	cin >> n;
	for (int k = 0; k < n; k++)
	{
		sum[k] = 0;
		cin >> y >> m >> d;
		for (i = y; i < 1000; i++)
		{
			if (i == y)
			{
				if (i % 3 == 0)
				{
					for (t = m; t < 11; t++)
					{
						if (t == m)
						{

							for (p = d; p < 21; p++)
							{
								sum[k]++;
							}
						}
						else
						{
							for (p = 1; p < 21; p++)
							{
								sum[k] ++;
							}
						}
					}
				}
				else
				{
					for (t = m; t < 11; t++)
					{
						if (t == m)
						{

							if (t % 2 == 1)
							{
								for (p = d; p < 21; p++)
								{
									sum[k]++;
								}
							}
							else
							{
								for (p = d; p < 20; p++)
								{
									sum[k]++;
								}
							}
						}
						else
						{
							if (t % 2 == 1)
							{
								for (p = 1; p < 21; p++)
								{
									sum[k]++;
								}
							}
							else
							{
								for (p = 1; p < 20; p++)
								{
									sum[k]++;
								}
							}
						}
					}
				}
			}
			else
			{
				if (i % 3 == 0)
				{
					for (t = 1; t < 11; t++)
					{
						for (p = 1; p < 21; p++)
						{
							sum[k]++;
						}
					}
				}
				else
				{
					for (t = 1; t < 11; t++)
					{
						if (t % 2 == 1)
						{
							for (p = 1; p < 21; p++)
							{
								sum[k]++;
							}
						}
						else
						{
							for (p = 1; p < 20; p++)
							{
								sum[k]++;
							}
						}
					}
				}

			}

		}
	}
	for (i = 0; i < n; i++)
	{
		cout << sum[i]<<endl;
	}
	return 0;
}
