#include <cstdio>

//input
int a, b, c, d, e, f;

void solve() {
	double x = 1.0 * (c * e - b * f) / (a * e - b * d);
	double y = (c - a * x) / b;
	if (x == -0)x = 0;
	if (y == -0)y = 0;
	printf("%.3lf %.3lf\n", x, y);
}

int main(int argc, char const *argv[]) {
	//  freopen("in.txt", "r", stdin);

	while (scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
		solve();
	}

	return 0;
}
