#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <iostream>
#include <climits>

using namespace std;

int main()
{
	int n;
	int a[5000];
	while (true)
	{
		scanf("%d", &n);
		if (n == 0)
			break;

		for (int i = 0; i < n; ++i)
			scanf("%d", a+i);

		int res = -100000;
		int sum = 0;
		for (int i = 0; i < n; ++i)
		{
			if (sum < 0)
				sum = 0;
			sum += a[i];
			if (sum > res)
				res = sum;
		}
		printf("%d\n", res);
	}

	return 0;
}