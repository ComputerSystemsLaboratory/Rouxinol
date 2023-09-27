#include <cstdio>
#include <cmath>
#include <algorithm>
#include <iostream>
using namespace std;
#define YAKU_MAX 31623

int n, arr[YAKU_MAX], sosu[YAKU_MAX], nn, sosu_ko;

void Eratosthenes() {
	for (int i = 0; i < nn; i++) {
		arr[i] = 1;
	}
	for (int i = 2; i < sqrt(nn); i++) {
		if (arr[i]) {
			for (int j = 0; i * (j + 2) < nn; j++) {
				arr[i *(j + 2)] = 0;
			}
		}
	}

	for (int i = 2; i < nn; i++) {
		if (arr[i]) {
			sosu[sosu_ko] = i;
			sosu_ko++;
		}
	}
}

int main() {
	scanf("%d", &n);
	printf("%d:", n);
	nn = sqrt(n) + 1;
	Eratosthenes();


	while (1) {
		bool comp = false;
		for (int i = 0; sosu_ko > i; i++) {
			if (n == sosu[i]) {
				printf(" %d\n", sosu[i]);
				return 0;
			}

			else if (!(n % sosu[i])) {
				printf(" %d", sosu[i]);
				n /= sosu[i];
				comp = true;
				break;
			}
		}
		if (!comp) {
			printf(" %d\n", n);
			return 0;
		}
	}
	return 0;
}