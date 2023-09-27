#include <stack>
#include <utility>
#include <iostream>
#include <string>
#include <set>
#include <algorithm>
#include <vector>
#include <queue>
#include <functional>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	typedef pair <int, int> p;//????????????????????????
	while (cin >> n, n != 0) {
		vector <p> map[12];
		int a, b, c;
		for (int i = 0; i < n; i++) {
			cin >> a >> b >> c;
			map[a].push_back(p(b, c));
			map[b].push_back(p(a, c));
		}
		p ans = p(0, 9999999);
		for (int z = 0; z < 10; z++) {
			if (map[z].size() == 0)break;
			int d[12] ;
			for (int i = 0; i < 12; i++)d[i] = 9999999;
			priority_queue<p, vector<p>, greater<p> > que;//??????????????????
			que.push(p(0, z));
			d[z] = 0;
			while (!que.empty()) {
				p now = que.top();
				que.pop();
				if (now.first > d[now.second])continue;
				for (int i = 0; i < map[now.second].size(); i++) {
					p dst = map[now.second][i];
					if (d[dst.first] > now.first + dst.second) {
						que.push(p(now.first + dst.second, dst.first));
						d[dst.first] = now.first + dst.second;
					}
				}
			}int cnt = 0;
			for (int i = 0; i < 10; i++) { if (d[i] != 9999999)cnt += d[i]; }
			if (ans.second > cnt)ans = p(z, cnt);
		}
		cout << ans.first << " " << ans.second << endl;
	}
}