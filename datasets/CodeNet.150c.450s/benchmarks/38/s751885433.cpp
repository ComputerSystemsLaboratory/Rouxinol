#include<stdio.h>
#include<math.h>

int main()
{
	int N;
	scanf("%d", &N);
	int i, a[1000], b[1000], c[1000];
	for (i = 0; i < N; i++)
	{
		scanf("%d %d %d", &a[i], &b[i], &c[i]);
	}
	for (i = 0; i < N; i++)
	{
		float A = a[i], B = b[i], C = c[i];
		float d = fmax(A, B), sm1 = fmin(A, B);
		float biggest = fmax(d, C), sm2 = fmin(d, C);
		if (pow(biggest, 2) == (pow(sm1, 2) + pow(sm2, 2)))printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}