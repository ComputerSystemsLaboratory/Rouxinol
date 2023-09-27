#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <string>
using namespace std;
const int maxn = 100005;
int bit[maxn];
int n;

int get_sum(int i)
{
	int ret = 0;
	while (i > 0)
	{
		ret += bit[i];
		i -= i & -i;
	}
	return ret;
}

void add(int i, int x)
{
	while (i <= n)
	{
		bit[i] += x;
		i += i & -i;
	}
}

int main(void)
{
	int op, q, a, b;
	string str;
	ios::sync_with_stdio(false);
	cin >> n >> q;
	while (q--)
	{
		cin >> op >> a >> b;
		if (op == 0)
			add(a, b);
		else
			cout << get_sum(b) - get_sum(a - 1) << endl;
	}

	return 0;
}