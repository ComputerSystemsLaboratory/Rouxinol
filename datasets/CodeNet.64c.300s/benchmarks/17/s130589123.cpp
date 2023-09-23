#include<iostream>
using namespace std;
int add(int, int);

int main() {
	int x, y, s, max, a;

	while (true) {
		int max = 0;
		cin >> x >> y >> s;

		if (x == 0 && y == 0 && s == 0)	break;

		for (int i = 1; i < s; i++) {
			for (int j = 1; j < s; j++) {
				if ((add(i, x) + add(j, x)) == s) {
					a = (add(i, y) + add(j, y));
					if (a > max)	max = a;
				}
			}
		}
		cout << max << endl;
	}

	return 0;
}

int add(int a, int t) {
	return a*(100 + t)/100;
}