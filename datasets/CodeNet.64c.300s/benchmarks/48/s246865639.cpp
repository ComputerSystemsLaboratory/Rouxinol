#include<stdio.h>
int a[1000001];

int Func(int n) {
	if (n == 0)return 0;
	else return a[n] + Func(n - 1);
}

int main() {
	a[0] = 0;
	a[1] = 0;
	a[2] = 1;
	for (int i = 3; i <= 1000000; i++) {
		if (i % 2 == 0)a[i] = 0;
		else {
			int h = 1;
			for (int j = 3; j*j <= i && h == 1; j += 2) {
				if (i%j == 0)h = 0;
			}
			a[i] = h;
		}
	}
	int n;
	while (~scanf("%d", &n)) {
		printf("%d\n", Func(n));
	}
}

