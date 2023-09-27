#include <stdio.h>
#include <math.h>

int a[999999];

int prime(int x) {
	if (a[x] == 1) return 1;
	else if (a[x] == 2) return 0;
	for (int i = 2; i < sqrt(x) + 1; i++) {
		if (x%i == 0) {
			a[x] = 2;
			return 0;
		}
	}
	return a[x]=1;
}
int main(){
	int n;
	while (scanf("%d", &n) != EOF){
		int count = 0;
		for (int i = 2; i <= n; i++) {
			if (prime(i))count++;
		}
		count++;
		if (n == 0)count = 0;
		if (n == 1)count = 0;
		if (n == 2)count = 1;
		printf("%d\n", count);
	}
	return 0;
}