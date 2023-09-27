#include <cstdio>

int main()
{
	int N, M, P;
	while (scanf("%d %d %d", &N, &M, &P) != EOF) {
		if (N == 0 && M == 0 && P == 0)
			break;
		
		int sum = 0, m = 0, t;
		for (int i = 0; i < N; ++i) {
			scanf("%d", &t);
			sum += t;
			if (i == (M-1))
				m = t;
		}

		sum *= 100 * ((100 - P) / 100.0);
		if (m == 0)
			printf("0\n");
		else
			printf("%d\n", sum/m);
	}
	return 0;
}