#include <bits/stdc++.h>
using namespace std;

int n, k, m = 0;
int p[10000], r[10000];

struct edge {
	int s, t, w;
};

bool comp(const edge& e1, const edge& e2) {
	return e1.w < e2.w;
}

edge e[100000];

int find(int x) {
	if (p[x] == x)
		return x;
	else
		return p[x] = find(p[x]);
}

void unite(int x, int y) {
	x = find(x);
	y = find(y);

	if (x == y)
		return;

	if (r[x] < r[y])
		p[x] = y;
	else {
		p[y] = x;
		if (r[x] == r[y])
			r[x]++;
	}
}

bool same(int x, int y) {
	return find(x) == find(y);
}

int main()
{
	cin >> n >> k;

	for (int i = 0; i < k; i++)
		cin >> e[i].s >> e[i].t >> e[i].w;

	sort(e, e + k, comp);

	for (int i = 0; i < n; i++) {
		p[i] = i;
		r[i] = 0;
	}

	for (int i = 0; i < k; i++) {
		edge ea = e[i];

		if (!same(ea.s, ea.t)) {
			unite(ea.s, ea.t);
			m += ea.w;
		}
	}

	cout << m << endl;
}

