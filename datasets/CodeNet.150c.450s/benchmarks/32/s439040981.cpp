#include <iostream>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
	int m, tibi, deka;
	int data[300];
	int n = 0;
	int sa = -10;
	int basyo = 0;
	while (true) {
		sa = -10;
		basyo = 0;
		cin >> m >> tibi >> deka;
		if (m == 0) break;
		for (int i = 0; i < m; i++) {
			cin >> data[i];
		}
		for (int i = tibi-1; i < deka; i++) {
			if (sa <= abs(data[i] - data[i + 1])) {
				sa = abs(data[i] - data[i + 1]);
				basyo = i+1;
			}
		}
		cout << basyo << endl;
	}
}


/*
#include <iostream>
#include <algorithm>
#include <math.h>

int kiriage(double a) {
	if ((a - (double)(int)a) > 0) {
		return (int)a + 1;
	}
	else {
		return (int)a;
	}
}

using namespace std;

int main() {
	int count = 0;
	int x, y, s;
	int m;
	int z;
	int mm[1001];
	int zz[1001];
	int n;
	int tuyoi = -100;
	while (true) {
		tuyoi = -100;
		cin >> x >> y >> s;
		if (s == 0) break;
		for (double i = 1; i < s/2; i++) {
			m = kiriage((s - i) * (100+y) / (100 + x));
			z = kiriage(((100+y) * i / (100 + x)));
//			cout << m << z << endl;
			if (tuyoi < m+z) {
				tuyoi = m+z;
			}
		}
		cout << tuyoi << endl;
	}
}*/
