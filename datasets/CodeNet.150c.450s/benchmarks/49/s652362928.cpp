#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <functional>
using namespace std;
#define MOD @
#define ADD(X,Y) ((X) = ((X) + (Y)%MOD) % MOD)
typedef long long i64; typedef vector<int> ivec; typedef vector<string> svec;


int main()
{
	while (true)
	{
		int n;
		scanf("%d", &n);
		if (n == 0)return 0;
		ivec A;
		for (int i = 0; i < n; i++)
		{
			int s;
			scanf("%d", &s);
			A.push_back(s);
		}
		sort(A.begin(), A.end());
		int sum = 0;
		for (int i = 0; i < n; i++)
		{
			if (i == 0 || i == n - 1)continue;
			sum += A[i];
		}
		printf("%d\n", sum / (n - 2));
		
	}
	return 0;
}