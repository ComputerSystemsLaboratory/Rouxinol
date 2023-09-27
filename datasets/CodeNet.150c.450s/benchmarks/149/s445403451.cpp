#include <vector>
#include <iostream>
using namespace std;
int n, q, com, x, y; int group[10000]; vector<int> f[10000];
int main() {
	scanf("%d%d", &n, &q);
	for(int i = 0; i < n; i++) group[i] = i, f[i].push_back(i);
	for(int i = 0; i < q; i++) {
		scanf("%d%d%d", &com, &x, &y);
		if(com == 0) {
			if(group[x] == group[y]) continue;
			x = group[x], y = group[y];
			if(f[y].size() > f[x].size()) swap(x, y);
			for(int j = f[y].size() - 1; j >= 0; j--) {
				group[f[y][j]] = group[x];
				f[x].push_back(f[y][j]);
				f[y].pop_back();
			}
		}
		else printf("%d\n", (group[x] == group[y] ? 1 : 0));
	}
	return 0;
}