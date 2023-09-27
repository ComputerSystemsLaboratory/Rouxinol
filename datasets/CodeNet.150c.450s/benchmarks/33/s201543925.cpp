#include <cstdio>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	while (1) {
		int x, y, s;
		int ret = 0;
		scanf("%d%d%d", &x, &y, &s);
		if (x == 0)break;
		for (int i = 1; i < s; i++) {
			for (int j = 1; j < s; j++) {
				int ci = (i*(100 + x)) / 100;
				int cj = (j*(100 + x)) / 100;
				int di = (i*(100 + y)) / 100;
				int dj = (j*(100 + y)) / 100;
				if (ci + cj == s)ret = max(ret, di + dj);
			}
		}
		printf("%d\n", ret);
	}
	return 0;
}