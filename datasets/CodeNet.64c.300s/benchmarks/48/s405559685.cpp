#include <stdio.h>
#include <math.h>
int b[999999];

int prime(int x) {
	for (int i = 2; i < sqrt(x) + 1; i++) {
		if (x%i == 0) {
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	b[0] = 0;
	b[1] = 0;
	b[2] = 1;
	int count = 1;
	for (int i = 3; i <= 999999; i++) {
		if (prime(i))count++;
		b[i] = count;
	}
	while (scanf("%d", &n) != EOF){
		printf("%d\n", b[n]);
	}
	return 0;
}