#include <stdio.h>
using namespace std;
int main() {
	int a, b;
	int c[9];
	c[0] = 0;
	c[1] = 10;
	for(int i = 2; i < 10; i++) {
		c[i] = c[i - 1] * 10;
	}
	while(scanf("%d %d", &a, &b) != EOF) {
		int i = 0;
		while(a + b >= c[i]) i++; 
		printf("%d\n", i);
	}
	return 0;
}