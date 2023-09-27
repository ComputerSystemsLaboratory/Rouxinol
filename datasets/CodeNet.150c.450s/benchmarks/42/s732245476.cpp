#include <bits/stdc++.h>
using namespace std;
struct process { string name; int time; };

int main()
{
	int n, q, ntime = 0;
	process tmp;
	queue<process> que;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> tmp.name >> tmp.time;
		que.push(tmp);
	}
	while (!que.empty()) {
		tmp = que.front(); que.pop();
		if (tmp.time <= q) {
			ntime += tmp.time;
			cout << tmp.name << ' ' << ntime << endl;
		}
		else {
			ntime += q;
			tmp.time -= q;
			que.push(tmp);
		}
	}
	return 0;
}