#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
		for (;;) {
			int n;
			scanf("%d", &n);
			if (n == 0) { break; }

			int s_max = 0;
			int s_min = 100000000;
			int sum = 0;

			for (int i = 0; i < n; i++) {
					int s;
					scanf("%d", &s);

					sum += s;
					s_max = max(s, s_max);
					s_min = min(s, s_min);
			}

			sum -= s_max;
			sum -= s_min;

			printf("%d\n", sum / (n - 2));
		}
		return 0;
}