#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {
	for (;;) {
		int x, y, s;
		cin >> x >> y >> s;
		if (x == 0 && y == 0 && s == 0) {
			break;
		}

		int s_1, s_2, t_1, t_2, t=1;
		for (int i = 1; i < s; i++) {
			for (int j = 1; j < s; j++) {
				s_1 = i * (100 + x) / 100;
				s_2 = j * (100 + x) / 100;
				if (s_1 + s_2 == s) {
					t_1 = i * (100 + y) / 100;
					t_2 = j * (100 + y) / 100;
					if (t_1 + t_2 > t) {
						t = t_1 + t_2;
					}
				}
			}
		}

		printf("%d\n", t);
	}
	return 0;
}