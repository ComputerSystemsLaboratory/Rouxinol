#include <vector>
#include <iostream>
using namespace std;
int n, m, q, x, y, t; int group[111111]; vector<int> f[111111];
int main() {
	scanf("%d%d", &n, &m);
	for(int i = 0; i < n; i++) group[i] = i, f[i].push_back(i);
	for(int i = 0; i < m; i++) {
		scanf("%d%d", &x, &y);
		if(group[x] == group[y]) continue;
		x = group[x], y = group[y];
		if(f[y].size() > f[x].size()) swap(x, y);
		t = f[y].size();
		for(int j = 0; j < t; j++) {
			group[f[y].back()] = group[x];
			f[x].push_back(f[y].back());
			f[y].pop_back();
		}
	}
	scanf("%d", &q);
	for(int i = 0; i < q; i++) {
		scanf("%d%d", &x, &y);
		printf("%s\n", group[x] == group[y] ? "yes" : "no");
	}
	return 0;
}