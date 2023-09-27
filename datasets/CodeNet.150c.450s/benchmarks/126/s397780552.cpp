#include<cstdio>
#include<array>
#include<algorithm>
using namespace std;


array<array<bool, 17>, 17> temp;

int func(int x, int y) {
	if (x == 1 && y == 1 && temp[x - 1][y - 1] == false) {
		return 1;
	}
	else if (x == 0 || y == 0) {
		return 0;
	}
	else if (temp[x - 1][y - 1] != false) {
		return 0;
	}
	else {
		return func(x - 1, y) + func(x, y - 1);
	}
}

int main() {

	while (true) {
		int a, b, n;
		scanf("%d %d", &a, &b);
		if (a == 0 && b == 0) {
			break;
		}
		scanf("%d", &n);

		fill(temp.begin(), temp.end(), array<bool, 17>{});

		for (int i = 0; i < n; ++i) {
			int x, y;
			scanf("%d %d", &x, &y);
			temp[x - 1][y - 1] = true;
		}
		int temp3 = func(a, b);
		printf("%d\n", temp3);
	}

	return 0;
}