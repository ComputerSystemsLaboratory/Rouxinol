#include<iostream>
using namespace std;

int main() {
	int n, m, p;
	while (cin >> n >> m >> p) {
		if (n == 0 && m == 0 && p == 0)break;

		int a = 0;
		int w;
		for (int i = 0;i < n;i++) {
			int b;
			cin >> b;
			a += b;
			if (i + 1 == m)w = b;
		}

		a *= 100;
		a = a*(100 - p) / 100;

		if (w == 0)cout << '0' << endl;
		else cout << a / w << endl;
	}
	return 0;
}