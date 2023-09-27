#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char T[256][11], U[256][11];
	int n, N, i, j, close = 1, flag;

	scanf("%d", &n);
	for (i = 0; i<n; i++) {
		scanf("%s", T[i]);
	}

	scanf("%d", &N);
	for (i = 0; i<N; i++) {
		scanf("%s", U[i]);
	}
	for (j = 0; j<N; j++) {
		flag = 0;
		for (i = 0; i<n; i++) {
			if (strcmp(T[i], U[j]) == 0) {
				close = (close == 1) ? 0 : 1;
				flag = 1;
			}
		}
		if (close == 1 && flag == 1)
			printf("Closed by %s\n", U[j]);
		else if (flag == 1)
			printf("Opened by %s\n", U[j]);
		else
			printf("Unknown %s\n", U[j]);
	}

	return 0;
}
/*
<input example>
3 //register three ID
Ant
Antonio
Android
4 //Check four ID
Android
Anko
Antonio
Alex
<output>//At first door is closed.
Android Opened
Anko is Unknown
Antonio Closed
Alex is Unknown
*/
