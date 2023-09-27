#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
using namespace std;

int main(void) {

	int a = 0, b = 0, temp;

	for (int i = 0; i < 4; i++) {
		scanf("%d", &temp);
		a += temp;
	}
	for (int i = 0; i < 4; i++) {
		scanf("%d", &temp);
		b += temp;
	}

	printf("%d\n", max(a, b));

	return 0;
}