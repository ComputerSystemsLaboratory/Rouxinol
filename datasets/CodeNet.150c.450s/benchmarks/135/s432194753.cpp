#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void input(vector<int> &v, int n)
{
	int temp;
	v.resize(n + 1);
	v[0] = 0;
	for (int i = 1; i <= n; i++)
	{
		cin >> temp;
		v[i] = v[i - 1] + temp;
	}
}

void dcount(vector<int> &v, unordered_map<int, int> &m)
{
	int d;
	for (auto i = v.begin(); i != v.end(); i++)
	{
		for (auto j = i + 1; j != v.end(); j++)
		{
			d = *j - *i;
			auto res = m.find(d);
			if (res == m.end()) m[d] = 1;
			else res->second++;
		}
	}
}

int main(void)
{
	int N, M;
	while (1)
	{
		cin >> N >> M;
		if (!N) break;
		vector<int> y, x;
		unordered_map<int, int> dy, dx;
		input(y, N);
		input(x, M);
		dcount(y, dy);
		dcount(x, dx);
		int ans = 0;
		for (auto i = dy.begin(); i != dy.end(); i++)
		{
			auto j = dx.find(i->first);
			if (j == dx.end()) continue;
			ans += i->second * j->second;
		}
		cout << ans << endl;
	}
	return 0;
}
