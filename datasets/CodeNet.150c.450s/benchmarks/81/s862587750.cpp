#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
#include <queue>
#include <limits.h>
#include <set>
#include <stack>

using namespace std;
typedef vector<int> Ivec;
typedef pair<int, int> pii;

//int main() {
//	int n,c,v;
//	array<array<pii, 50>, 50> graph = {};
//	scanf("%d %d %d", &n, &c, &v);
//	vector<pii> roads(v, {0,0});
//	for (int i = 0; v > i; i++) {
//		int s;
//		scanf("%d", &s);
//		roads[i].first = s;
//	}
//	for (int i = 0; v > i; i++) {
//		int s;
//		scanf("%d", &s);
//		roads[i].second = s;
//	}
//	for (int i = 0; v > i; i++) {
//		int s;
//		scanf("%d", &s);
//		graph[roads[i].first][roads[i].second].first = s;
//	}
//	for (int i = 0; v > i; i++) {
//		int s;
//		scanf("%d", &s);
//		graph[roads[i].first][roads[i].second].second = s;
//	}
//
//	array<int> 
//
//	return 0;
//}

int main() {
	int n;
	while (scanf("%d", &n)) {
		if (!n)
			return 0;
		array<array<int, 11>, 11> graph = {};
		for(auto itr = graph.begin(); itr != graph.end(); itr++)
			fill(itr->begin(), itr->end() , -1);
		int m = 0;
		for (int i = 0; n > i; i++) {
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);

			graph[a][b] = c;
			graph[b][a] = c;
			m = max({a,b,m});
		}
		m++;
		pii Min = { INT_MAX,INT_MAX };
		for (int i = 0; m > i; i++) {
			priority_queue<pii, vector<pii>, greater<pii>> que;
			vector<int> al(m, -1);
			for (int j = 0; m > j; j++) {
				if (graph[i][j] != -1) {
					que.push({ graph[i][j], j });
				}
			}
			al[i] = 0;
			while (!que.empty()) {
				pii num = que.top();
				que.pop();
				if (al[num.second] != -1)
					continue;
				al[num.second] = num.first;
				for (int j = 0; m > j; j++) {
					if (graph[num.second][j] != -1 && al[j] == -1) {
						que.push({ num.first + graph[num.second][j], j });
					}
				}
			}
			Min = min(Min, { accumulate(al.begin(), al.end(),0),i });
		}
		printf("%d %d\n", Min.second, Min.first);
	}
	return 0;
}