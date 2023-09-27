#include <iostream>
using namespace std;

const int N_MAX = 100000;
int dat[N_MAX * 4];

int n;
int n_add;

void init() {
	int k = 0;
	while ((n - 1) >> k) k++;
	n_add = (1 << k) - 1;
	for (int i = 0; i < n_add * 2; ++i) {
		dat[i] = 0;
	}
}

void add(int x, int y) {
	x += n_add;
	while (x > 0) {
		dat[x] += y;
		x = x / 2;
	}
}

int getSumSub(int x, int y) {
	if (x > y)
		return 0;
	else if (x == y)
		return dat[x];

	bool xodd = x % 2;
	bool yodd = y % 2;
	if (xodd && yodd)
		return dat[x] + getSumSub(x / 2 + 1, y / 2);
	else if (xodd && !yodd)
		return dat[x] + getSumSub(x / 2 + 1, y / 2 - 1) + dat[y];
	else if (!xodd && yodd)
		return getSumSub(x / 2, y / 2);
	else
		return getSumSub(x / 2, y / 2 - 1) + dat[y];
}

int getSum(int x, int y) {
	return getSumSub(x + n_add, y + n_add);
}

int main() {
	int q;
	cin >> n >> q;
	init();
	for (int i = 0; i < q; ++i) {
		int c, x, y;
		cin >> c >> x >> y;
		if (c == 0)
			add(x, y);
		else
			cout << getSum(x, y) << endl;
	}
}