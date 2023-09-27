#include <stdio.h>

int main(void) {
	int n, m;
	int answer = 0;
	scanf("%d %d", &n, &m);

	int vector1[n][m];
	int vector2[m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &vector1[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		scanf("%d", &vector2[i]);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			answer += vector1[i][j] * vector2[j];
		}
		printf("%d\n", answer);
		answer = 0;

	}

	return 0;
}
