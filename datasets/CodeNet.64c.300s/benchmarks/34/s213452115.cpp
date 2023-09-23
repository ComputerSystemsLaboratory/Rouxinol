#include <cstdio>
using namespace std;

int main() {
	const int MAX_N = 100;
	int N;
	int A[MAX_N];
	int key, p;

	scanf("%d", &N);
	for (int i = 0;i < N;i++) {
		scanf("%d", A + i);
	}

	for (int i = 0;i < N;i++) {
		key = A[i];
		p = i - 1;
		while (p >= 0 && A[p] > key) {
			A[p + 1] = A[p];
			p--;
		}
		A[p + 1] = key;
		for (int j = 0;j < N;j++) {
			printf("%d%c", A[j], (j + 1 < N) ? ' ' : '\n');
		}
	}

	return 0;
}