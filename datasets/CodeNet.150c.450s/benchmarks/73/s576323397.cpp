#include <iostream>

using namespace std;
static const int MAX_N = 1 << 17;
int bit[MAX_N + 1];
int n;


int sum(int i)
{
	int s = 0;
	while (i > 0)
	{
		s += bit[i];
		i -= i & -i;
	}
	return(s);
}

void add(int i, int x)
{
	while (i <= n)
	{
		bit[i] += x;
		i += i & -i;
	}
}

void solve()
{
	int q;
	cin >> n >> q;
	for (int i = 0; i < q; ++i)
	{
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0)
		{
			add(x, y);
		}
		else
		{
			cout << sum(y) - sum(x - 1) << endl;
		}
	}
}

int main()
{
	solve();
	return(0);
}