#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

#define FOR(i,s,e) for (int i = int(s); i != int(e); i++)
#define REP(i,e) for (int i = 0; i != int(e); i++)
#define FORIT(i, A) for (auto i : A)
#define ISEQ(c) (c).begin(), (c).end()
#define PRINT(x) cout << (x) << endl
#define SZ(x) ((int)(x).size())

int func(int sum, int depth)
{
	if (sum < 0)
	{
		return 0;
	}
	if (sum == 0)
	{
		return 1;
	}
	if (depth == 3)
	{
		if (sum < 10)
			return 1;
		else
			return 0;
	}
	int ans = 0;
	for (int i = 0; i < 10 && i <= sum; i++)
	{
		ans += func(sum - i, depth+1);
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		if (n > 36)
		{
			printf("0\n");
			continue;
		}
		int num = func(n, 0);
		printf("%d\n", num);
	}
	return 0;
}