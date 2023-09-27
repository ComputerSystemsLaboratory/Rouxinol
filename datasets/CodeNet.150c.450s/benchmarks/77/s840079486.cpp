#include <bits/stdc++.h>

int dx[4] = { 0, 1, 0, -1 };
int dy[4] = { 1, 0, -1, 0 };

char dir[5] = "NESW";

int N, M, D, X, Y, A, i, j, k, C[20], R[20], P[21][21];

char c;

int main()
{
	while (true)
	{
		scanf("%d", &N);

		if (N == 0) { break; }

		memset(P, 0, sizeof(P));

		X = Y = 10; A = 0; P[X][Y] = 1;

		for (i = 0; i < N; i++) { scanf("%d%d", &C[i], &R[i]); }

		scanf("%d", &M);

		for (i = 0; i < M; i++)
		{
			std::cin >> c >> D;

			for (j = 0; j < 4; j++)
			{
				if (c == dir[j])
				{
					for (k = 0; k < D; k++) { X += dx[j]; Y += dy[j]; P[X][Y] = 1; }
				}
			}
		}

		for (i = 0; i < N; i++) { A += P[C[i]][R[i]]; }

		printf("%s\n", A == N ? "Yes" : "No");
	}

	return 0;
}