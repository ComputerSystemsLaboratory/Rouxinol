#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main() {
	for (;;) {
		int x, y, s;
		cin >> x >> y >> s;

		if (x == 0 && y == 0 && s == 0) {
			break;
		}
		int max_s = 0;

		int past_n1, past_n2;
		for (int i = 1; i < s; ++i) {
			past_n1 = (i * 100) / (100 + x);

			past_n2 = ((s - i) * 100) / (100 + x);

			if (((past_n1+1)*(100 + x) / 100 + (past_n2*(100 + x) / 100)) == s) {
				past_n1++;
			}
			else if (((past_n1)*(100 + x) / 100 + ((past_n2 + 1)*(100 + x) / 100)) == s) {
				past_n2++;
			}
			else if ((((past_n1 + 1)*(100 + x) / 100 + ((past_n2 + 1)*(100 + x) / 100)) == s)) {
				past_n1++;
				past_n2++;
			}

			if (past_n1 == 0 || past_n2 == 0) {
				continue;
			}

			int new_s = past_n1*(100 + y) / 100 + past_n2*(100 + y) / 100;
			//printf(" %d -> %d %d ->%d %d\n", i, past_n1, s-i, past_n2, new_s);
			if (new_s > max_s) {
				max_s = new_s;
			}
		}

		printf("%d\n", max_s);
	}
	return 0;
}