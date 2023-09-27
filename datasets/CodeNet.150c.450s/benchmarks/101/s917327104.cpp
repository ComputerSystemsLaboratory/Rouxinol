#include <iostream>
#include <vector>
using namespace std;

int n, m, s, t, u;
vector<vector <int> > a;
int f[100000];

void path(int s1, int w) {
	f[s1] = w;
	for (int i = 0; i < (int) a[s1].size(); i++)
		if (f[a[s1][i]] == 0)
			path(a[s1][i], w);
	return;
}

int main()
{
	cin >> n >> m;

	a.resize(n);

	for (int i = 0; i < m; i++) {
		int u, v;
		cin >> u >> v;
		a[u].push_back(v);
		a[v].push_back(u);
	}

	for (int i = 0; i < n; i++)
		f[i] = 0;

	int j = 0, k = 1;
	while (j < n) {
		if (f[j] == 0) {
			path(j, k);
			k++;
		}
		j++;
	}

	int q;
	cin >> q;
	for (int i = 0; i < q; i++) {
		cin >> s >> t;

	if(f[s] == f[t])
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	}

	return 0;
}
