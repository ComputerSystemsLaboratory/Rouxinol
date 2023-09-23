#include <stdio.h>

int main(void)
{
    int i, N, a, b, c, A, B, C;
    scanf("%d", &N);
    for (i = 0; i < N; i++) {
	scanf("%d %d %d\n", &a, &b, &c);
	A = a * a;
	B = b * b;
	C = c * c;
	if (C == A + B) {
	    printf("YES\n");
	} else if (A == B + C) {
	    printf("YES\n");
	} else if (B == C + A) {
	    printf("YES\n");
	} else {
	    printf("NO\n");
	}
    }
    return 0;
}