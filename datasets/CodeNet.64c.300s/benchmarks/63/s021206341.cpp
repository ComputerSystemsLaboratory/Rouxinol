#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long gcd(unsigned long a, unsigned long b) {
	if(a == 0 || b == 0) return 0;
	while(a != b) {
		if(a > b) a -= b;
		else b -= a;
	}
	return a;
}

unsigned long lcm(unsigned long a, unsigned long b) {
	if(a == 0 || b == 0) return 0;
	return (a / gcd(a, b)) * b;
}

int main() {
	unsigned long a, b;
	unsigned int arg[0xfFf][2] = { 0 };
	int cnt = 0;
	while(scanf("%d %d", &a, &b) != EOF) {
		arg[cnt][0] = a;
		arg[cnt++][1] = b;
	}
	int i;
	for(i = 0; i < cnt; i++) {
		printf("%d %d\n", gcd(arg[i][0], arg[i][1]), lcm(arg[i][0], arg[i][1]));
	}
}