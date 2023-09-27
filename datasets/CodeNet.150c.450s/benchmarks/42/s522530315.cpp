#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
using namespace std;


int main(void)
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, m, time;
	string name;
	cin >> n >> m;
	queue<pair<string, int>> q;
	while (n--)
	{
		cin >> name >> time;
		q.push(make_pair(name, time));
	}
	int ans = 0;
	pair<string, int> t;
	while (!q.empty())
	{
		t = q.front();
		q.pop();
		if (t.second > m)
		{
			ans += m;
			t.second -= m;
			q.push(t);
		}
		else
		{
			ans += t.second;
			printf("%s %d\n", t.first.c_str(), ans);
		}
	}
	return 0;
}