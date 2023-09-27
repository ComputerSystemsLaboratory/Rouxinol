#include <stdio.h>

int main(void)
{
    int prime[1000000]; //prime[i] = 1 ... i is prime number.
    int a, d, n;
    int i, j;
    for (i = 1; i < 1000000; i++) {
	prime[i] = 1;
    }
    prime[1] = 0;
    for (i = 4; i < 1000000; i += 2) {
	prime[i] = 0;
    }
    for (i = 3; i < 1000; i += 2) {
	if (prime[i] == 0) continue;
	for (j = i * i; j < 1000000; j += i) {
	    prime[j] = 0;
	}
    }

    while(1) {
	scanf("%d %d %d", &a, &d, &n);
	if (a == 0) break;
	i = 0;
	while(1) {
	    if (prime[a + d * i]) {
		n--;
	    }
	    if (n == 0) break;
	    i++;
	}
	printf("%d\n", a + d * i);
    }
    return 0;
}