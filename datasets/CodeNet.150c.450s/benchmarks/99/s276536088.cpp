#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)

map<char, int> _map = { { 'm', 1000 },{ 'c', 100 },{ 'x', 10 },{ 'i', 1 } };

int solve(string a)
{
	int aa = 0;

	rep(i, 0, a.length())
	{
		if ('1' <= a[i] && a[i] <= '9')
		{
			aa += (a[i] - '0') * _map[a[i + 1]];
			i++;
		}
		else
			aa += _map[a[i]];
	}

	return aa;
}

string solve2(int a)
{
	char c[4] = { 'm', 'c', 'x', 'i' };
	string ret = "";

	rep(i, 0, 4)
	{
		int d = a / _map[c[i]];
		if (d == 0) continue;
		if (d == 1)
			ret += c[i];
		else
			ret += to_string(d) + c[i];

		a %= _map[c[i]];
	}

	return ret;
}

int main()
{
	int n; cin >> n;
	rep(_n, 0, n)
	{
		string a, b; cin >> a >> b;

		int aa = solve(a);
		int bb = solve(b);

		cout << solve2(aa + bb) << endl;
	}
}