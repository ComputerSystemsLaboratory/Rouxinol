#include <cstdio>
#include <vector>
using namespace std;
int main()
{
	int n, m;
	scanf("%d%d", &n, &m);

	vector<int> res(n);
	vector<pair<int, int> > w;
	for (int i = 0; i < m; ++i) {
		int a, b;
		scanf("%d,%d", &a, &b);
		w.push_back(make_pair(a, b));
	}

	for (int i = 0; i < n; ++i) {
		int r = i+1;
		for (int j = 0; j < m; ++j) {
			if (w[j].first == r) r = w[j].second;
			else if (w[j].second == r) r = w[j].first;
		}
		res[r-1] = i+1;
	}
	for (int i = 0; i < n; ++i) printf("%d\n", res[i]);
	return 0;
}