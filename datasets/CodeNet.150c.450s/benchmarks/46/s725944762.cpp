#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	vector<int> n, x;

	while (true)
	{
		int tn, tx;

		scanf("%d %d", &tn, &tx);

		if (tn == 0 && tx == 0)
		{
			break;
		}
		else
		{
			n.push_back(tn);
			x.push_back(tx);
		}
	}

	for (int l = 0; l != n.size(); l++)
	{
		int ans = 0;
		for (int i = 1; i <= n[l]; i++)
		{
			for (int j = i + 1; j <= n[l]; j++)
			{
				for (int k = j + 1; k <= n[l]; k++)
				{
					if ((i + j + k) == x[l])
					{
						ans++;
					}
				}
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}