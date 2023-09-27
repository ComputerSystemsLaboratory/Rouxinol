#include <iostream>
#include <stdio.h>
#include <string>
#include <map>
#include <stack>
#include <vector>
#include <string.h>
#include <set>
#include <queue>
#include <cmath>
#include <algorithm>

using namespace std;

bool check(vector<int> v)
{
	if (v.size() == 0 || v.size() == 1)
		return true;
	else
	{
		for (int i = 0;i < v.size() - 1;i ++)
		{
			if (v[i] > v[i + 1])
				return false;
		}
		return true;
	}
}

int input[20];

int main()
{
	int i , j , mask , n;
	while (scanf("%d" , &n) != EOF)
	{
		for (i = 0;i < n;i ++)
		{
			bool ok = false;

			for (j = 0;j < 10;j ++)
				scanf("%d" , &input[j]);

			for (mask = 0;mask < (1 << 10);mask ++)
			{
				vector<int> v1 , v2;
				for (j = 0;j < 10;j ++)
				{
					if (mask & (1 << j))
						v1.push_back(input[j]);
					else
						v2.push_back(input[j]);
				}
				if (check(v1) && check(v2))
				{
					ok = true;
					break;
				}
			}

			if (ok)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}