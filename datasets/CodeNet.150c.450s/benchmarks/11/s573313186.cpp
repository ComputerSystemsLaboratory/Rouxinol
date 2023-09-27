#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>

using namespace std;

int main() {	
	int n, number = 0, cardnum[4][14] = { 0 };
	char Card,dummy;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%c", &dummy);
		scanf("%c", &Card);
		scanf("%d", &number);
		if (Card == 'S') {
			cardnum[0][number] = 1;
		}
		else if (Card == 'H') {
			cardnum[1][number] = 1;
		}
		else if (Card == 'C') {
			cardnum[2][number] = 1;
		}
		else if (Card == 'D') {
			cardnum[3][number] = 1;
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 1; j <= 13; j++) {
			if (cardnum[i][j] != 1) {
				if (i == 0)printf("S %d\n", j);
				else if (i == 1)printf("H %d\n", j);
				else if (i == 2)printf("C %d\n", j);
				else if (i == 3)printf("D %d\n", j);
			}
		}
	}
	return 0;
}