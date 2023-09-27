#include <iostream>
using namespace std;

int n;
int v[100][100];
int d[100], f[100], r[202];

void stamp(int id, int t) {
	if (t > 2 * n)
		return;

	if (d[id - 1] == 0) {
		d[id - 1] = t;
		r[t] = id;
		int i = 0;
		while (v[id - 1][i] == 0)
			i++;
		if (i < n && d[i] == 0)
			stamp(i + 1, t + 1);
		else
			stamp(id, t + 1);
	}
	else if (f[id - 1] == 0) {
		int i;
		for(i = 0; i < n; i++)
			if (v[id - 1][i] == 1 && d[i] == 0) {
				stamp(i + 1, t);
				break;
			}
		if (i > n - 1) {
			f[id - 1] = t;
			for(int j = 1; j < d[id - 1]; j++)
				if (r[d[id - 1] - j] != 0) {
					if (f[r[d[id - 1] - j] - 1] == 0)
						stamp(r[d[id - 1] - j], t + 1);
				}

			int k = 0;
			while (d[k] != 0)
				k++;
			if (k < n)
				stamp(k + 1, t + 1);
		}
	}	
	return;
}

int main()
{
	cin >> n;

	for (int i = 0; i < n; i++) {
		d[i] = 0;
		f[i] = 0;
	}

	for(int i = 0; i < 202; i++)
		r[i] = 0;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			v[i][j] = 0;

	for (int i = 0; i < n; i++) {
		int u, k, s;

		cin >> u >> k;

		for (int j = 0; j < k; j++) {
			cin >> s;
			v[u - 1][s - 1] = 1;
		}
	}

	stamp(1, 1);

	for (int i = 0; i < n; i++)
		cout << i + 1 << " " << d[i] << " " << f[i] << endl;

	return 0;
}
