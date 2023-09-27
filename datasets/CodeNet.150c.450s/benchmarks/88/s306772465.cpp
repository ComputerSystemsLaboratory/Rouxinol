#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int w, h;
	int r;
	bool pow[40001];
	bool outputed;

	for (int i = 1;i <= 200;i++) {
		pow[i*i] = true;
	}

	while (true) {
		scanf("%d%d", &h, &w);
		if (w == 0 && h == 0)break;

		r = w*w + h*h;
		outputed = false;
		for (int R = r;;R++) {
			for (int a = 1;a*a < R / 2;a++) {
				if (pow[R - a*a] && (R > r || a > h)) {
					printf("%d %d\n", a, (int)sqrt(R - a*a));
					outputed = true;
					break;
				}
			}
			if (outputed)break;
		}
	}

	return 0;
}