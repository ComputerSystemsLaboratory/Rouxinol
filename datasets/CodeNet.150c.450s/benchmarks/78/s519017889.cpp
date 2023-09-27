#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <functional>
#include <utility>
using namespace std;
#define MOD 1000000007
#define ADD(X,Y) ((X) = ((X) + (Y)%MOD) % MOD)
typedef long long i64; typedef vector<int> ivec; typedef vector<string> svec; typedef pair<int, int> pi;
int dd[] = { 0, 1, 0, -1, 0 };
#define MAX 1000000
int all[MAX];
int odd[MAX];
int main()
{
	int cnt = 1;
	ivec A;
	while (true)
	{
		int d = cnt * (cnt + 1) * (cnt + 2) / 6;
		if (d < MAX)
		{
			A.push_back(d);
		}
		else break;
		cnt++;
	}
	for (int j = 0; j < MAX; j++)
	{
		all[j] = j;
		odd[j] = j;
	}

	for (int i = 1; i < A.size(); i++)
	{
		for (int j = A[i]; j < MAX; j++)
		{
			all[j] = min(all[j], all[j - A[i]] + 1);
			if (A[i] % 2 == 0)continue;
			odd[j] = min(odd[j], odd[j - A[i]] + 1);
		}
	}
	


	while (true)
	{
		int s;
		scanf("%d", &s);
		if (s == 0)break;
		printf("%d %d\n", all[s], odd[s]);
	}
	return 0;
}