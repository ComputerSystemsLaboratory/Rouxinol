#include <cstdio>
#include <algorithm>
using namespace std;

int main() {
	int x, y;
	while (1) {
		scanf("%d %d", &x, &y);
		if (!x && !y) break;
		printf("%d %d\n", min(x, y), max(x, y));
	}
	return 0;
}