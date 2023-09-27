#include <iostream>
#include <algorithm>
#include <cstdio>
#include <list>
#include <stack>
#include <vector>
#include <map>
#include <set>
#include <cstring>
typedef long long ll;
using namespace std;

int weight[100005];
int n, k;

bool FillUp(int p)
{
	ll num = 0, cur = 0;
	for (int j = 0; j < k; ++j)
	{
		cur = 0;
		while (cur + weight[num] <= p)
		{
			cur += weight[num];
			++num;
			if (num == n)
				return true;
		}
	}
	return false;
}


ll solve()
{
	ll left = 0;
	ll right = 100000 * 10000;
	while (right - left > 1)
	{
		ll mid = (right + left) / 2;
		if (FillUp(mid))
			right = mid;
		else
			left = mid;
	}
	return right;
}

int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	cin >> n >> k;
	for (int i = 0; i != n; ++i)
	{
		scanf("%d", &weight[i]);
	}
	cout << solve() << endl;
	return 0;
}