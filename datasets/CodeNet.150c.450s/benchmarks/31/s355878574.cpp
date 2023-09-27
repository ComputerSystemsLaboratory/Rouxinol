#include <cstdio>
using namespace std;

int main() {
	int N, R;
	int m;
	int res = -2000000000;

	scanf("%d", &N);
	scanf("%d", &m);
	for (int i = 1;i < N;i++) {
		scanf("%d", &R);
		
		if (res < R - m) {
			res = R - m;
		}
		if (R < m) {
			m = R;
		}
	}

	printf("%d\n", res);

	return 0;
}