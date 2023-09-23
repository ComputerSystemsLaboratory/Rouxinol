#include <cstdio>
#include <cstring>
#include <algorithm>
#include <string>
#include <cmath>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <iostream>


using namespace std;

int main()
{
	int n;
	int nums[101];
	memset(nums, 0, sizeof(nums));
	int m = 0;
	while (scanf("%d", &n) != EOF)
		m = max(m, ++nums[n]);
	for (int i = 1; i < 101; ++i)
	{
		if (nums[i] == m)
			printf("%d\n", i);
	}

	return 0;
}