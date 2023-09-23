#include <cstdio>
using namespace std;

int main() {
	int x, y;
	int d;

	scanf("%d%d", &x, &y);
	if (x < y) {
		d = x;
		x = y;
		y = d;
	}
	while ((d=x%y) != 0) {
		x = y;
		y = d;
	}

	printf("%d\n", y);

	return 0;
}