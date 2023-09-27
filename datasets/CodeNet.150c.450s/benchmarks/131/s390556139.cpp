//============================================================================
// Name        : AOJ1180.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
using namespace std;

void sortASC(int a[], int b[], int n) {
	int i, j, min_i, tmp;
	for (i = 0; i < n; i++)
		b[i] = a[i];
	for (i = 0; i < n - 1; i++) {
		min_i = i;
		for (j = i + 1; j < n; j++) {
			if (b[min_i] > b[j])
				min_i = j;
		}
		if (min_i != i) {
			tmp = b[i];
			b[i] = b[min_i];
			b[min_i] = tmp;
		}
	}
	return;
}

void sortDSC(int a[], int b[], int n) {
	int i, j, max_i, tmp;
	for (i = 0; i < n; i++)
		b[i] = a[i];
	for (i = 0; i < n - 1; i++) {
		max_i = i;
		for (j = i + 1; j < n; j++) {
			if (b[max_i] < b[j])
				max_i = j;
		}
		if (max_i != i) {
			tmp = b[i];
			b[i] = b[max_i];
			b[max_i] = tmp;
		}
	}
	return;
}

void sub(int a[], int b[], int c[], int n) {
	int i;
	for (i = 0; i < n; i++)
		c[i] = a[i];
	for (i = n - 1; i > 0; i--) {
		c[i] = c[i] - b[i];
		if (c[i] < 0) {
			c[i - 1]--;
			c[i] += 10;
		}
	}
	c[0] -= b[0];
	return;
}

int main() {
	int flag, inp, i, j, k, L, count, *a[21], *aA, *aD;
	scanf("%d %d", &inp, &L);
	while (inp != 0 || L != 0) {
		for (i = 0; i <= 20; i++)
			a[i] = (int *) malloc(sizeof(int) * L);
		aA = (int *) malloc(sizeof(int) * L);
		aD = (int *) malloc(sizeof(int) * L);
		for (i = L - 1; i >= 0; i--) {
			a[0][i] = inp % 10; /* 入力された値を配列形式にして代入 */
			inp /= 10;
		}
		sortDSC(a[0], aA, L);
		sortASC(a[0], aD, L);
		flag = 0;
		for (i = 1; flag == 0 && i <= 20; i++) {
			sub(aA, aD, a[i], L);
			sortDSC(a[i], aA, L);
			sortASC(a[i], aD, L);
			for (j = 0; j < i && flag == 0; j++) {
				count = 0;
				for (k = 0; k < L; k++) {
					if (a[i][k] == a[j][k])
						count++; /*一致した配列の数を数える*/
				}
				if (count == L)
					flag = 1;
			}
		}
		i--;
		j--;
		printf("%d ", j);
		count = 0;
		for (k = 0; k < L; k++) {
			if (a[i][k] == 0)/* ０の数を数える */
				count++;
		}
		if (count == L)
			printf("0");
		else {
			for (k = 0; k < L; k++) {
				if (a[i][k] != 0) {
					while (k < L) {
						printf("%d", a[i][k]);
						k++;
					}
				}
			}

		}
		printf(" %d\n", i - j);
		scanf("%d %d", &inp, &L);
	}
	return 0;
}