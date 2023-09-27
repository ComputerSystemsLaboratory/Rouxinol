#include <iostream>
#include <vector>
#include <string.h>

using namespace std;

#define rep(i, n) for(int i=0; i<n; i++)

struct Road
{
	int a, b, c;
};

int n, a, b, c;

int table[10][10];
Road roads[45];

int main()
{
	while( 1 )
	{
		cin >> n;
		if(n == 0) break;

		memset(table, 0, sizeof(int) * 100);

		rep(i, n)
		{
			cin >> roads[i].a >> roads[i].b >> roads[i].c;
		}

		//Warhsall-Floyd
		int t = 0;
		rep(i, 10)
		{
			rep(j, 10)
			{
				rep(k, n)
				{
					if((roads[k].a == i && roads[k].b == j) ||
					   (roads[k].a == j && roads[k].b == i))
					{
						table[i][j] = roads[k].c;
						if(t < max(i, j))
							t = max(i, j);
						break;
					}
					else if(i == j)
					{
						table[i][j] = 0;
					}
					else
					{
						table[i][j] = 100000;
					}
				}
			}
		}

		rep(k, t+1)
		{
			rep(i, t+1)
			{
				rep(j, t+1)
				{
					if(table[i][j] > table[i][k] + table[k][j])
					{
						table[i][j] = table[i][k] + table[k][j];
					}
				}
			}
		}

		int min_cost = 100000;
		int town = 0;
		rep(i, t+1)
		{
			int total = 0;
			rep(j, t+1)
			{
				total += table[i][j];
			}

			if(total < min_cost)
			{
				town = i;
				min_cost = total;
			}
		}

		printf("%d %d\n", town, min_cost);
	}
}