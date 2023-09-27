#include<cstdio>
#include<algorithm>
using namespace std;

int main() {
	int i, a, b, c;
	while (~scanf("%d%d%d", &a, &b, &c)) {
		int ans = 0;
		for (i = a; i <= b; i++) {
			if (c % i == 0) ans++;
		}
		printf("%d\n", ans);
	}
	return 0;
}