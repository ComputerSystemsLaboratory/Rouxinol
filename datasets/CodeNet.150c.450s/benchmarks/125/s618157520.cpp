#include <iostream>
using namespace std;

int n, t = 0;
int v[100][100];
int d[100], f[100], r[101];

void st(int id) {
	if (!r[id]) {
		r[id]++;
		d[id - 1] = ++t;
		for (int i = 0; i < n; i++)
			if (v[id - 1][i])
				st(i + 1);
		f[id - 1] = ++t;
	}
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		int u, k, s;

		cin >> u >> k;

		for (int j = 0; j < k; j++) {
			cin >> s;
			v[u - 1][s - 1] = 1;
		}
	}

	for(int i = 0; i < n; i++)
		st(i + 1);

	for (int i = 0; i < n; i++)
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;

	return 0;
}
