#include <iostream>
#include <cstdio>
#include <queue>
#include <string>
using namespace std;
struct task {
	string name;
	int time;
};
queue<task> q;
int main(void)
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n, m;
	cin >> n >> m;
	task t;
	while (n--)
	{
		cin >> t.name >> t.time;
		q.push(t);
	}
	int ans = 0;
	while (!q.empty())
	{
		t = q.front();
		q.pop();
		if (t.time > m)
		{
			ans += m;
			t.time -= m;
			q.push(t);
		}
		else
		{
			ans += t.time;
			printf("%s %d\n", t.name.c_str(), ans);
		}
	}
	return 0;
}