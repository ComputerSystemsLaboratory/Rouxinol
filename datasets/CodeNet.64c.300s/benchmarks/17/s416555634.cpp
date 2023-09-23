#include <cstdio>
#include <algorithm>
using namespace std;

int main()
{
	for (;;) {
		int x, y, s;
		scanf("%d %d %d", &x, &y, &s);
		if (x == 0 && y == 0 && s == 0)
			break;
		
		int ans = 0;
		for (int i = 1; i < s; ++i) {
			for (int j = 1; j < s; ++j) {
				if (i * (100 + x) / 100 + j * (100 + x) / 100 == s) {
					int t = i * (100 + y) / 100 + j * (100 + y) / 100;
					ans = max(ans, t);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}