#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#include<sstream>
#include<stack>
#include<queue>
#include<list>
#define _USE_MATH_DEFINES

#include<math.h>
#include<map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int a[100000];

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	int low = 0, high = 100000 * 10000;

	while (true)
	{
		if (high <= low)
		{
			break;
		}
		int mid = (low + high) / 2;
		int need_trucks_num = 1;
		int temp_weight = 0;
		for (int i = 0; i < n; i++)
		{
			if (a[i] + temp_weight <= mid)
			{
				temp_weight += a[i];
			}
			else if (a[i] > mid)
			{
				need_trucks_num = k + 1;
				break;
			}
			else
			{
				need_trucks_num++;
				temp_weight = a[i];
				if (need_trucks_num > k)
				{
					break;
				}
			}
		}
		if (need_trucks_num > k)
		{
			low = mid + 1;
		}
		else
		{
			high = mid;
		}
		
	}

	printf("%d\n", low);

	return 0;
}
