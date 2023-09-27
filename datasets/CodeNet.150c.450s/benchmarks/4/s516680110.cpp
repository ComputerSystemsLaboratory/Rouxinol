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
	vector<int> m, f, r;

	while (true)
	{
		int tm, tf, tr;

		scanf("%d %d %d", &tm, &tf, &tr);

		if (tm == -1 && tf == -1 && tr == -1)
		{
			break;
		}
		else
		{
			m.push_back(tm);
			f.push_back(tf);
			r.push_back(tr);
		}
	}

	for (int i = 0; i != m.size(); i++)
	{
		if (m[i] == -1 || f[i] == -1)
		{
			printf("F\n");
		}
		else
		{
			int score = m[i] + f[i];
			if (score >= 80)
			{
				printf("A\n");
			}
			else if (score >= 65)
			{
				printf("B\n");
			}
			else if (score >= 50)
			{
				printf("C\n");
			}
			else if (score >= 30)
			{
				if (r[i] >= 50)
				{
					printf("C\n");
				}
				else
				{
					printf("D\n");
				}
			}
			else
			{
				printf("F\n");
			}
		}
	}

	return 0;
}