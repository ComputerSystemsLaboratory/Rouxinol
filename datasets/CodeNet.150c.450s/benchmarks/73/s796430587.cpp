#include <iostream>

using namespace std;
const int max_n = 1 << 17;
int dat[max_n * 2 -1];



void init() {
	for (int i = 0; i < max_n * 2 -1; i++) {
		dat[i] = 0;
	}
}

void update(int i, int v) {
	i += max_n - 1;
	dat[i] += v;

	while (i > 0) {
		i = (i -1) / 2;
		dat[i] += v;
	}
}

int find(int a, int b, int k, int l, int r) {
	if (r <= a || b <= l) {
		return 0;
	}
	if (a <= l &&  r <= b) {
		//cout << " a:" << a << " b:" << b << " k:" << k <<" l:" << l << " r:"  << r << " dat[k]:" << dat[k] << endl;
		return dat[k];
	}

	int lv = find(a,b,k * 2 + 1,l,(r + l) / 2);
	int lr = find(a,b,k * 2 + 2,(r + l) / 2,r);
	return lv + lr;
}




int main() {
	init();

	int n,q;
	cin >> n >> q;

	for (int i = 0; i < q; i++) {
		int com, x, y;
		cin >> com >> x >> y;
		if (com == 0) {
			update(x,y);
		} else {
			cout << find(x,y + 1,0,0,max_n) << endl;
		}

	}


	return 0;
}