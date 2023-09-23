#include <stdio.h>
#include <math.h>

#define M_PI 3.141592653589793

int main(void) {

	int i = 0, j;
	int a[10000], b[10000];
	int flag = 0;
	char op[10000];

	while (1) {
		scanf("%d %c %d", &a[i], &op[i], &b[i]);
		if (op[i] == '?') {
			break;
		}
		else {
			i++;
		}
	}


	for (j = 0; j < i; j++) {
		switch (op[j]) {
		case '+': printf("%d\n", a[j] + b[j]); break;
		case '-': printf("%d\n", a[j] - b[j]); break;
		case '*': printf("%d\n", a[j] * b[j]); break;
		case '/': printf("%d\n", a[j] / b[j]); break;
		}
	}

	return 0;
}