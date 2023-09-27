#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

// s.....0=�{�� 1=����
int n, m, s = 0, c = 0;
char u[256][11] = {}, t[256][11] = {};

int check(int a, int b);

int main() {
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%s", &u[i]);
	}
	scanf("%d", &m);
	for (int i = 0; i < m; i++) {
		scanf("%s", &t[i]);
	}

	for (int i = 0; i < m; i++) {
		c = 0;

		for (int j = 0; j < n; j++) {
			if (check(j, i)) {
				c = 1;
				if (s == 0) {
					printf("Opened by %s\n", t[i]);
					s = 1;
					break;
				}
				if (s == 1) {
					printf("Closed by %s\n", t[i]);
					s = 0;
					break;
				}
			}
		}

		if (c == 0) {
			printf("Unknown %s\n", t[i]);
		}
	}
	return 0;
}

int check(int a, int b) {
	for (int i = 0; i < 10; i++) {
		if (u[a][i] != t[b][i])
			return 0;
		if (u[a][i] == t[b][i] && u[a][i] == 0)
			return 1;

	}
	//printf("fadsfasf");
	return 1;
}
