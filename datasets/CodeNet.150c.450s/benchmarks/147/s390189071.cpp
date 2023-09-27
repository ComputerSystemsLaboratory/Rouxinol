#include <iostream>
#include <cstring>
#include <cstdlib>
#include <set>
#include <vector>
#include <map>
#include <cstdio>
#include <utility>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <cassert>
#include <climits>
#include <numeric>
#include <sstream>
using namespace std;
typedef long long ll;
// #define DEBUG
#ifdef DEBUG
	#define debug printf
#else
	#define debug(...)
#endif
const int maxn = 7e4 + 5;
int ans[maxn];
int main(int argc, char const *argv[])
{
	for(int i = 1;i <= 105; ++i)
	{
		for(int j = 1;j <= 105; ++j)
		{
			for(int k = 1;k <= 105; ++k)
			{
				ans[i * i + j * j + k * k + i * j + i * k + j * k]++;
			}
		}
		debug("i = %d\n",i);
	}
	int n;
	scanf("%d",&n);
	for(int i = 1;i <= n; ++i)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}