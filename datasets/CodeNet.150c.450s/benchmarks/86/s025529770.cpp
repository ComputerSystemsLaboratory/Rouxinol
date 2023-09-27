#include <cstdio>

int N, M, P, S, X[101];

int main()
{
	while (true)
	{
		S = 0; scanf("%d%d%d", &N, &M, &P);

		if (N == 0) { break; }

		for (int i = 1; i <= N; i++) { scanf("%d", &X[i]); S += X[i]; }

		printf("%d\n", X[M] == 0 ? 0 : (100 - P) * S / X[M]);
	}

	return 0;
}